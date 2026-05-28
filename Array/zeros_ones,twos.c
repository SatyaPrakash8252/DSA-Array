#include<stdio.h>
int main(){
    int a[100], i,n;
    int c0=0,c1=0,c2=0;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter element in array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]==0){
            c0++;
        }
        else if(a[i]==1){
            c1++;
        }
        else{
            c2++;
        }
    }
    for(i=0;i<c0;i++){
        printf("0");
    }
     for(i=0;i<c1;i++){
        printf("1");
    }
     for(i=0;i<c2;i++){
        printf("2");
    }
    return 0;
}