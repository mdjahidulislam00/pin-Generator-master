//name: Md. Jahidul Islam, Id:180322033
#include<stdio.h>
int main()
{
    int coin[20],n,i,s,c,num=0,counter;
    printf("Enter number of coin:");
    scanf("%d",&n);
    printf("Enter the coins:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&coin[i]);
    }
    printf("Enter change value:");
    scanf("%d",&s);

    while(s>0)
    {
        for(i=0; i<n; i++)
        {
            if(s>=coin[i])
                c=coin[i];
        }
        num=num+s/c;
        counter=s/c;
        s=s%c;
        printf("Needed coin Value:%d need: %d\n",c,counter);
    }
    printf("\nMinimum Number Of coin need:%d",num);

    return 0;
}
