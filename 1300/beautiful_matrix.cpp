#include <iostream>
#include <cmath>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    for (int t = 0; t < 25; t++) {
        int x;
        std::cin >> x;

        if (x == 1) {
            int i = floor(t / 5) + 1;
            int j = t - 5 * (i - 1) + 1;
            std::cout << abs(i - 3) + abs(j - 3);
            return 0;
        }    
    }

    return 0;
}