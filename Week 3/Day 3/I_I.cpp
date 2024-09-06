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
    ll n,k; cin>>n>>k;
    vector<ll>a(n);
    for(ll &i:a)cin>>i;
    sort(a.begin(), a.end());
    if (k == 0) {
        if (a[0] > 1) {
            cout << a[0] - 1 << endl;
        } else {
            cout << -1 << endl;
        }
    } else if (k == n) {
        cout << a[n - 1] << endl;
    } else {
        if (a[k - 1] != a[k]) {
            cout << a[k - 1] << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}