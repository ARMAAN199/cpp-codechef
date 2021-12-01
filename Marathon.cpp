#include <iostream>
#include <cmath>
#include <string>
#include <iterator>
#include <set>
// #include <bits/stdc++.h>
using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int d,k,a,b,c;
        cin >> d >> k >> a >> b >> c;
        if((d*k)>=42) cout<< c  << endl;
        else if ((d*k)>=21) cout << b << endl;
        else if ((d*k)>=10) cout << a << endl;
        else cout << 0 << endl;

	}
	return 0;
}
