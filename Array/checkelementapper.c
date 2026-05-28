#include<stdio.h>
int main(){
    int n,i,j,count;

    printf("Enter  size of array");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter appering more than n/4 times are:\n");
    for(i=0;i<n;i++){
        count=0;

        for(j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count > n/4){
            printf("%d",arr[i]);
        }
    }
}
