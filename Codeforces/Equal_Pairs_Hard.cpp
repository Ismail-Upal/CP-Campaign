#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int num, flag=1;
    cin>>num;
    for(int i=2; i<num; i++){
        if(num%i==0){
            flag=0;break;
        }
    }
    if(flag)cout<<num<<" is a prime";
    else cout<<num<<" is not a prime";
    return 0;
}