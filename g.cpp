#include<bits/stdc++.h>
using namespace std;

long long test(long long n )
{
	 long long q = 0;
    for (long long i = 0; i < n; i++) {
        long long x;
        cin >> x;
        int e = sqrt(x);
        if (e*e == x) {
            q++;
        }
    }
   return q;
}

int main() {
    long long n;
    cin >> n;
    cout<<test(n);
    
}
