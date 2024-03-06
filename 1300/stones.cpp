#include <iostream>

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int n, out = 0;
  std::cin >> n;
  std::cin.get();

  char c, prev;

  do {
    std::cin.get(c);
    if (c == prev) {
      out++;
    }
    prev = c;
  } while (c != '\n');

  std::cout << out;

  return 0;
}