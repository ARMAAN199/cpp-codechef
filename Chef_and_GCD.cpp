#include <iostream>
#include <cmath>
#include <string>
#include <iterator>
#include <set>
#include <algorithm>
using namespace std;


int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int a,b;
        cin >> a >> b;
        if(a%2==0 && b%2==0)
        {
            cout << "0" << "\n";
            return 0;
        }
        if((a%2==0 && b%2!=0) || (a%2!=0 && b%2==0))
        {
            if(gcd(a, b) > 1)
            {
                cout << "0" << "\n";
            }
            else
            {
                cout << "1" << "\n";
            }
        }
        if((a%2!=0 && b%2!=0))
        {
            if(gcd(a, b) > 1)
            {
                cout << "0" << "\n";
            }
            else
            {
                if((gcd(a+1,b) > 1 || gcd(a,b+1) > 1))
                {
                    cout << "1" << "\n";
                }
                else{
                    cout << "0" << "\n";
                }
            }
        }
	}
    
	return 0;
}
