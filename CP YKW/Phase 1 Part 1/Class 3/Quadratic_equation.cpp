#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int N=1e7+21;
int a[N];
int main()
{
    int a, b, c; cin>>a>>b>>c;
    int d = (b*b)-(4*a*c);
    if(d<0)cout<<"No roots";
    else if(d==0)cout<<"One root: "<<(-b/(2*a));
    else{
        int x = (-b+sqrt(d))/(2*a);
        int y = (-b-sqrt(d))/(2*a);
        cout<<"Two roots: "<<min(x,y)<<' '<<max(x,y);
    }
    return 0;
}

