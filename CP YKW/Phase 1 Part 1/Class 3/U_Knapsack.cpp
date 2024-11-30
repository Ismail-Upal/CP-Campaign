
#include<bits/stdc++.h>
using namespace std;
int N, W;
int v[22], w[22];
int max_value=0;
void solve(int item , int total_value, int weight){
    if(item==N){
        if(weight<=W){
            max_value = max(max_value, total_value);
        }
        return;
    }
    solve(item+1, total_value, weight);
    solve(item+1, total_value+v[item], weight+w[item]);
}
int main()
{
    cin>>N>>W;
    for(int i=0; i<N; i++){
        cin>>w[i]>>v[i];
    }
    solve(0, 0, 0);
    cout<<max_value;
    return 0;
}