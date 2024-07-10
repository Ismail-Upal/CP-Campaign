//https://atcoder.jp/contests/abc071/tasks/abc071_b
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    string s; cin>>s;
    sort(s.begin(), s.end());
    int n=unique(s.begin(), s.end())-s.begin();
 
    //cout<<n;
    for(int i=0;i<n; i++){
        //cout<<s[i];
        if(i!=(s[i]-'a')){
            cout<<char(i+'a');
            return 0;
        }
    }
    if(n!=26)cout<<char(n+'a');
    else cout<<"None";
    return 0;
}
