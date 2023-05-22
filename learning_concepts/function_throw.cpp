# include <iostream>

using namespace std;

short adding(short Value) {
    (Value < 0) ?
        throw "std::<try again>" :
    Value += 1;
    return (Value);
}

class stack{
    bool NRL;

    public :
        stack() {
            std::cout << "stack called !" << endl;
        }
        ~stack() {
            std::cout << "stack destroy !" << endl;
        }
};

void objec(void *pointers) {
    stack s1;
    stack s2;
    char mkp[10];

    if (!pointers)
        throw std::string("HE:LL");

    std::cout << "HERE" << std::endl;
}


bool leaks(bool memory)
{
    int *string = new int[100];
    memory ? throw (short)-12 : 0;

    cout << "iam still here" << endl;
    delete[] string;
    return (true);
}

int main (int ac, char **athv)
{
    try {
        objec(NULL);
    }
    catch (std::string OBJ){
        cout << OBJ << endl;
    }
    
    catch (...) {
        std::cout << "Error !" << endl;
    }


    return EXIT_FAILURE;

    try {
        std::cout << "Boolean => " << leaks(ac == 1 ? false  : true) << std::endl;
    }

    catch (short Taking) {
        cout << Taking << " <" << endl;
    }
    system("leaks a.out");



    return EXIT_FAILURE;
    
    
    try
    {
        short let;

        let = adding(-2);
        std::cout << "Adding number : " << std::endl; 
    }
    catch (const char *msgError) {
        cout << "Error : " << msgError << endl;
    }
    catch (...) {
        cout << "Error indefine !" << endl;
    }
}