#include <iostream>

int main() {
    int a1, a2, b1, b2;
    std::cin >> a1 >> a2 >> b1 >> b2;
    if ( ((a1 == b1) or (a2 == b2)) or ((a1 - b1) == (a2 - b2)) or ((b1 - a1) == (b2 - a2)) or ((b1 - a1) == (a2 - b2)) or ((a1 - b1) == (b2 - a2)) ) {
      std::cout << "YES" << std::endl;
    } else {
      std::cout << "NO" << std::endl;
    }
}