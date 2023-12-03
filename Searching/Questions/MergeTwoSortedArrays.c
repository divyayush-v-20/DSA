#include<stdio.h>
void merge(int* a1,int n,int* a2,int m,int* a3){
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(a1[i]<a2[j]){
            a3[k]=a1[i];
            i++;k++;
        }else{
            a3[k]=a2[j];
            j++;
            k++;
        }
     }
     while(i<n){
        a3[k]=a1[i];
        k++;i++;
    }
    while(j<m){
        a3[k]=a2[j];
        j++;k++;
    }
}
void print(int* arr,int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a1[n],a2[m];
    for(int i=0;i<n;i++){
        scanf("%d",&a1[i]);
    }
    for(int i=0;i<m;i++){
        scanf("%d",&a2[i]);
    }
    int k=n+m;
    int a3[k];
    merge(a1,n,a2,m,a3);
    print(a3,k);
}