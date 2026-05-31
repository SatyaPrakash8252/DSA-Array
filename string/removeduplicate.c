#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    int i,j,pos=0,f=0,k;
    printf("Enter string");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++){
       for(j=i+1;a[j]!='\0';j++){
            if(a[i]==a[j]){
                pos=j;
                f++;
                for(k=pos;a[k]!='\0';k++){
                    a[k]=a[k+1];
                }
                j--;
            }
       }
    }
    
    //for(i=0;a[i]!='\0';i++){
    printf("%s",a);
    //}
    return 0;
}