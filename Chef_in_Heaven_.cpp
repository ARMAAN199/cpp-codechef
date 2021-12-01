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
        double zc=0,oc=0,flag=0;
        string a;
        cin >> n;
        cin >> a;
            for (double i = 0; i<a.size(); i++)
            {
                a[i] == '0' ? zc++ : oc++;
                //cout << "oc " << oc << " zc " <<zc << endl;
                if(oc>=(i+1)/2)
                    flag=1;
            }
            flag==1 ? cout << "YES" << endl : cout << "NO" << endl;
	}
	return 0;
}
