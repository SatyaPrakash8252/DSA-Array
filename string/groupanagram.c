#include<stdio.h>

int main() {
    int n,i,j,k,l,flag;
    char s[20][20];

    printf("Enter number of strings: ");
    scanf("%d",&n);

    printf("Enter strings:\n");
    for(i=0;i<n;i++)
        scanf("%s",s[i]);

    for(i=0;i<n;i++) {

        printf("%s : ",s[i]);

        for(j=i+1;j<n;j++) {

            flag=1;

            for(k=0;s[i][k]!='\0';k++) {

                int c1=0,c2=0;

                for(l=0;s[i][l]!='\0';l++)
                    if(s[i][l]==s[i][k]) c1++;

                for(l=0;s[j][l]!='\0';l++)
                    if(s[j][l]==s[i][k]) c2++;

                if(c1!=c2) {
                    flag=0;
                    break;
                }
            }

            if(flag)
                printf("%s ",s[j]);
        }

        printf("\n");
    }

    return 0;
}
