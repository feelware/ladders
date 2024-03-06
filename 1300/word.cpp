#include <iostream>
#include <algorithm>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    std::string word;
    std::cin >> word;

    int lower = 0, upper = 0;

    for (char c : word) {
      if (std::islower(c)) {
        lower++;
        continue;
      }
      upper++;
    }

    if (upper > lower) {
      std::transform(word.begin(), word.end(), word.begin(), ::toupper);
      std::cout << word;
      return 0;
    }

    std::transform(word.begin(), word.end(), word.begin(), ::tolower);
    std::cout << word;

    // return 0;
}