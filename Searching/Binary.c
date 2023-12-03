#include<stdio.h>
int binarySearch(int* arr,int n,int e){
    int l=0,h=n-1,mid;
    while(l<=h){
        mid=l+(h-l)/2;
        if(arr[mid]==e){
            return mid;
        }else if(arr[mid]<e){
            l=mid+1;
        }else{
            h=mid-1;
        }
    }
    return -1; //if element is not present in the array
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);
    printf("%d",binarySearch(arr,n,x));
    return 0;
}