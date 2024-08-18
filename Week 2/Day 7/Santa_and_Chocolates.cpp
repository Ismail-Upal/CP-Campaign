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
        int n,k, s=0; cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            s+=v[i];
        }
        int cnt=s/n;
        int rem=s%n;
        if(s<n)N;
        else{
            if(rem==0)Y;
            else if(k>=1)Y;
            else N;
        }
    }
    return 0;
}