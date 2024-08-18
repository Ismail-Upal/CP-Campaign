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
        int num; cin>>num;
        int a=num/1000; num=num%1000; if(a==0)a=10;
        int b=num/100; num=num%100; if(b==0)b=10;
        int c=num/10; num=num%10; if(c==0)c=10;
        int d=num; if(d==0)d=10;
        //cout<<a<<b<<c<<d<<endl;
        int ans=0;
        ans+=abs(a-1);
        ans+=abs(b-a);
        ans+=abs(c-b);
        ans+=abs(d-c);
        ans+=4;
        cout<<ans<<endl;
    }
    return 0;
}