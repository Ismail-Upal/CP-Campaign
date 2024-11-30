
#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long

int main()
{
    optimize();
    int n; cin>>n;
    int a = 1, ans =0 ;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            for(int k=1; k<=n; k++){
                a = __gcd(i, __gcd(j,k));
                ans += a;
            }
        }
    }
    cout<<ans;
    return 0;
}