# include <iostream>
# include <memory>

using namespace std;

# if !defined(PR)
# define pr(c) cout << c << endl;
# endif

struct called {
    called() {
        pr("< called struct >!");
    }
    ~called() {
        pr("destory called >!");
    }
};

class Men {

    private :
        int x;
        struct called ret;

    public :
        Men() {
            pr("default of Men !");
        }
        Men(int _x) : x(_x) {
            pr("men called !");
            if (_x < 0)
                throw ENOATTR;
        }
        ~Men() {
            pr("men destroy !");
        }
};

int main()
{
    try {
        Men K(-2);
    }
    catch (...) {
        pr("main catch !");
    }


}