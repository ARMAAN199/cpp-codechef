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
	    int n,m;
        cin >> n >> m;
        int arr[n][m];
        for(int i=0;i<n;i++)
        {
            for (int j=0;j<m;m++)
            {
                arr[i][j] = 0;
            }
        }
        for(int i=0;i<(n*m);i++)
        {
            int x,y;
            cin >> x >> y;
            if(i%2==0)
            arr[x][y]=1;
            else 
            arr[x][y]=0;
            for(int p=0;p<n;p++)
            {
                for(int l=0;l<m;l++)
                {
                    
                }
            }
        }
	}
	return 0;
}
