 
#include<bits/stdc++.h>
using namespace std;
int n;
long long solve(int i){
    if(i ==0 or i==1)return i;
    return solve(i-1)*1LL*i;
}
int main()
{
    cin>>n;
    
    cout<<solve(n);
    return 0;
}