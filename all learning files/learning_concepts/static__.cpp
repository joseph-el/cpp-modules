# include <iostream>

using namespace std;

class Vec {
    

    static short leet;
    bool le;
    static void get_(void) {
        cout << leet << ", " << endl;
    }

    public :
        static int Get(void) 
        {
                // Vec::le = 1;
                Vec::leet = 11;
                cout << leet << endl;
                return 'A';
        }

        void rrr()
        {
            leet = 14;
        }
    static int get_leet(void);
    static int get(void);
};

int Vec::get_leet(void)
    {
        puts("leet get!");
        return (leet);
    }

Vec::get(void)
{
        return (leet);
};


short Vec::leet;

int main()
{
    
    Vec Re;

    Re.Get();


    printf("check |%d|\n", Re.get_leet());

}