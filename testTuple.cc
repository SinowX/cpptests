#include <iostream>
#include <tuple>

int main() {
	auto asd = std::make_tuple(12,45,3);
	auto d = std::get<0>(asd);
}
