#include <iostream>
#include <cmath>

int max(int a, int b, int c) {
    int max = a;

    if (b > max) {
        max = b;
    }

    if (c > max) {
        max = c;
    }

    return max;
}

int min(int a, int b, int c) {
    int min = a;

    if (b < min) {
        min = b;
    }

    if (c < min) {
        min = c;
    }

    return min;
}

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    int n1 = max(a, b, c);
    int n2 = a + b + c - max(a, b, c) - min(a, b, c);
    int n3 = min(a, b, c);
    if ( pow(n1, 2) == (pow(n3, 2) + pow(n2, 2)) ) {
      std::cout << "YES" << std::endl;
    } else if ((n2 + n3) <= n1) {
      std::cout << "UNDEFINED" << std::endl;
    } else {
      std::cout << "NO" << std::endl;
    }
}