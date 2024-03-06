#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    char c;
    std::cin.get(c);
    while (c != '\n') {
      if (c == '.') {
        std::cout << 0;
      }
      else {
        std::cin.get(c);
        if (c == '-') {
          std::cout << 2;
        }
        else {
          std::cout << 1;
        }
      }
      std::cin.get(c);
    }

    return 0;
}