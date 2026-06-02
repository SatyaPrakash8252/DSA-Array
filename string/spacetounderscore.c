#include<stdio.h>
int main(){
    char arr[100];
    int i;
    printf("Enter string\n");
    gets(arr);

    for(i=0; arr[i] !='\0';i++)
    {
        if(arr[i]==' '){
            arr[i]='_';
        }
    }
    puts(arr);
    return 0;
}