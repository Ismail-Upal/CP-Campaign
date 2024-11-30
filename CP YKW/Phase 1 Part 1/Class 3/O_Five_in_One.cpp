
#include<bits/stdc++.h>
using namespace std;
int n; 
int a[102];
 
int max_num(){
    int ans = INT_MIN;
    for(int i=0; i<n; i++){
        ans = max(ans, a[i]);
    }
    return ans ;
}
int min_num(){
    int ans = INT_MAX;
    for(int i=0; i<n; i++){
        ans = min(ans, a[i]);
    }
    return ans ;
}

bool is_prime(int n){
    for(int i=2; i*i <= n; i++){
        if(n%i == 0)return false;
    }
    return true;
}
int prim_nums(){
    int cnt =0;
    for(int i=0; i<n; i++){
        if(a[i]==1)continue;
        if(is_prime(a[i])) cnt++;
    }
    return cnt;
}
bool is_pal(int n){
    string s, t;
    t = s = to_string(n);
    reverse(t.begin(), t.end());
    return t==s;
}
int pal_nums(){
    int cnt =0; 
    for(int i=0; i<n; i++){
        if(is_pal(a[i])) cnt ++;
    }
    return cnt;
}
int cnt_div(int n){
    int cnt=0;
    for(int i=1; i*i<=n; i++){
        if(n%i ==0 )cnt++;
    }
    return cnt;
}
int div_max(){
    int ans=0, cnt =0 ;
    for(int i=0; i<n; i++){
        if(cnt_div(a[i]) > cnt)ans = a[i], cnt = cnt_div(a[i]);
        if(cnt_div(a[i]) == cnt)ans = max(ans,a[i]) , cnt = cnt_div(a[i]);
    }
    return ans;
}
int main()
{
    cin>>n ; 
    for(int i=0; i<n; i++)cin>>a[i];

    cout<<"The maximum number : "<<max_num()<<endl;
    cout<<"The minimum number : "<<min_num()<<endl;
    cout<<"The number of prime numbers : "<<prim_nums()<<endl;
    cout<<"The number of palindrome numbers : "<<pal_nums()<<endl;
    cout<<"The number that has the maximum number of divisors : "<<div_max();
 
    return 0;
}