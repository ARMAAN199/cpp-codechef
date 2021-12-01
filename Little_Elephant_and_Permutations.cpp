#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int inv=0, local_inv=0;
        for (int i = 0; i < n-1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if (arr[i]>arr[j]) inv++;
                if (arr[i]==arr[j]+1) local_inv++;
            }
        }
        if (local_inv == inv)
            cout << "YES" << endl;
        else cout << "NO" << endl;     
	}
	return 0;
}
