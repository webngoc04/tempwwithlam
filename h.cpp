#include<bits/stdc++.h>
using namespace std;

bool test(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    long long n;
    cin >> n;
    long long  sum = 0;
    for (int i = 2; i <= n; i++) {
        if (test(i)) {
            sum += i;
        }
    }
    cout << sum;
    return 0;
}

