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
	    int n;
        cin >> n;
        int arr[100001] = {0};
        int a;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            // cout << st << endl;
            if(arr[a+1] < a-1) {arr[a+1]++; cout << arr[a+1];}
        }
        int sum = 0;
        for (int i = 0; i < 100001; i++)
        { 
            sum += arr[i];
        }
        cout << sum << endl;
	}
	return 0;
}
