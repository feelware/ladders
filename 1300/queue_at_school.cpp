#include <iostream>

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int n, t;
  std::cin >> n >> t;

  char q[n];

  for (int i = 0; i < n; i++) {
    char kid;
    std::cin >> q[i];
  }

  for (int x = 0; x < t; x++) {
    bool done = true;
    for (int i = 0; i < n - 1; i++) {
      if (q[i] == 'B' && q[i + 1] == 'G') {
        done = false;
        q[i] = 'G';
        q[i + 1] = 'B';
        i++;
      }
    }
    if (done) {
      break;
    }
  }

  for (int i = 0; i < n; i++) {
    std::cout << q[i];
  }

  return 0;
}