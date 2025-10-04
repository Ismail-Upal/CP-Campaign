//https://atcoder.jp/contests/abc124/tasks/abc124_a
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int a,b; cin>>a>>b;
    int ans=0;
    if(a>=b){
        ans+=a;
        a--;
        if(a>=b){
            ans+=a;
        }
        else ans+=b;
    }
    else{
        ans+=b;
        b--;
        if(b>=a)ans+=b;
        else ans+=a;
    }
    cout<<ans;
    return 0;
}
