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
        if (n%2==0)
        for (int i = 0; i < n-1; i+=2)
        {
            arr[i+1]=i+1;
            arr[i]=i+2;
        }
        else
        {
            for (int i = 0; i < n-3; i+=2)
            {
                arr[i+1]=i+1;
                arr[i]=i+2;
            }
            arr[n-1] = n-2;
            arr[n-3] = n-1;
            arr[n-2] = n;
        }
         for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;         
	}
	return 0;
}