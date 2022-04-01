#include <iostream>
#include <string>

int main() {
    std::string asd{"asd\0qwe"};

    std::cout << asd << std::endl;
    std::cout << asd.size() << std::endl;

    auto& aty = "qwuih\0qwe,qwe";
    std::string nqwiu(aty, aty + sizeof(aty));
    std::cout << nqwiu << std::endl;
    std::cout << nqwiu.size() << std::endl;
    std::cout << sizeof aty << std::endl;
    using namespace std::literals::string_literals;
    /* auto str = "String!\0 This is a string too!"s; */
    std::string fd = "qwd"s;
    std::basic_string<char> vfd = "qwd"s;
    auto str = "String!\0 This is a string too!"s;
}
