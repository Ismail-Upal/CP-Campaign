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
        int n,f=1; cin>>n;
        string s1; cin>>s1;
        string s2; cin>>s2;
        for(int i=0;i<n;i++){
            if(s1[i]=='R'){
                if(s2[i]!='R')f=0;
            }
            else{
                if(s2[i]=='R')f=0;
            }
        }
        if(f)Y;
        else N;
        
    }
    return 0;
}