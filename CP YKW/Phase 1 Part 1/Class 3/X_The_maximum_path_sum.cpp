#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[131][131];
int max_sum=INT_MIN;
void solve(int i, int j, int sum){
    if(i>n or j>m)return;
    if(i==n and j==m){
        max_sum = max(sum+a[n][m], max_sum);  
        return;
    }
    if(i<=n)solve(i+1, j, sum+a[i][j]);
    if(j<=m)solve(i, j+1, sum+a[i][j]);
}
int main()
{
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++)cin>>a[i][j];
    }
    solve(1, 1, 0);

    cout<<max_sum;
    return 0;
}