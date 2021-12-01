#include <iostream>
#include <cmath>
#include <string>
#include <iterator>
#include <set>
// #include <bits/stdc++.h>
using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// your code goes here
	long long int t;
	cin >> t;
	while(t--)
	{
	    long long int D,d,p,q;
        cin >> D >> d >> p >> q;
        long long int total = D*p;
        //cout << "total after D*p " << total << " \n";
        long long int n = D/d;
       // cout << "N is " << n << " \n";      
        total += (((((n*(n-1))/2))*q)*d);
       // cout << "New total is " << total << " \n";      
       // cout << "Calculated Value is " << (((((n*(n-1))/2)-1)*q)*d) << " \n";                
        long long int left_days = D-(n*d);
       // cout << "Left Days is " << left_days << " \n";              
        total += (n*q*left_days);
      //  cout << "New add is " << (n*q*left_days) << " \n";  
       // cout << "Final Total is " << total << " \n";        
        cout << total << "\n";
	}
	return 0;
}
