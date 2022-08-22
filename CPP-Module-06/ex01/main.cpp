#include "Data.hpp"

//cast from data* to uintptr_t.
uintptr_t serialize(Data *ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

//cast from uintptr_t to data *.
Data *deserialize(uintptr_t raw) {
    return reinterpret_cast<Data *>(raw);
}

std::ostream &operator<<(std::ostream &os, const Data &data) {
    os << "Product: " << data._string << " | Count: " << data._count
       << " | Letter: " << data._c << " | Sum: $" << data._sum;
    return os;
}

int main() {

    std::cout << COLOR_YELLOW << "<Before>" << COLOR_CLEAR << std::endl;
    Data data = Data("Apples", 21, 'Y', 42.42f);
    std::cout << "Data content: " << data << std::endl;
    std::cout << "Data address: " << &data << std::endl;

    std::cout << COLOR_YELLOW << "<serialize>" << COLOR_CLEAR << std::endl;
    uintptr_t ptr = serialize(&data);
    std::cout << "uintptr: " << ptr << std::endl;
    std::cout << "uintptr in hex: 0x" << std::hex << ptr << std::endl;

    std::cout << COLOR_YELLOW << "<deserialize>" << COLOR_CLEAR << std::endl;
    Data *dataAfter = deserialize(ptr);
    std::cout << std::dec << std::endl;

    std::cout << COLOR_YELLOW << "<After>" << COLOR_CLEAR << std::endl;
    std::cout << "Data content: " << *dataAfter << std::endl;
    std::cout << "Data address: " << dataAfter << std::endl;


    return 0;
}
