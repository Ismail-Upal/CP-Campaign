 
#include<bits/stdc++.h>
using namespace std;
string s;
int solve(int i){
    if(i==s.size())return 0;
    s[i] = tolower(s[i]);
    if(s[i]=='a' or s[i]=='i' or s[i]=='o' or s[i]=='u' or s[i]=='e'){
        return solve(i+1)+1;
    }
    else return solve(i+1);
}
int main()
{
    getline(cin, s);
    
    cout<<solve(0);
    return 0;
}