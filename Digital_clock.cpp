#include <iostream>
#include <cmath>
#include <string>
#include <iterator>
#include <set>
#include <algorithm>
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
	    int hh, mm, a, b;
        cin >> hh >> mm;
        a = min(hh,mm);
        b = max(hh,mm);
        a--;
        b--;
        // cout << a << " "<< b << "\n";
        // if(a==10 && b==10)
        // {
        //     cout << 10 << "\n";
        // }
        if(a<10 && b<=10)
        {
            cout << a+1 << "\n";
        }
        else if(a<10 && b>10)
        {
             cout << (a+1)+(min(a,b/11)) << "\n";
        }
        else{
            cout << 10+min(a,(b/11))+min(b,(a/11))+(a/11) << "\n";
        }
	}
	return 0;
}

// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 	    int h,m;
// 	    cin>>h>>m;
// 	    int h1,m1,h11,m11;
// 	    h1=min(10,h);
// 	    m1=min(10,m);
// 	    h11=(h-1)/11;
// 	    m11=(m-1)/11;
// 	    int ans=min(h1,m1)+min(h11,m1-1)+min(h1-1,m11)+min(h11,m11);
// 	    cout<<ans<<endl;
	    
// 	}
// 	return 0;
// }