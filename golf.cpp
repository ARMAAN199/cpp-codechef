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
	    int x,n,k;
        cin >> n >> x >> k;
        n+=2;
        if(x%k==0 || ((n+1-x)%k==0)) 
        cout << "YES" << "\n";
        else
        cout << "NO" << "\n";

	}
	return 0;
}
