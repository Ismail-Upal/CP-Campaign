// Show how to implement merge sort without recursion.

#include<bits/stdc++.h>
using namespace std;
void merge_sort(int a[], int b[], int n, int size){
    int i = 0;
    while(i < n){
        int l = i;
        int mid = min(i + size - 1, n - 1);
        int r = min(i + 2 * size - 1, n - 1);

        int lo = l, hi = mid + 1, k = l;

        while(lo <= mid and hi <= r){
            if(a[lo] <= a[hi]){
                b[k++] = a[lo++];
            } 
            else{
                b[k++] = a[hi++];
            }
        }
        while(lo <= mid) b[k++] = a[lo++];
        while(hi <= r) b[k++] = a[hi++];

        for(int i = l; i <= r; i++) a[i] = b[i];

        i += 2 * size;
    }
}
int32_t main()
{   
    int n; cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int size = 1;
    while(size < n){
        merge_sort(a, b, n, size);
        size *= 2;
    }

    for(int i = 0; i < n; i++) cout << a[i] << ' ';
    
    return 0;
}