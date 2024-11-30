
#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long

int main()
{
    optimize();
    int n; cin>>n;
    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int mx_cnt =-1, mx=-1;
    for(int i=2; i<=1000 ;i++){
        int c=0;
        for(int j=0; j<n ;j++){
            if(a[j]% i == 0)c++;
        }
        if(c>=mx_cnt)mx = i , mx_cnt=c;
        c=0;
    }
    cout<<mx;
    return 0;
}