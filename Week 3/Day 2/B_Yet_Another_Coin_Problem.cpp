#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define Y cout << "YES" << endl
#define N cout << "NO" << endl
#define tc int t;cin>>t;while(t--)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    tc{
        int n; cin>>n;
        int a=1,b=3,c=6,d=10, e=15;
        auto func=[&](int n){
            int ans=0;
            ans+=n/e;
            n=n%e;
            ans+=n/c;
            n=n%c;
            ans+=n/b;
            n=n%b;
            ans+=n;
            
            return ans;
        };
        if(n>=20)cout<<min({func(n),func(n-20)+2, func(n-10)+1})<<endl;
        else if(n>=10)cout<<min(func(n), func(n-10)+1)<<endl;
        else cout<<func(n)<<endl;
    }
    return 0;
}