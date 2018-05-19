#include<stdio.h>
#include<string.h>
int main()
{
    char input[100];
    int i,j,l;
    printf("Enter string to check NFA for (ab*)c : ");
    scanf("%s",&input);
    l=strlen(input);

    if(input[0]!='a' || input[l-1]!='c')
    {
        printf("\nInput is wrong!");
        return 0;
    }
    if(input[0]=='a' && input[l-1]=='c' && l==2)
    {
        printf("\nString Accepted!");
       return 0;
    }


    for(i=1; i<l-1; i++)
    {
        if(input[0]=='a' && input[l-1]=='c')
        {
            if(input[i]!='b')
            {
                printf("\nInput is wrong!");
                exit(0);
            }


        }
        if(i==l-2)
            printf("\nString Accepted!");
    }
    return 0;
}

