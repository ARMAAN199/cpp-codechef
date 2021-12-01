#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    string s;
    for(int i=0; i<t; i++){
        cin>>s;
        int count=0;
    for(int i=0; i<s.length()-1; i++){
        if(s.at(i)=='<' && s.at(i+1)=='>'){
            count++;
        }
    }
        cout<<count<<endl;
    }
    return 0;
}