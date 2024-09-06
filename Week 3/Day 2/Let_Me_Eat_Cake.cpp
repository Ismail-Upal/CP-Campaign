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
        int a, b; cin>>a>>b;
        int s=0, n;
        while(a!=b){
            if(a>b){
                n=ceil(a/2.0);
                s+=n;
                a-=n;
            }
            else if(b>a){
                n=ceil(b/2.0);
                s+=n;
                b-=n;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}