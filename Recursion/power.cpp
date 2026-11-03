#include <bits/stdc++.h>
using namespace std; 

double pow(double x, int n) {
    if (n == 0) return 1; 

    if (n % 2 == 0) {
        return pow(x * x, n / 2); 
    }

    return (x * pow(x * x, (n - 1) / 2)); 
}

int main() {
    cout << pow(2.0, 9); 
}