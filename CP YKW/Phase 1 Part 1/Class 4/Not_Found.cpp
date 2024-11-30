
#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long

int main()
{
    optimize();
    string s; cin>>s;
    int cnt =0;
    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());
    int sz = s.size();
    //cout<<s<<sz;
    for(int i=0; i<26; i++){
        if(s[i]!='a'+i){
            cout<<char('a'+i);
            return 0;
        }
    }
    
    cout<<"None";
    return 0;
}