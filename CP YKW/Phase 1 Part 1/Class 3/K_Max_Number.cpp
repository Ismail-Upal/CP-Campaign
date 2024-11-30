 
#include<bits/stdc++.h>
using namespace std;
int n;
int a[10001];
int solve(int i){
    if(i==0)return a[i];
    return max(a[i], solve(i-1));
}
int main()
{
    cin>>n;
    for(int i=0; i<n ;i++)cin>>a[i];
    cout<<solve(n-1);
    return 0;
}