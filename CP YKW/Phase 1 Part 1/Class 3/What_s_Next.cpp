#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    while(1){
        int a, b, c; cin>>a>>b>>c;
        if(a==0 and b==0 and c==0)break;

        int d1=(b-a), d2=(c-b);
        int r1=b/a, r2=c/b;

        if(d1==d2){
            cout<<"AP "<<c+d2<<endl;
        }
        else{
            cout<<"GP "<<c*r2<<endl;
        }
    }
    return 0;
}