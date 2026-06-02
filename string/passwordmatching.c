#include<stdio.h>
int main(){
    char arr1[100], arr2[100];
    int i,j, flag=1;
    
    printf("Enter the first string\n");
    gets(arr1);
    printf("Enter the second string\n");
    gets(arr2);

    for(i=0;arr1[i]!='\0';i++)
    {
       for(j=0;arr2[j]!='\0';i++){
        if(arr1[i]==arr2[i])
        {
          flag=0; 
           printf("#"); 
           break;
        }
       }
    }
   
    return 0;
}