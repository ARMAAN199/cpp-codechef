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
        char a,b,c,d,e,f,g,h,i;
        cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;
	    int x_win=0,o_win=0,x_count=0,o_count=0, blanks=0;
        if(a=='X') x_count++;
        else if (a=='O') o_count++;
        else blanks++;
        if(b=='X') x_count++;
        else if (b=='O') o_count++;
        else blanks++;
        if(c=='X') x_count++;
        else if (c=='O') o_count++;
        else blanks++;
        if(d=='X') x_count++;
        else if (d=='O') o_count++;
        else blanks++;
        if(e=='X') x_count++;
        else if (e=='O') o_count++;
        else blanks++;
        if(f=='X') x_count++;
        else if (f=='O') o_count++;
        else blanks++;
        if(g=='X') x_count++;
        else if (g=='O') o_count++;
        else blanks++;
        if(h=='X') x_count++;
        else if (h=='O') o_count++;
        else blanks++;
        if(i=='X') x_count++;
        else if (i=='O') o_count++;
        else blanks++;
        if ((a=='X' && b =='X' && c=='X'))
            x_win++;
        else if ((a=='O' && b =='O' && c=='O'))
            o_win++;       
        if ((d=='X' && e =='X' && f=='X'))
            x_win++;
        else if ((d=='O' && e =='O' && f=='O')) 
            o_win++;   
        if ((g=='X' && h =='X' && i=='X'))
            x_win++;
        else if ((g=='O' && h =='O' && i=='O')) 
            o_win++;     
        if ((a=='X' && d =='X' && g=='X'))
            x_win++;
        else if ((a=='O' && d =='O' && g=='O')) 
            o_win++;   
        if ((b=='X' && e =='X' && h=='X'))
            x_win++;
        else if ((b=='O' && e =='O' && h=='O')) 
            o_win++;   
        if ((c=='X' && f =='X' && i=='X'))
            x_win++;
        else if ((c=='O' && f =='O' && i=='O')) 
            o_win++;   
        if ((a=='X' && e =='X' && i=='X'))
            x_win++;
        else if ((a=='O' && e =='O' && i=='O')) 
            o_win++;   
        if ((c=='X' && e =='X' && g=='X'))
            x_win++;
        else if ((c=='O' && e =='O' && g=='O'))  
            o_win++;  
        // CASES
        if(x_count<o_count || x_count>o_count+1 || (x_win==1 && o_win==1) || (x_win>0 && (o_count>=x_count)) || (o_win>0 && (o_count<x_count)))
        cout << "3" << "\n";
        else if (blanks == 0 || (o_win==1 && x_win==0) || (o_win==0 && x_win==1) || (o_win==0 && x_win==2))
        cout << "1" << "\n";
        else
        cout << "2" << "\n";



	    // for (int i=0; i<3; i++)
	    // {cin >> row
        //     if (row == 'XXX' || row == 'OOO')
        //     win++;
        // }
	    // for (int i=0; i<3; i++)
	    // {
        //     if (row == 'XXX' || row == 'OOO')
        //     win++;
        // }	            
	    // if(r1=='XXX' || r1 == 'OOO' || r2=='XXX' || r2 == 'OOO' || r1=='XXX' || r1 == 'OOO')
	}
	return 0;
}









