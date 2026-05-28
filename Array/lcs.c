#include<stdio.h>
int main(){
    int a[100], n,i;
    int len=1,max=1,end=0;
    printf("Enter size of array:");
    scanf("%d", &n);
    printf("Enter elements in array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++){
        if(a[i]> a[i-1]){
            len++;
        }
        else{
            len=1;
        }
        if(len > max){
            max=len;
            end=i;
        }
    }
    printf("Longest sub subarray:\n");
    for(i=end-max+1;i<=end;i++){
        printf("%d",a[i]);
    }
    printf("\nLength= %d",max);
    return 0;

}