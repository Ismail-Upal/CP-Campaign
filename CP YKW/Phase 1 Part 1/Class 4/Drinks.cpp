#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//_____________________________________________
 
int main()
{
    optimize();
    int n; cin >> n; 
    double a[n];
    for (int i=0; i < n; i++)cin >> a[i];

    double ans = 0 ;
    for(int i=0; i<n; i++){
        ans += (a[i]/(1.0*n));
    }
    cout<<fixed<<setprecision(6)<< ans <<endl;
 
    return 0;
}