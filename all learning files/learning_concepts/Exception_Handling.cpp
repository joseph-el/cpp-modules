# include <iostream>

using namespace std;

struct tree {
    private :
        int Ds;
    public :
        void DS(void) {
            cout << "DS " << this->Ds << endl;
        }

};

// void TRY(void *strError) throw {
//     std::cout << "ERROR" << std::endl;
// }


int main() {


    // {
    //     int x, y;
    //     cin >> x;
    //     cin >> y;
    //     std::cout << "THE ERROR" << (x / y) << endl;
    //     return 1;
    // }

    void *str;

    str = malloc(-2);

    try {
        if (!str)
            throw "Malloc Error !";
        else {
            std::cout << "YES" << std::endl;
        }
    }
    catch (const char *Error) {
        std::cout << Error << std::endl;
    }
    
    std::cout << "The program still run!" << std::endl;

    std::string input;

    getline(std::cin, input);
    try {
        if (input.empty())
            throw ("ddd");
        std::cout << "IAM STILL HERE" << std::endl;
    }

    catch (exception e) {
        std::cout << e.what() << endl;
    }
    catch (char c) {
        // std::cout << "Error NB " << NB_ERORR << endl;
        cout << "S" << endl;
    }
    catch (int KI) {
        std::cout << "JUJU" << KI << endl;
    }

    std::cout << "IAM STILL RUNNING" << std::endl;


}