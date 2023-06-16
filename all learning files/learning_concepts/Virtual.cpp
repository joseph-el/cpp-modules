# include <iostream>
# include <string>

class UF{
    protected :
        int i;
        int j;
    public :
    std::string Get(void);
};

class SSUB : public UF{
    private :
        std::string name;
        float diff;
    
    public :
    SSUB(const std::string &t_name, float t_diff) : name(t_name), diff(t_diff) {}
    std::string Get(void);
};

// SSUB::SSUB("JOSEPH-LINA", 12.47);

std::string SSUB::Get(void){
    return (name);
}

std::string UF::Get(void){
    return ("HEY, EXIT_SUCCESS");
}

int main (void){
    UF *s1;
    SSUB *s2;

    s1 = new UF();
    std::cout << s1->Get() << std::endl;

    s2 = new SSUB("HELLO JOSEPH", 2.4);
    std::cout << s2->Get() << std::endl;
    
    UF *tmp;
    tmp = s2;

    std::cout << tmp->Get() << std::endl;


    return 0;
}