#include <iostream>

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int n;
  std::cin >> n;

  if (n % 2) {
    std::cout << -1;
    return 0;
  }

  for (int i = 1; i < n + 1; i++) {
    std::cout << i + 1 << " " << i << " ";
    i++;
  }

  return 0;
}