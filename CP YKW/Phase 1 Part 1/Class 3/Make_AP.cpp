#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int N= 1e14;
int main()
{
    int t; cin>>t;
    while(t--){
        int a, b,c ; cin>>a>>b>>c;
        int a1 = b-(c-b);
        if(a1>=a and a1%a==0 and a1!=0){
            cout<<"YES"<<endl;
            continue;
        }
        int b1 = (a+c)/2;
        if(b1>=b and b1%b==0 and b1!=0 and (c-a)%2==0){
            cout<<"YES"<<endl;
            continue;
        }
        int c1 = b+(b-a);
        if(c1>=c and c1%c==0 and c1!=0){
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }
    return 0;
}