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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        a=a-c;
        b=b-d;
        if(a<b)cout<<"First"<<endl;
        else if(b<a)cout<<"Second"<<endl;
        else cout<<"Any"<<endl;
    }
    return 0;
}