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
        for (int i = 0; i < n; i++)
        {
            int waste, waste2;
            cin >> waste >> waste2;

        }
        int sides = n;
        while (n>=6)
        {
            sides += n/2;
            // cout << "sides  " << sides << " n/2 " << n/2 << endl;
            n/=2;
        }
        cout << sides << endl;
        
    }
    
	return 0;
}
