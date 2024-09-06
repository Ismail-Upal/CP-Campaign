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
    auto isPrime=[&](ll n){
        if(n==1)return false;
        for(ll i=2; i*i <= n; i++){
            if(n%i ==0) return false;
        }
        return true;
    };
    auto perSqr=[&](ll n){
        ll x=sqrtl(n);
        return (x*x)==n;
    };
    int n;cin>>n;
    for(ll i=0;i<n; i++){
        ll num; cin>>num;
        if(isPrime(sqrtl(num))&&perSqr(num))Y;
        else N;
    }
    return 0;
}