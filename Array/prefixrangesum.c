#include<stdio.h>
int main(){
    int n,i,sum=0;
    int l,r;
    printf("Enter the size of array=");
    scanf("%d",&n);

    int arr[n];
    int pre[n + 1];

    printf("Enter the element in array");
    for(i=0;i<n;i++){
       scanf("%d",&arr[i]);
    }


    pre[0] = 0;
    for(i=1;i<=n;i++)
    {
        pre[i]= pre[i - 1] + arr[ i- 1];
    }

    scanf("%d %d",&l,&r);
    sum= pre[r] - pre[l - 1];
    printf("%d",sum);

    return 0;

}