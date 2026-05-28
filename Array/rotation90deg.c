#include<stdio.h>
int main(){
    int a[100][100],i,j,n,n1;
    printf("Enter row and column size of array:");
    scanf("%d %d",&n,&n1);
    printf("Enter element in array:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Before rotation of array elements\n");
    for(i=0;i<n;i++){
        for(j=0;j<n1;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("After 90 degree rotaion of array elements\n");
    for(i=0;i<n;i++){
        for(j=n1-1;j>=0;j--){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}