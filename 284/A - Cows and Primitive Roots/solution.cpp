#include <iostream>
 
using namespace std;
 
// Function to calculate Euler's Totient Function phi(n)
int phi(int n) {
    int result = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i;
            }
            result -= result / i;
        }
    }
    if (n > 1) {
        result -= result / n;
    }
    return result;
}
 
int main() {
    int p;
    if (cin >> p) {
        // The answer is simply phi(p - 1)
        cout << phi(p - 1) << endl;
    }
    return 0;
}