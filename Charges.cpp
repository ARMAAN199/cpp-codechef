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
	int t;
	cin >> t;
	while(t--)
	{
	    int n,k;
        cin >> n >> k;
        string charges;
        cin >> charges;
        int dist =0;
        for (int i = 0; i < n-1; i++)
        {
            if(charges[i+1]==charges[i]){
                dist+=2;
            }
            else dist++;
        }
        int waste;
        for (int j = 0; j < k; j++)
        {
            cin >> waste;
            waste--;
            if(charges[waste]=='1')
            charges[waste] = '0';
            else
            charges[waste] = '1';

            if(waste!=0 && waste!=n-1)
            {
                if(charges[waste-1]!=charges[waste]) dist--;
                else dist++;
                if(charges[waste+1]!=charges[waste]) dist--;
                else dist++;                
            }
            
            else if(waste==0 && n!=1)
            {
                if(charges[waste+1]!=charges[waste]) dist--;
                else dist++;                  
            }
            else if(waste==n-1 && n!=1) {
                if(charges[waste-1]!=charges[waste]) dist--;
                else dist++;                
            }
            else if (n==1)
            {
                //do nothing
            }
            cout << dist << "\n";
        }
	}
	return 0;
}