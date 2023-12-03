#include<stdio.h>
//function for partition
int part(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low+1;
    int j=high;
    int temp;
    do{
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<j){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }while(i<j);
    temp=arr[low];
    arr[low]=arr[j];
    arr[j]=temp;
    return j;
}
//function to sort
void quickSort(int arr[],int low,int high){
    int pi;
    if(low<high){
        pi=part(arr,low,high);
        quickSort(arr,low,pi-1); //to sort right subarray
        quickSort(arr,pi+1,high);//to sort left subarray
    }
}
void input(int arr[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    input(arr,n);
    quickSort(arr,0,n-1);
    print(arr,n);
}