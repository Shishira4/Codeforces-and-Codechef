#include<stdio.h>
#include<string.h>
int main()
{
    int t,l;
    scanf("%d",&t);
    char word[100];
    for(int i=1; i<=t;i++)
    {
        scanf("%s",word);
        l = strlen(word);
        if(l>10)
        {
            printf("%c%d%c\n",word[0],l-2,word[l-1]);
        }
        else
        {
            printf("%s\n",word);
        }
    }
    return 0;
}