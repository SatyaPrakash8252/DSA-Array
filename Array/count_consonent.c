#include<stdio.h>
int main(){
    int i,count=0,n;
    char arr[50];
    printf("Enter the string=");
    scanf("%s",arr);
  
    printf("The consonent is in string is\n");
    for(i=0;arr[i]!='\0';i++){
       
        if(arr[i]>='a' && arr[i]<='z' || arr[i]>='A' && arr[i]<='Z')
        {
            if(!(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' ||
                arr[i]=='o' || arr[i]=='u'|| arr[i]=='A' || 
                arr[i]=='E' || arr[i]=='I' ||arr[i]=='O' || 
                arr[i]=='U')) 
                {
                    printf("%c",arr[i]);
                    count++;
              }
        }
    }
    printf("\nThe number of consonent in the string is %d\n",count);
  return 0;
}