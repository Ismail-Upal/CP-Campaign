#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n], neg =0, zero=1;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]<0)neg++;
            if(a[i]==0)zero=0;
        }
        cout<<zero*(neg%2)<<endl;
    }
    return 0;
}