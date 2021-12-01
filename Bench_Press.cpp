#include <iostream>
#include <cmath>
#include <string>
#include <iterator>
#include <set>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    long long int n,req,rod;
        cin >> n >> req >> rod;
        long int arr[n];
        for (long long int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr+n);
        for (long long int i = 0; i < n-1; i++)
        {
            if (arr[i] == arr[i+1])
            {
                rod+=(arr[i]*2);
                //cout << "I " << arr[i] << " I+1 " << arr[i+1] << endl;
                arr[i] = arr[i+1] = -1;

            }
        }
       // cout << "REQ " << req << " ROD " << rod <<endl;
        if (rod >= req) cout << "YES" << endl;
        else cout << "NO" << endl;
    }    
	return 0;
}
