#include <iostream>

class A {
 private:
  void helloAgain() { std::cout << "hello again" << std::endl; }

 public:
  class Nest {
   public:
    void OMG() { std::cout << "OMG" << std::endl; }
  };
  void hello() { std::cout << "hello" << std::endl; }
};

class B : A {
 public:
  void asd() {
    hello();
    /* Nest::OMG(); */
  }
  class NestDerived : Nest {
    void Holy() { std::cout << "Holy..." << std::endl; }
  };
};
