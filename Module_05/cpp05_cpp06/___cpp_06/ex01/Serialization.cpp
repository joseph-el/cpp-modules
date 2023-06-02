# include "Serialization.hpp"

Serialization::Serialization() {}
Serialization::~Serialization() {}
Serialization::Serialization(const Serialization &) {}
Serialization& Serialization::operator = (const Serialization &) {return *this;}

uintptr_t Serialization::serialize(Data* ptr) {
    
    uintptr_t converted = reinterpret_cast<uintptr_t>(ptr);
    
    return (converted);
}

Data* Serialization::deserialize(uintptr_t raw) {
    Data *ret;
    ret = reinterpret_cast<Data *>(raw);
    return ret;
}