#include<stdio.h>
int main(){
    int a[100],i,j,n,f[100],t;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter elements in array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
         f[i]=1;
    }
   
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                f[i]++;
                f[j]=0;
            }
        }
    }

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(f[i]<f[j]){
                t=f[i];
                f[i]=f[j];
                f[j]=t;

                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<n;i++){
        if(f[i]!=0){
            for(j=0;j<f[i];j++){
                printf("%d",a[i]);
            }
        }
    }
    return 0;

}
