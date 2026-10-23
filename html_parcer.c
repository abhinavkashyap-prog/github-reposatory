#include <stdio.h>
#include <string.h>
void parcer(char *string)
{
    int in=0;
    int index=0;
    for (int i = 0; i < strlen(string); i++)
    {
        if(string[i]=='<'){
          in=1;
          continue;
        }
        else if (string[i]=='>')
        {
            in=0;
            continue;
        }
        if (in==0)
        {
            string[index]=string[i];
            index++;
        
        }
        
    }
    string[index]='\0';

    // removing trailing spaces

    while(string[0]==' ')
    {
        for (int i = 0; i < strlen(string); i++)
        {
          string[i]=string[i+1];
          
        }
        
// removing trailing spaces of end

       while (string[strlen(string)-1]==' ')
       {
        string[strlen(string)-1]='\0';
       }
       
    }
}

int main()
{
    char string[]="<h1>      this is a heading     </h1>";
    parcer(string);
    printf("the parsed string is ~~%s~~",string);
    return 0;
}
