# include <iostream>
# include <memory>


using namespace std;

# ifndef __pr__
# define pr(X) cout << X << endl;
# endif

void W() {
    pr("start W");
    throw 122;
    pr("end of W");
}

void Z() {
    pr("start Z");
    try {
        W();
    }
    catch (size_t) {
        pr("Z catch");
    }
    pr("end of Z");
}

void Y() {
    pr("start Y");
    try {
        Z();
    }
    catch (double) {
        pr("Y catch");
    }
    pr("end of Y");
}


void X() {
    pr("start X");
    try {
        Y();
    }
    catch (double) {
        pr("X catch");
    }
    pr("end of X");
}

void calling_2(void) {
    pr("iam in calling 2");
    throw std::string(" std::excption ");
    pr("end of calling_2");
}

void calling_1(void) {

    pr("iam in calling 1");
    try {
        calling_2();
        pr("return form scope ?");
    }
    catch (int) {
        pr("catch from calling_1 int");
    }
    pr("end of calling_1");
}



int main(int ac, char **argv)
{

    {
        try {
            calling_1();
        }
        catch (string &ret) {
            cout << "J ==> " << ret << endl;
        }
        pr("Joseph here");
        return -2;
    }

    pr("start main");

    try {
        X();
    }
    catch (int x) {
        pr("main catch");
    }
    pr("end main");

    std::exit(-2);
}