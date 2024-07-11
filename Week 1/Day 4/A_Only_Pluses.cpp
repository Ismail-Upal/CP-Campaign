//https://codeforces.com/contest/1992/problem/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll t;cin>>t;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        ll mn=min({a,b,c});
        for(int i=1;i<=5;i++){
            if(mn==a){
                a++;
                mn=min({a,b,c});
            }
            else if(mn==b){
                b++;
                mn=min({a,b,c});
            }
            else if(mn==c){
                c++;
                mn=min({a,b,c});
            }
        }
        cout<<1LL*a*b*c<<endl;
    }
    return 0;
}
