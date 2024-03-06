#include <iostream>
#include <vector>

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  std::vector<int> first;
  char c;
  std::cin.get(c);

  while (c != '\n') {
    first.push_back(c);
    std::cin.get(c);
  }

  for (char f : first) {
    std::cin.get(c);
    if (c != f) {
      std::cout << 1;
      continue;
    }
    std::cout << 0;
  }
  
  return 0;
}