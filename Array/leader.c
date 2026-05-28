#include<stdio.h>
#include<conio.h>
int main(){
    int a[100],i,j,n,leader;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the elements of the array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    leader=0;
    printf("The leaders in the array are:");
    for(i=0;i<n;i++){
        leader=1;
        for(j=i+1;j<n;j++){
            if(a[j]>a[i]){
                leader=0;
                break;
            }
        }
        if(leader==1){
            printf("%d ",a[i]);
        }
    }
    return 0;
}