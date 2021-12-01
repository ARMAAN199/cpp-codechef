#include <iostream>
#include <cmath>
#include <string>
#include <iterator>
#include <set>
using namespace std;

int main() {
	    int n;
        cin >> n;        
        int arr[n], arr_sum=0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr_sum += arr[i];
        }
        int q,waste;
        long long int mod = (pow(10,9) + 7);
        cin >> q;
        while(q--){
            cin >> waste;
            arr_sum*=2;
            //arr_sum = arr_sum % mod;
            cout << arr_sum % mod <<endl;
        }
	return 0;
}
