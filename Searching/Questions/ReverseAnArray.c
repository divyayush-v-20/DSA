#include<stdio.h>
void reverse(int* arr,int n){
    int l=0,h=n-1;
    while(l<=h){
        int t=arr[l];
        arr[l]=arr[h];
        arr[h]=t;
        l++;h--;
    }for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
void main(){
    int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        reverse(arr,n);
}