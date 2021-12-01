#include <iostream>
using namespace std;

int main() {
	int t;
    cin >> t;
    while (t--)
    {
        int l,r;
        cin >> l >> r;
        int count =0;
        while(l<=r)
        {
            if(l%10 == 2 || l%10 == 3 || l%10 == 9)
            count++;
            l++;
        }
        cout << count << endl;
    }
    
	return 0;
}


        // int lh = (10-(l%10));
        // int rh = r%10;
        // int count = (((r-rh)-(l+lh)/10)*3);