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
	    int n;
        cin >> n;
        int max = 0, count=1, waste;
        while(n--)
        {
            cin >> waste;
            if(waste>=max)
            {
                max=waste;
            }
            else
            {
                count++;
            }
        }
        cout << count << "\n";
	}
	return 0;
}
