#include <iostream>
#include <vector>
#include <chrono>
#include <limits>

std::vector<int> Loop(int n) {
  if (n < 2)
    return {};

  std::vector<int> res{};
  res.push_back(2);

  for (int i = 3; i <= n; i += 2) {
    int j{};
    for (j = 3; j <= n; j += 2) {
      if (i % j == 0 || j * j > i)
        break;
    }
    if (j * j > i)
      res.push_back(i);
  }
  return res;
}

std::vector<int> Eratosthenes(int n) {
  if (n < 2)
    return {};
  std::vector<int> res{};
  std::vector<bool> accessed(n + 1, false);

  for (auto i = 2; i < n; i++) {
    if (!accessed[i]) {
      for (auto j = 2; j < n; j++) {
        if (i * j <= n) {
          accessed[i * j] = true;
        } else {
          break;
        }
      }
    }
  }
  for (int i = 2; i <= n; i++) {
    if (!accessed[i])
      res.push_back(i);
  }
  return res;
}

int main() {
	using namespace std::literals::chrono_literals;
  int n{};

  while (true) {
    std::cout << "Enter an Integer: ";
    while (!(std::cin >> n)) {
      std::cout << "Wrong Integer, Try Again: ";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    {
			auto start = std::chrono::high_resolution_clock::now();
      auto &&res = Loop(n);
      /* for (auto it : res) { */
      /*   std::cout << it << " "; */
      /* } */
			auto end = std::chrono::high_resolution_clock::now();
      /* std::cout << std::endl; */
			std::chrono::duration<double> diff = end - start;
			std::cout<<"Loop Time Overhead: "<<diff.count()<<"s\n";
    }
    {
			auto start = std::chrono::high_resolution_clock::now();
      auto &&res = Eratosthenes(n);
      /* for (auto it : res) { */
      /*   std::cout << it << " "; */
      /* } */
			auto end = std::chrono::high_resolution_clock::now();
      /* std::cout << std::endl; */
			std::chrono::duration<double> diff = end - start;
			std::cout<<"Eratosthenes Time Overhead: "<<diff.count()<<"s\n";
    }
  }
}

