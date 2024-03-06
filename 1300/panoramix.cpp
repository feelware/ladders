#include <iostream>
#include <algorithm>
#include <array>

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int n, m;
  std::cin >> n >> m;
  
  std::array<int, 15> primes = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
  std::array<int, 15>::iterator it;

  it = std::find(primes.begin(), primes.end(), n);

  if (*(it + 1) == m) {
    std::cout << "YES";
    return 0;
  }

  std::cout << "NO";
  return 0;
}