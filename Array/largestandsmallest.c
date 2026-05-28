#include<stdio.h>
int main(){
     int n,i;
     printf("Enter the size ");
     scanf("%d",&n);
     int arr[n];

     for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
     }
        int largest=arr[0],smallest=arr[0];
        for(i=0;i<n;i++){
            if(arr[i]>largest){
                largest=arr[i];
            }
            if(arr[i]<smallest){
                smallest=arr[i];
            }
        }
        printf("The largest element=%d",largest);
        printf("\nThe smallest element=%d",smallest);

        return 0;
     
}