
#include<stdio.h>
#include<string.h>
void rcomment(int c);
void incomment(void);
void echo_quote(int c);
int main()
{
    char text[100], blank[100];
   int c = 0, d = 0,e,count=0,i=0;

   printf("Enter some text\n");
   gets(text);

    while (text[c] != '\0')
   {
      if (!(text[c] == ' ' && text[c+1] == ' ')) {
        blank[d] = text[c];
        d++;
      }
      c++;
   }

   blank[d] = '\0';

   printf("Text after removing blanks\n%s\n", blank);

    char *token;

    token = strtok(blank, " ");

    while(token != NULL)
    {
        if(token[0]=='/')
        {
            if(token[1]=='/')
            {
                printf("%s is not token\n",token);
            }
            else if(token[1]=='*')
            {
                printf("%s is not token\n",token);
                count++;

            }
            else if(token[1]==NULL){
                printf("This is a operator\n");
            }
            else
            {
                printf("%s is not token\n",token);
            }

        }
        else
        {
            if(token[0] == '+' || token[0] == '-' || token[0] == '*' || token[0] == '/' || token[0] == '%' ){
                printf("%s This is a operator\n",token);
            }
            else if(token[0] == '='){
                printf("%s This is a assignment operator\n",token);
            }
            else if(token[0] >='a' && token[0] <='z' || token[0] >='A' && token[0] <='Z')
            {
                if( strcmp(token,"int") == 0 || strcmp(token,"double") == 0 || strcmp(token,"char") == 0 || strcmp(token,"printf") == 0 || strcmp(token,"scanf") == 0)
                    printf("%s keyword\n",token);
                else
                    printf("%s This is a identifier\n",token);
            }
            else if(token[0] >='0' && token[0] <='9')
            {
                printf("%s This is a Number\n",token);

            }
            else
            {
                printf("%s is symbol\n",token);
            }
        }
        token = strtok(NULL, " ");
    }
     //printf("%d str len\n",strlen(blank));

printf("Withgout Comment: \n");

    while((c=blank[i])){
        rcomment(c);
        i++;
    }

printf("\n\n");

    return 0;
}

void rcomment(int c)
{
    int d;
    if( c == '/')
    {
        if((d=getchar())=='*')
         incomment();
        else if( d == '/')
        {
            putchar(c);
            rcomment(d);
        }
        else
        {
            putchar(c);
            putchar(d);
        }
    }
    else if( c == '\''|| c == '"')
        echo_quote(c);
    else
        putchar(c);
}

void incomment()
{
    int c,d;

    c = getchar();
    d = getchar();

    while(c!='*' || d !='/')
    {
        c =d;
        d = getchar();
    }
}

void echo_quote(int c)
{
    int d;

    putchar(c);

    while((d=getchar())!=c)
    {
        putchar(d);

        if(d = '\\')
            putchar(getchar());
    }
    putchar(d);
}

