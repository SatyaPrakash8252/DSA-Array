#include<stdio.h>
int main(){
    int r,c,i,j;

    printf("Enter the size of row and column=");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    printf("ENter the value of row and column\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Before reverse the matrix\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    printf("After reverse the element of matrix\n");
    for(i=r-1;i>=0;i--){
        for(j=c-1;j>=0;j--){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}