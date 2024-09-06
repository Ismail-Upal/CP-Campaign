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
        vector<int>v(n);
        for(int i=0;i<n; i++)cin>>v[i];
        map<int,int>cnt;
        for(int i=0;i<n; i++){
            for(int j=2; j*j<=v[i]; j++){
                if(v[i]%j==0){
                    while (v[i]%j==0)
                    {
                        cnt[j]++;
                        v[i]/=j;
                    }
                    
                }
            }
            if(v[i]>1)cnt[v[i]]++;
        }
        bool ok=true;
        for(auto [x,y] : cnt){
            if(y%n!=0){
                ok=false;
                break;
            }
        }
        if(ok)Y;
        else N;
    }
    return 0;
}