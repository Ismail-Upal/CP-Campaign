#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//_____________________________________________
 
int main()
{
    optimize();
 
    tc{
        int n; cin>>n;
        vector<int>v(n);
        ll sum1=0, sum2=0;
        for(int i=0; i<n; i++){
            cin>>v[i];
            if(v[i]>0)sum1+=v[i];
            else sum2 += v[i];
        }
        cout << abs(sum1 - abs(sum2))<<endl;
    }
 
    return 0;
}