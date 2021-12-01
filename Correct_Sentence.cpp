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
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
        cin >> n;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            string str;
            cin >> str;
            int type;
            if (int(str[0]) <= 109 && int(str[0])>= 97)
            type = 1;
            else if (int(str[0]) <= 90 && int(str[0])>= 78)
            type = 2;
            else {
            flag = false;
            }
            int curr_type;
            for (int j = 0; j < str.length(); j++)
            {
                if (int(str[j]) <= 109 && int(str[j])>= 97)
                curr_type = 1;
                else if (int(str[j]) <= 90 && int(str[j])>= 78)
                curr_type = 2;
                else {
                flag = false;
                }

                if (curr_type != type)
                flag = false;
            }
        }

        flag? cout << "YES" << "\n": cout << "NO" << "\n";
	}
	return 0;
}
