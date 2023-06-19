# include "Serialization.hpp"


int main() {

    Serialization r;

    Data *ret = new Data;
    ret->Var = 22;

    std::cout << "address " << ret << std::endl;
    std::cout << r.serialize(ret) << std::endl;
    puts("--------------");
    std::cout << r.deserialize(r.serialize(ret)) << std::endl;

    delete ret;

}