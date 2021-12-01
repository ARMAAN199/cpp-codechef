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
	    string n;
        cin >> n;
        set <string> str;
        for (int i = 0; i < (n.size())-1; i++)
        {
            char st[2];
            st[0] = n[i];
            st[1] = n[i+1];
            // cout << st << endl;
            str.insert(st);
        }
        cout << str.size() << endl;
        


	}
	return 0;
}
