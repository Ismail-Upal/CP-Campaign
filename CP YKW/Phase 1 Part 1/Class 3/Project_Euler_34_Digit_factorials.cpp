#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int N= 1e14;
ll fact(int n){
    ll mul =1;
    for(int i=1; i<=n; i++){
        mul*=i;
    }
    return mul;
}
int main()
{
    int n, sum=0; cin>>n;
    for(int i=10; i<=n; i++){
        int num=i, s=0;
        while(num){
            int rem=num%10;
            s+= fact(rem);
            num/=10;
        }
        if(s%i==0)sum+=i;
    }
    cout<<sum;

    return 0;
}