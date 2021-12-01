#include<bits/stdc++.h>
#define MOD 1000000007
#define N 100001
# define INT_MAX 9223372036854775807
# define INT_MIN -922337203654775808
using namespace std;

string str[3]={"a","b","c"};
int main(){
   long long int t,i,j,n;
   cin>>t;
   while(t--){
   	cin>>n;
   	string ans="";
   	for(i=0;i<n;i++){
   		  ans=ans+str[i%3];
	   }
	cout<<ans<<endl;
   }
return 0;
}