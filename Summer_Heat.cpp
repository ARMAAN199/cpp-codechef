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
	    int a,b,A,B;
        cin >> a >> b >> A >> B;
        int water = A/a;
        A%a!=0?water++:water;
        int pulp = B/b;
        B%b!=0?pulp++:pulp;
        cout << (water+pulp) << "\n";
	}
	return 0;
}
