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
	    int n , a,b,as=0,bs=0;
        cin >> n >> a >> b;
            for (int i = 0; i < n; i++)
            {
                string str;
                cin >> str;
                if(str[0] == 'E' || str[0] == 'Q' || str[0] == 'U' || str[0] == 'I' || str[0] == 'N' || str[0] == 'O' || str[0] == 'X')
                as+=a;
                else
                bs+=b;
            }
            if(as > bs) cout << "SARTHAK" << endl;
            else if (as == bs) cout << "DRAW" << endl;
            else cout << "ANURADHA" << endl;
	}
	return 0;
}
