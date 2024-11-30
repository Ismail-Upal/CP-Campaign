#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k; 
    cin>>n>>k;
    if(n&1){
        long long i = n/2 +1, j= n-i;
        if(k<=i){
            cout<<1+(k-1)*2<<endl;
        }
        else k-=i, cout<<2+(k-1)*2<<endl;
    }
    else{
        long long i = n/2;
        if(k<=i){
            cout<<1+(k-1)*2<<endl;
        }
        else k-=i, cout<<2+(k-1)*2<<endl;
    }
    return 0;
}