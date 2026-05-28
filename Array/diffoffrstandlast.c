#include<stdio.h>
#include<conio.h>
int main(){
    int a[100],i,n,diff=0;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the elements of the array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        diff=a[0]-a[i];
    }
    printf("Differrence of first and last row: %d",diff);
    return 0;
}