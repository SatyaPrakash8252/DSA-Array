#include<stdio.h>
int main(){
    char arr[100];
    int i;
    printf("Enter string\n");
    gets(arr);

    for(i=0; arr[i] !='\0';i++)
    {
        if(arr[i] >='A' && arr[i] <= 'Z'){
            arr[i]=arr[i] + 32;
        }
    }
    puts(arr);
    return 0;
}