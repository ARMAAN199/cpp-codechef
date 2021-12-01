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
	    int g,p,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10;
        cin >> g >> p;
        int my_age_count, waste, count_of_ppl_older_than_me=0;
        for(int i=1;i<=10;i++)
        {
            cin >> waste;
            if (i==g) my_age_count= waste;
            if (i>g) count_of_ppl_older_than_me += waste;   
        }
        int days_older_will_def_take = count_of_ppl_older_than_me/p;
        int remaining_dosage = count_of_ppl_older_than_me % p;
        if(remaining_dosage==0){
            //bestcase ------ days_older_will_def_take + 1
            //worst ---
            int days_my_group_will_def_take = my_age_count/p;
            if(my_age_count%p !=0) days_my_group_will_def_take++;
            cout << days_older_will_def_take + 1 << " " <<  days_older_will_def_take + days_my_group_will_def_take << endl;
        }
        else if(remaining_dosage!=0)
        {
            //bestcase ------- days_older_will_def_take + 1
            //worst --- 
            my_age_count = my_age_count-(p-remaining_dosage);
            days_older_will_def_take++;
            // considering positive
            if(my_age_count>=0){
            int days_my_group_will_def_take = my_age_count/p;
            if(my_age_count%p !=0) days_my_group_will_def_take++;        
            cout << days_older_will_def_take << " " << days_older_will_def_take + days_my_group_will_def_take << endl;
            }
            else{
            cout << days_older_will_def_take << " " << days_older_will_def_take <<endl;
            }
        }

	}
	return 0;
}
