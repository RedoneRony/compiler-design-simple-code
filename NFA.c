#include<stdio.h>
#include<string.h>
int main()
{
    char input[100];
    int i,j,l;
    printf("Enter string to check NFA for ab* : ");
    scanf("%s",&input);
    l=strlen(input);

    for(i=1; i<l; i++)
    {
        if(input[0]=='a' && l==1)
        {
            printf("\nString Accepted!");
            exit(0);
        }
        else if(input[0]!='a' || input[i]!='b' || l==1)
        {
            printf("\nInput is wrong!");
            exit(0);

        }

        else if(input[0]=='a' && input[i]=='b')
        {
            j=1;
        }

    }
    if(j==1)
    {
        printf("\nString Accepted!");
    }

}
