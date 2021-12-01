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
	    int n,a,b;
        cin >> n >> a >> b;
        int aoc = 0, boc=0, c=n-1;
        for(;c>=0;c--){
            if(pow(2,c)<=a) {aoc++; a-=pow(2,c);}
            if(pow(2,c)<=b) {boc++; b-=pow(2,c);}
        }
        int toc = ((aoc + boc)<=n )? (aoc + boc) : n-((aoc+boc)-n);
        // cout << "aoc " << aoc << "boc " << " " << boc << "toc " << " " << toc << endl;
        int sol =0;
        for (; toc>0; toc--)
        {
            sol += pow(2,n-1);
            n--;
        }
        cout << sol << endl;
 
	}
	return 0;
}
