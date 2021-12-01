#include <iostream>
#include <cmath>
#include <string>
#include <iterator>
#include <set>
typedef long long ll;
// #include <bits/stdc++.h>
using namespace std;


void sol(){
    	ll n;
        cin >> n;
        int arr[n];
        // int inix = 0, iniy = 0, xcnt, ycnt;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n, greater<int>());
        int j = n-1;
        while(arr[j] == arr[n-1])
        j--;
        ll ans = (ll)n * ((ll)arr[n-1]) + (ll)(j+1);
        cout << ans << "\n";
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// your code goes here
	ll t;
	cin >> t;
	while(t--)
	{
        sol();
	}
	return 0;
}