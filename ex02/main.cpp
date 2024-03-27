#include "Base.hpp"

int main(void) {
  Base *b = generate();
  std::cout << "Pointer: ";
  identify(b);
  std::cout << "Reference: ";
  identify(*b);
  delete b;
}
