#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n;
    std::cin >> n;

    int sumx = 0, sumy = 0, sumz = 0;

    for (int i = 0; i < n; i++) {
        int x, y, z;
        std::cin >> x >> y >> z;
        sumx += x;
        sumy += y;
        sumz += z; 
    }

    if (sumx || sumy || sumz) {
        std::cout << "NO";
    }
    else {
        std::cout << "YES";
    }

    return 0;
}