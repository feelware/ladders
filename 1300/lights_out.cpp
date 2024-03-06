#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int in[3][3], out[3][3];

    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        std::cin >> in[i][j];
      }
    }

    out[0][0] = in[0][0] + in[0][1] + in[1][0];
    out[0][1] = in[0][1] + in[0][0] + in[0][2] + in[1][1];
    out[0][2] = in[0][2] + in[0][1] + in[1][2];

    out[1][0] = in[1][0] + in[0][0] + in[1][1] + in[2][0];
    out[1][1] = in[1][1] + in[0][1] + in[1][0] + in[2][1] + in[1][2];
    out[1][2] = in[1][1] + in[0][2] + in[1][2] + in[2][2];

    out[2][0] = in[1][0] + in[2][0] + in[2][1];
    out[2][1] = in[2][0] + in[2][1] + in[1][1] + in[2][2];
    out[2][2] = in[2][1] + in[2][2] + in[1][2];

    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        std::cout << 1 - (out[i][j] % 2);
      }
      std::cout << std::endl;
    }

    return 0;
}