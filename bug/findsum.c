#include <iostream>
using namespace std;
int findSum (int  n){
    // base condition
    if (n == 1 )
     return  1 ;
    return n + findSum(n - 1); 
}
int main() {
    int n = 5 ;
    cout <<  findSum(n); 
    return 0;
}