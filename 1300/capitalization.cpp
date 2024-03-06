#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    char c;
    std::cin.get(c);
    printf("%c", toupper(c));

    while (c != '\n') {
        std::cin.get(c);
        printf("%c", c);
    }

    return 0;
}