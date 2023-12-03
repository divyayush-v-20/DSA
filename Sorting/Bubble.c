#include<stdio.h>
void BubbleSort(int* arr,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                arr[j]*=arr[j+1];
                arr[j+1]=arr[j]/arr[j+1];
                arr[j]=arr[j]/arr[j+1]; //swapping
            }
        }
    }return arr[n];
}
void main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    BubbleSort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}