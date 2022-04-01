#include <iostream>
#include <random>

int main() {
    std::random_device rd;
    std::mt19937 randGene(rd());
    std::uniform_int_distribution<std::size_t> dice(0, 1);
    /* std::default_random_engine engine(rd()); */
    /* std::uniform_int_distribution<std::size_t> dis(0,100); */

    for (int i = 0; i < 20; i++) {
	std::cout << dice(randGene) << std::endl;
    }
}
