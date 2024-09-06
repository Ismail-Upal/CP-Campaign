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
        string s= to_string(n);
        int sz=s.size();
        if(s[0]=='1' && s[1]=='0'){
            int m=s[2]-'0';
            if(sz<4){
                if(m>=2)Y;
                else N;
            }
            else{
                
                if(m!=0)Y;
                else N;
            }
        }
        else N;
    }
    return 0;
}