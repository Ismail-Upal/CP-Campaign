#include<bits/stdc++.h>
using namespace std;
void mergem(int A[],int lb,int mid,int ub){
    int i= lb;
    int j= mid + 1;
    int k=0;
    int tmp[ub-lb+1];
    while(i<=mid && j<=ub){
        if(A[i]<A[j]){
            tmp[k]=A[i];
            i++;
            k++;
        }
        else{
            tmp[k]=A[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
        tmp[k]=A[i];
        i++;
        k++;
    }
    while(j<=ub){
        tmp[k]=A[j];
        j++;
        k++;
    }
    for(i=lb,k=0;i<=ub;i++,k++){
        A[i]=tmp[k];
    }
}
void mergesort(int A[],int lb, int ub){
    if(lb<ub){
        int mid=(lb+ub)/2;
        mergesort(A,lb,mid);
        mergesort(A,mid+1,ub);
        mergem(A,lb,mid,ub);
        cout<<"Hello" <<endl;
    }
}
void show(int A[],int n){
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}
int main(){
    int A[]={6,7,1,12,5};
    int n=sizeof(A)/sizeof(A[0]);
    mergesort(A,0,n-1);
    show(A,n);
}