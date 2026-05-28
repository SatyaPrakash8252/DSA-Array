#include<stdio.h>
int main(){
    int a[20][20],diff=0,i,sum1=0,sum2=0;
    int n,j,n1;
    printf("Enter row and column size of array:");
    scanf("%d %d",&n,&n1);
    printf("Enter your element:");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d ",&a[i][j]);
        }
    }
     for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                sum1=sum1+a[i][j];
                
            }
            if(i+j==n){
                sum2=sum2+a[i][j];
                
            }
        }

    }
    printf("Sum of first diagonal=%d\n",sum1);
    printf("Sum of second diagonal=%d\n",sum2);
    diff=sum1-sum2;
    printf("Difference=%d",diff);
    return 0;
}