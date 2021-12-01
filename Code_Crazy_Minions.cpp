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
	    string str;
        cin >> str;
        int sol = str.length()+1;
        int curr = int(str[0])-97;
        for(int i=1; i<str.length(); i++)
        { 
            // cout << "curr is " << curr << " Str i is " << str[i] << " int -97 is  " << int(str[i])-97 <<  "\n";
            if((int(str[i])-97)>=curr)
            {
                sol+=(int(str[i])-97-curr);
                curr = int(str[i])-97;
                // cout << " if " << sol << "\n";
            }
            else{
                sol += ((25-curr)+(int(str[i])-97)+1);
                curr = int(str[i])-97;
                // cout << " else " << sol << "\n";
            }
        }
        if (sol <= str.length()*11)
        cout << "YES" << "\n";
        else
cout << "NO" << "\n";
	}
	return 0;
}