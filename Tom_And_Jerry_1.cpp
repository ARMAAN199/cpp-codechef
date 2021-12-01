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
	int t;
	cin >> t;
	int a,b,c,d,k,distance;
	while(t--)
	{
	    cin >> a >> b >> c >> d >> k ;
	    distance = abs(c-a)+abs(d-b);
	    if(distance <= k)
	    { if((k-distance)%2==0) cout << "YES" << endl;
	      else cout << "NO" << endl;
	    }
	    else cout << "NO" << endl;
	}
	return 0;
}
