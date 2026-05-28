#include<stdio.h>
int main(){
     int n,i ,pos;
     printf("Enter the size ");
     scanf("%d",&n);
     int arr[n];

     for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
     }
        int smallest=arr[0];
        for(i=0;i<n;i++){
           
            if(arr[i]<smallest){
                smallest=arr[i];
                pos=i;
            }
        }
        printf("\nThe smallest element=%d",smallest);

        for(i=pos;i<n-1;i++)
        {
            arr[i]=arr[i+1];
        }
        n--;
        
        printf("\nAfter deleting the smallest element th array is \n");
        for(i=0;i<n;i++)
         {
           printf("%d",arr[i]);
         }

        return 0;
     
}