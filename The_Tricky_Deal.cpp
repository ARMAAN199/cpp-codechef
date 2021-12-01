#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    long long int n;
        cin >> n;
        long long int i=1,curr_dif=0, ans2=0;
        while((pow(2,i)-1)<(i*n))
        {
            if((i*n)-(pow(2,i)-1) > curr_dif) {ans2=i;
            curr_dif = (i*n)-(pow(2,i)-1);
            }
            i++;
        }
        cout << i-1 << " " << ans2 << endl;

	}
	return 0;
}
