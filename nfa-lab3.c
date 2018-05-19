
#include<stdio.h>
#include<string.h>
int main()
{
    char input[100];
    int i,j,l,text;
    printf("Enter string to check NFA for ab*|a*b: ");
    scanf("%s",&input);
    l=strlen(input);

    if(input[0]=='a' && l==1 || input[0]=='b' && l==1)
    {
        printf("\nString Accepted!");
        exit(0);
    }
    if(input[0]!='a' && l==1 || input[0]!='b' && l==1)
    {
        printf("\nInput is wrong!");
        exit(0);
    }

 if(input[0]=='a'){
    for(i=1;i<l;i++)
    {
        if(input[i]!='b')
        {
            text = 0;
            break;
        }
        else
        {
            text=1;
        }
    }
 }
 if(text == 0)
 {
     if(input[l-i]=='b'){
    for(i=0;i<l-1;i++)
    {
        if(input[i]!='a')
        {
            text = 0;
            break;
        }
        else
        {
            text=1;
        }
    }
 }
 }
 if(text==1){
    printf("String Accepted");
 }
 else{
    printf("Not Accepted");
 }



return 0;

}
NFA14.c
Displaying NFA14.c.