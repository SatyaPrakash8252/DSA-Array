#include<stdio.h>
int main(){
    int r,c,i,j;
    
    int sum=-1;
    int delrow=0;
    printf("Enter the size of row and column=");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    printf("ENter the value of row and column\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
   
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    
    for(int i=0;i<r;i++){
        int sumrows=0;
        for(int j=0;j<c;j++)
        {
            sumrows+=arr[r][c];
        }
        if(sumrows>sum){
            sum=sumrows;
            delrow=i;
            
        }
       
    }
    printf("The maximum sum is %d \n",sum);
    printf("The row which is deleted is %d\n",delrow);
   
   return 0;
}