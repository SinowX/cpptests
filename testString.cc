#include <iostream>
#include <string>

int main() {
    uint16_t asd = 21;
    /* std::string qwe= std::to_string(asd); */

    std::cout << std::to_string(asd) << std::endl;
    std::string tmp("asdfghjkl");
    tmp.erase(tmp.size() + 1);	// error, out of range
    std::cout << tmp << std::endl;
}
