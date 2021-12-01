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
	    int x,a,b;
        cin >> x >> a >> b;
        cout << ((a+((100-x)*b))*10) <<endl;

	}
	return 0;
}
