#include <iostream>
#include <cmath>
using namespace std;

void hanoi(int n, int from, int to, int free) {
    if (n>0) {
        hanoi(n-1, from, free, to);
        cout << from << " " << to << endl; 
        hanoi(n-1, free, to, from); 
    }
}

int main() {
    int n;
    cin >> n; 
    cout << pow(2, n) - 1 << endl;
    hanoi(n, 1, 3, 2); 
    return 0;
}