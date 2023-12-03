#include<stdio.h>
void linearSearch(int* arr,int n,int e){
    int flag=0,rv;
    for(int i=0;i<n;i++){
        if(arr[i]==e){
            flag=1;
            rv=i;
        }
    }if(flag==1){
        printf("%d is at index %d",e,rv);
    }else{
        return 0;
    }
}
void main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);
    linearSearch(arr,n,x);
}