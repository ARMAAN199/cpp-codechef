#include <iostream>
#include <cmath>
#include <string>
#include <iterator>
#include <set>
// #include <bits/stdc++.h>
using namespace std;

bool compare(long long int i1, long long int i2)
{
    return (i1 > i2);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// your code goes here
	int t,n,k;
	cin >> t;
    long long array[1100],first,secc;
    while(t--)
    {
        first = 0,secc = 0;
        cin >> n >> k;
        for(int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        sort(array,array+n,compare);
        for(int i=0;i<2*k;i++){
            if((i+1) % 2)
                first += array[i];
            else
                secc += array[i];
        }
        secc += array[2*k];
        cout << max(secc,first) << endl;
    }
	return 0;
}