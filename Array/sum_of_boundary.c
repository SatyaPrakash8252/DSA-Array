#include<stdio.h>
int main(){
    int r,c,i,j;
    int sum=0;

    printf("Enter the size of row and column=");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    printf("Enter the value of row and column\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
     printf("\nThe matrix is\n");
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d",arr[i][j]);
            if(i==0 || i==r-1 || j==0 || j==c-1){
                sum=sum+arr[i][j];
            }
        }
        printf("\n");
    }

    printf("\nThe sum of boundary element =%d",sum);

}