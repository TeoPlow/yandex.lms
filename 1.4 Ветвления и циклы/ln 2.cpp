#include <iostream>
#include <cmath>

int main()
{
    int n;
    double ans = 0.0;
    std::cin >> n;
    
    for (int i = 1; i <= n; i++) {
        ans += (pow(-1, i+1) / i);
    }
    
    std::cout << ans << std::endl;
    return 0;
}