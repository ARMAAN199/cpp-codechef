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
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
            if(arr[i]%2==0)
            cout << arr[i] << " ";
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2!=0)
            cout << arr[i] << " ";
        }
        cout << endl;
	}
	return 0;
}