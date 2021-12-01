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
	    int n,m,k,count=0;
        cin >> n >> m >> k;
        int arr[100000] = {0};
        int waste;
        for (int i = 0; i < k; i++)
        {
            cin >> waste;
            if(waste <= n)
            arr[waste-1]++;
        }
        for (int j = 0; j < n; j++)
        {
            if(arr[j]>1) count++;
        }
        cout << count;
        for (int j = 0; j < n; j++)
        {
            if(arr[j]>1) cout << " " <<j+1;
        }
        cout << "\n";
	}
	return 0;
}