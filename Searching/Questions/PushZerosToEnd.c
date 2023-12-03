#include<stdio.h>
void pushZerostoEnd(int* arr,int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j]!=0){
            int t= arr[j];
            arr[j]=arr[i];
            arr[i]=t;
            i++;
        }
    }
}
void print(int* arr,int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void main(){
    int n;scanf("%d",&n);
    int arr[n];for(int i=0;i<n;i++){scanf("%d",&arr[i]);}
    pushZerostoEnd(arr,n);
    print(arr,n);
}