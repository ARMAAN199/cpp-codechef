#include <iostream>
#include <cmath>
#include <string>
#include <iterator>
#include <set>
typedef long long ll;
// #include <bits/stdc++.h>
using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// your code goes here
	ll t;
	cin >> t;
	while(t--)
	{
	    ll n,k;
        cin >> n >> k;
        n-=k;
        k++;
        ll total = 0;
        ll modulo = 1;
        if(n<=k)
        {
            cout << n << "\n";
        }
        else{
        int y = n/k;
        int rem = n%k;
        ll county = k-rem;
        ll countx = y+1;
        int sum = county*(y)*(y+1)/2 + rem*(y+1) * (y+2)/2;
        cout << sum << "\n";
        }
	}
	return 0;
}

        // int times = n/k;

        // while(k>0)
        // {
        //     ll l = n/k;
        //     total += (l*(l+1))/2;
        //     n-=l;
        //     k--;
        // }
        //         while(true)
        // {
        //         modulo = n%k;
        //         if(modulo==0) break;
        //         total += (modulo*(modulo+1))/2;
        //         n-=modulo;
        //         k--;
        // }

        // #include<bits/stdc++.h> using namespace std; #define ll long long #define ff first #define ss second #define pb push_back #define vi vector #define rep(i,a,b) for(int i=a;i<b;i++) void solve() { ll n,m,sum,x,z,y,cnt=0; cin>>n>>m; x=n-m; if(x<=m+1) cout<<x; else { y=x/(m+1); z=(x)%(m+1); ll cnty=(m+1)-z; ll cntx=y+1; sum=cnty * (y) * (y+1) /2 + z * (y+1) * (y+2) / 2; cout<<sum; } cout<<endl; } int main(){ int t; cin>>t; while(t--){ solve(); } return 0; }