 
#include<bits/stdc++.h>
using namespace std;
int n;
int a[10001];
void solve(int i){
    if(i ==n )return;
    solve(i+1);
    if(i%2 ==0 )cout<<a[i]<<' ';
}
int main()
{
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    solve(0);
    cout<<endl;
    return 0;
}