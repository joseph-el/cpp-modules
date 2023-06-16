# include <iostream>
# include <memory>

using namespace std;

struct memoryE{
    
    short *RBN;
    char *HEK;
        memoryE() : RBN(NULL), HEK(NULL) {
            cout << "default" << endl;
        };
        ~memoryE() {
            if (RBN)
                free(RBN);
            if (HEK)
                free(HEK);
            cout << "destroy " << endl;
        }
};

void leaks(memoryE &Ret, bool memory) {
    
    short *RBN;
    char  *HEK;

    std::unique_ptr<short[]> ptr = std::make_unique<short[]>(10);
    // std::unique_ptr<short, void(*)(short*)> ptr(new short[10], CustomDeleter);


    // HEK = (char *)malloc(sizeof(short) * ENEEDAUTH);
    // RBN = (short *)malloc(sizeof(char) * ENETUNREACH);

    memory ? throw string("TRY") : 0;

    cout << "HERE" << endl;
}

int main(int ac, char **argv) {
    
    memoryE Ret;

    try {
        leaks(Ret, true);
    }
    catch (...) {
        cout << "Error" << endl;
    }

    system("leaks a.out");
    return -1;
}