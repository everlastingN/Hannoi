#include<stdio.h>

void move(char a,char b)
{
        printf("move %c to %c\n",a,b);
}

void hannoi(int n,char a,char b,char c)
{
        if(n>0)
        {
                hannoi(n-1,a,c,b);
                move(a,b);
                hannoi(n-1,c,b,a);
        }
}

int main()
{
        int n;
        scanf("%d",&n);
        hannoi(n,'A','B','C');
        printf("%d\n",(1<<n)-1);
        return 0;
}
