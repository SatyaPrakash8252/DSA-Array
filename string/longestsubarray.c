#include<stdio.h>
int main(){
    char a[100];
    int i,j,max=0;
    printf("Enter string");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++){
        for(j=i+1;a[j]!='\0';j++){
            if(a[i]==a[j]){
                break;
            }
        }
        if(j-i>max)
        {
            max=j-i;
        }
    }
    printf("Length=%d",max);
    printf("\nsubstring = %s",a);
    return 0;

}