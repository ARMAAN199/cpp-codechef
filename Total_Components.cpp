#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int t,n,count;
	bool primenumbers[10000010];
	memset(primenumbers, true, sizeof(primenumbers));
 
    for (long long int p = 2; p * p <= 10000010; p++)
    {
        if (primenumbers[p] == true)
        { 
            for (long long int i = p * p; i <= 10000010; i += p)
                primenumbers[i] = false;
        }
    }
    long long int array[10000010],primecount = -1;
    for(long long i=1;i<10000010;i++)
	{
	        array[i] = 0;
	}
    for(long long i=1;i<10000010;i++)
	{
	    if(primenumbers[i]) primecount++;
	    array[i] = primecount;  
	}
	cin >> t;
	while(t--)
	{
	    count = 1;
	    cin >> n;
	    if(n==2 || n==3) count = 0;
	    count = count + array[n]-array[n/2];
	    cout << count << endl;
	}

	return 0;
}