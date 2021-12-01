#include <iostream>
#include <cmath>
#include <string>
#include <iterator>
#include <set>
using namespace std;

int main() {
	// your code goes here
	double a,c,b,d;
	cin >> a >> b >> c >> d;
    if(a==((b*c)/d) || a==((b*d)/c) || a==((c*d)/b))
    cout << "Possible";
    else cout << "Impossible";
	return 0;
}
