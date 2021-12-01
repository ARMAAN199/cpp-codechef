#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int oddsum =0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i]%2!=0)
            oddsum++;
        }
        if (oddsum%2!=0)
        {
            cout << "2" << endl;
        }
        else
        cout << "1" << endl;
        
    }

	return 0;
}
