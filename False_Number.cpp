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
	long long int t;
	cin >> t;
	while(t--)
	{
	    string n;
        cin >> n;
        if(n[0]=='1')
        {
            cout << "1" << "0";
            for(int i=1;i<n.length();i++)
            {
                cout << n[i];
            }
            cout << endl;
        }
        else{
            cout << "1";
            for(int i=0;i<n.length();i++)
            {
                cout << n[i];
            }
            cout << endl;
        }
	}
	return 0;
}
