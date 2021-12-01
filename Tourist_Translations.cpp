#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
    int t;
    char str[26];
    cin >> t >> str;
    while (t--)
    {
        string currstr;
        cin >> currstr;
        for (int i = 0; i < currstr.length(); i++)
        {                
        if (((int)(currstr[i]))>64 && ((int)(currstr[i]))<91)
        cout << (char)((int)(*(str+((int)(currstr[i]))-65))-32);
        else if (((int)(currstr[i]))==95)
        cout << " ";
        else if (((int)(currstr[i]))>=97 && ((int)(currstr[i]))<=122)
        cout << *(str+((int)(currstr[i]))-97);
        else
        cout << currstr[i];     
        }
        cout << endl;
    }
    
	return 0;
}
