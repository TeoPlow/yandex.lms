#include <iostream>
using namespace std;

int main()
{
    unsigned int n;
    int ans = 0;
    cin >> n;
    
    while (n != 0) {
        ans += n % 10;
        n /= 10;
    }
    
    cout << ans << endl;
    return 0;
}