
#include<bits/stdc++.h>
using namespace std;
int N;
int solve(int n){
    if(n==1)return 0;
    if(n==2)return 1;
    return solve(n-1)+solve(n-2);
}
    
int main()
{
    cin>>N;
    cout<<solve(N);
    return 0;
}