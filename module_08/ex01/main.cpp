# include "Span.hpp"

int main(void) {

    try {
        Span sp(4);
        for (int i = 0; i < 4; i++)
            sp.addNumber(-1);
        std::cout  << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (const char *ErrorMsg) {
        std::cout << ErrorMsg << std::endl;
    }

    puts("---------------------");

    const int MAX = 10000;
    try {
        Span sp(MAX);
        for (int i = 0; i < MAX; i++)
            sp.addNumber(rand() % 2003);
        sp.addNumber(1);
        sp.addNumber(-1);
    }
    catch (const char *ErrorMsg) {
        std::cout << "OUT OF RANGE : ";
        std::cout << ErrorMsg << std::endl;
    }

    puts("---------------------");

    try {
        Span sp;
    }
    catch (const char *ErrorMsg) {
        std::cout << ErrorMsg << std::endl;
    }

    puts("---------------------");

    try {
        Span sp(0);
    }
    catch (const char *ErrorMsg) {
        std::cout << ErrorMsg << std::endl;
    }

    puts("---------------------");

    try {
        Span sp = Span(-1);

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout  << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (const char *ErrorMsg) {
        std::cout << ErrorMsg << std::endl;
    }

    puts("---------------------");

    try {
        Span sp = Span(5);

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout  << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (const char *ErrorMsg) {
        std::cout << ErrorMsg << std::endl;
    }

    puts("---------------------");

    try {
        Span sp = Span(4);

        sp.addNumber(214748300);
        sp.addNumber(-21474800);
        sp.addNumber(9);
        sp.addNumber(100);


        std::cout << "Check SHORT : correct output : " << 100 - (9) << std::endl;
        std::cout << "Check LONG : correct output : " << 214748300 - (-21474800) << std::endl;


        std::cout  << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (const char *ErrorMsg) {
        std::cout << ErrorMsg << std::endl;
    }
    puts("----++----");
    try {
        Span sp(4);
        sp.addNumber(8);
        sp.addNumber(10);
        sp.addNumber(100);
        sp.addNumber(1);

        Span ret(sp);
        std::cout << ret.longestSpan() << std::endl;
        std::cout << ret.shortestSpan() << std::endl;
    }
    catch (const char *ErrorMsg) {
        std::cout << ErrorMsg << std::endl;
    }
}
