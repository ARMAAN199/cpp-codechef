#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n], count =0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        for (int i = 0; i < n; i++)
        {
            if (arr[i]<=count)
            {
                int j= i;
                while (arr[j]==arr[i])
                {
                    count++;
                    j++;
                }
                i=j-1;
            }
        }
        cout << count << endl;
    }
      
	return 0;
}



        // for (int i = 0; i < n-1; i++)
        // {
        //     for (int j = i+1; j< n; j++)
        //     {
        //         if (arr[j]<=arr[i])
        //         {
        //             int temp = arr[j];
        //             arr[j] = arr[i];
        //             arr[i] = temp;
        //         }
                
        //     }
        // }

    //  for (int i = 0; i < n; i++)
    //     {
    //         if (arr[i]<=count)
    //         {
    //             int j= i;
    //             while (arr[j]==arr[i])
    //             {
    //                 count++;
    //                 j++;
    //             }
    //             i=j-1;
    //         }
    //     }
    //              cout << count <<endl; 
    // }


    //         for (int j = 0; j < n; j++)
    //     {
    //         int count=0;
    //         for (int i = 0; i < n; i++)
    //         {
    //             if (arr[i]<=min)
    //             {
    //                 cout << "Found Minimum Element " << arr[i] << endl;
    //                 min = INT_MAX;
    //                 arr[i] = INT_MAX;
    //                 count++;
    //             }
    //         }
    //         cout << "Curr min " << min << " Curr count "<< count << endl;
    //         if(min <= mcount)
    //         {
    //             mcount += count;
    //             cout << "Curr mcount " << mcount << endl;
    //         }    
    //     }
    //     cout << mcount <<endl;
    //     cout << "END CASE" << endl;  