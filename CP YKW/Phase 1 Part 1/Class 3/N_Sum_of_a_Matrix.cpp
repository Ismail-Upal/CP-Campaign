
#include<bits/stdc++.h>
using namespace std;
int n, m;
int a[101][101], b[101][101];
void solve(int i, int j){
    if(i>n-1 or j>m-1)i++, j=0, cout<<endl;
    if(i>n-1 ) return;
    cout<<a[i][j]+b[i][j]<<' ';
    solve(i, j+1);
}
int main()
{
    cin>>n>>m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)cin>>a[i][j];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)cin>>b[i][j];
    }

    solve(0, 0);
    return 0;
}