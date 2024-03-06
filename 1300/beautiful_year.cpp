#include <iostream>
#include <string>

inline bool check (std::string& y) {

  return (
    (y[0] != y[1]) && 
    (y[0] != y[2]) &&
    (y[0] != y[3]) && 
    (y[1] != y[2]) && 
    (y[1] != y[3]) && 
    (y[2] != y[3])
  );
}

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    std::string year;
    std::cin >> year;

    do {
      year = std::to_string(stoi(year) + 1);
    } while (!check(year));

    std::cout << year;

    return 0;
}