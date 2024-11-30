
#include<bits/stdc++.h>
using namespace std;
int n;
int a[1000001];
bool solve(int i, int j){
    if(i>=j) return true;
    if(a[i]==a[j])return solve(i+1, j-1);
    else return false;
}
    
int main()
{
    cin>>n;
    for(int i=0; i<n; i++)cin>>a[i];
    if(solve(0, n-1))cout<<"YES";
    else cout<<"NO";
    return 0;
}