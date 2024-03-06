#include <iostream>

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int n, max = 1, min = 100, iMax, iMin;
  std::cin >> n;

  for (int i = 0; i < n; i++) {
    int x;
    std::cin >> x;

    if (x > max) {
      max = x;
      iMax = i;
    } else if (x <= min) {
      min = x;
      iMin = i;
    }
  }

  if (iMax < iMin) {
    std::cout << iMax + (n - iMin - 1);
  }
  else {
    std::cout << iMax + (n - iMin - 2);
  }

  return 0;
}