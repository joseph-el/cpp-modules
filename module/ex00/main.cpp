#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <limits>
#include <climits>

typedef const std::string &sref;

bool is_sci(std::string &s) {
	if (s=="nan" || s=="+inf" || s=="-inf")
		return true;
	else if (s=="nanf" || s=="+inff" || s=="-inff")
		return s.pop_back(), true;
	return false;
}

bool is_char(sref s, double &value_holder) {
	if (s.length() == 1 && !isdigit(s[0])) {
		return value_holder = static_cast<double>(s[0]), true;
	}
	return false;
}

bool is_int(sref s, double &value_holder) {
	long long value = 0;
	long long sign = s[0]=='-'? -1: 1;
	for (int i = (s[0]=='+' || s[0]=='-'); s[i]; i++) {
		if (!isdigit(s[i]))
			return false;
		value *= 10;
		value += s[i]-'0';
		if (value*sign > INT_MAX || value*sign < INT_MIN)
			return false;
	}
	return value_holder = static_cast<double>(value), true;
}

bool is_real(sref s, double &value_holder) {
	const char *cstr = s.c_str();
	char       *endp;
	
	value_holder = strtod(cstr, &endp);
	if (isinf(value_holder) || isnan(value_holder))
		return false;
	return !endp[0] || (endp[0]=='f' && !endp[1]);
}

int main(int ac, char **av) {
	if (ac != 2 || !av[1][0])
		return std::cerr << "invalid parameters\n", 1;

	std::string s(av[1]);
	double value;

	if (is_sci(s)) {
		std::cout << "char: impossible\n";
		std::cout << "int: impossible\n";
		std::cout << "float: " << s << "f\n";
		std::cout << "double: " << s << '\n';
	}
	else if (is_char(s, value) || is_int(s, value) || is_real(s, value)) {
		char c = static_cast<char>(value);
		int  d = static_cast<int>(value);
		float f = static_cast<float>(value);
		std::cout << "char: ";
		if (isprint(d))
			std::cout << "'" << c << "'\n";
		else
			std::cout << "Non displayable\n";
		std::cout << "int: " << d << "\n";
		std::cout << "float: " << f << (f - static_cast<int>(f)? "f\n": ".0f\n");
		std::cout << "double: " << value << (value - d? "\n": ".0\n");
	}
	else {
		std::cout << "Invalid conversion\n";
	}
}