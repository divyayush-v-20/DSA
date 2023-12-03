#include<stdio.h>
void firstOccurence(int* arr,int n,int k){
    int l=0,h=n-1,ans;
    while(l<=h){
        int mid=(l+h)/2;
        if(arr[mid]==k){
             ans=mid;
            h=mid-1;//to check if the same element is present in its left
        }else if(arr[mid]>k){
            h=mid-1;
        }else{
            l=mid+1;
        }
    }printf("%d\n",ans);
}
void lastOccurence(int* arr,int n,int k){
    int l=0,h=n-1,ans;
    while(l<=h){
        int mid=(l+h)/2;
        if(arr[mid]==k){
             ans=mid;
            l=mid+1;//to check if the same element is present in its right
        }else if(arr[mid]>k){
            h=mid-1;
        }else{
            l=mid+1;
        }
    }printf("%d\n",ans);
}
void main(){
    int t;
    scanf("%d",&t);
    while(t!=0){
        int n,k;
        scanf("%d %d",&n,&k);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        printf("First Occurence of %d is at index: ",k);
        firstOccurence(arr,n,k);
        printf("Last Occurence of %d is at index: ",k);
        lastOccurence(arr,n,k);
        t--;
    }
}