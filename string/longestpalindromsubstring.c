#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int start= 0, maxlen=1,i,j,flag;
    printf("Enter a string\n");
    scanf("%s",str);

    int n=strlen(str);
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
        int l=i,r =j;
         flag=1;
        while(l < r){
            if(str[l] !=str[r]){
                flag=0;
                break;
            }
            l++;
            r--;
        }
        if(flag && (j-i + 1>maxlen))
        {
            start =i;
            maxlen =j-i + 1;
        }
    }
   }
    printf("Longest Palindrome substring:");
    for(i=start; i<start + maxlen; i++){
        printf("%c",str[i]);
    }
    printf("\n Length=%d",maxlen);
    return 0;
}