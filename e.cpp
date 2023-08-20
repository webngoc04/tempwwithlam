#include <bits/stdc++.h>
using namespace std;
long long ts(long long m)
{
	long long k = sqrt(m);
	if(k*k==m)
	{
		return 1;
	}
	else{
		return 0;
	}
}

int main() {
    long long n;
    cin >> n;
    long long p=n;
    while(p++)
    if(ts(p)==1)
    {
    	cout<<p;
    	return 0;
	}
}
