#include <iostream>
#include <limits>

void Exp1() {
  std::cout << "Enter a number, or -1 to quit: ";
  int i = 0;
  while (std::cin >> i) {  // GOOD FORM
    if (i == -1) break;
    std::cout << "You entered " << i << '\n';
  }
}

void Exp2() {
  int age = 0;
  while ((std::cout << "How old are you? ") && !(std::cin >> age)) {
    std::cout << "That's not a number; ";
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  std::cout << "You are " << age << " years old\n";
}

void Exp3() {
  int age = 0;
  while ((std::cout << "How old are you? ") &&
	 (!(std::cin >> age) || age < 1 || age > 200)) {
    std::cout << "That's not a number between 1 and 200; ";
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  std::cout << "You are " << age << " years old\n";
}

int main() {
	Exp1();
	Exp2();
	Exp3();
}
