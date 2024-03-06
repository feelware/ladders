#include <iostream>
#include <algorithm>

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int luckyCount = 0;
  char c;

  do {
    std::cin.get(c);
    if (c == '4' || c == '7') {
      luckyCount++;      
    }
  } while (c != '\n');

  std::string strLuckyCount = std::to_string(luckyCount);

  for (char c : strLuckyCount) {
    if (c != '7' && c != '4') {
      std::cout << "NO";
      return 0;
    }
  }

  std::cout << "YES";
  return 0;
}