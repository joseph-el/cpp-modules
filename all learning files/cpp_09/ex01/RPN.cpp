# include "RPN.hpp"

int Make_operations(int num1, int num2, char _operator)
{
    int result =

        (_operator == '*') * (num1 * num2) + \
        (_operator == '+') * (num1 + num2) + \
        (_operator == '-') * (num1 - num2) + \
        (_operator == '/') * (num1 / num2);

    return result;
}

int rpn(const char *___postfix)
{
    int                     result, num1, num2;
    t_rpn                   rpn;
    std::string             postfix(___postfix);
    std::string::iterator   it = postfix.begin();

    for (; it != postfix.end(); it++)
    {
        if (spaces(*it))
            continue;
        if (!std::isdigit(*it) and !operations(*it))
            return -1;
        if ((rpn.empty() or rpn.size() == 1) and operations(*it))
            return -1;
        if (rpn.size() >= 2 and operations(*it)) {
            num2 = rpn.top(); rpn.pop();
            num1 = rpn.top(); rpn.pop();
            rpn.push(Make_operations(num1, num2, *it));
        }
        else
            rpn.push( atoi ( postfix.substr(it - postfix.begin(), 1).c_str() ) );    
    }
    result = rpn.top(); rpn.pop();
    return (result);
}