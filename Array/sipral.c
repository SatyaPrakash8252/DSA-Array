#include<stdio.h>
int main(){
    int arr[100][100],r,c,i,j,top,down,left,right;;
    printf("Enter the row size of array:");
    scanf("%d",&r);
    printf("Enter the column size");
    scanf("%d",&c);
    printf("Enter the element of array:");
    for(i=0;i<r;i++){ 
        for(j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Spiral matrix\n");
    top=0;
    down=r-1;
    left=0;
    right=c-1;
    while(top<=down && left<=right){
        for(i=left;i<=right;i++){
            printf("%d",arr[top][i]);
        }
        top++;
        for(i=top;i<=down;i++){
            printf("%d",arr[right][i]);
        }
        right--;
        if(right<=left){
            for(i=right;i>=left;i--){
                printf("%d",arr[down][i]);
            }
            down--;
        }
        if(left<=right){
            for(i=down;i>=top;i--){
                printf("%d",arr[i][left]);
            }
            left++;
        }
        return 0;
    }

}