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
    vector<int>v;
    int f=1;
    tc{
        int n; cin>>n;
        if(n%2==0)v.push_back(n/2);
        else{
            if(f){
                v.push_back(ceil(n*1.0/2));
                f=0;
            }
            else{
                v.push_back(floor(n*1.0/2));
                f=1;
            }
        }
    }
    for(auto i:v)cout<<i<<endl;
    return 0;
}