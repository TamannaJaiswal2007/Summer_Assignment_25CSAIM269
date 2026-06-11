#include<stdio.h>
int Prime(int n)
{
    for(int i=2 ; i*i<=n ; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a,b,i;
    printf("enter the range:");
    scanf("%d%d",&a,&b);
    printf("The Prime numbers in the range are:");
    for(i=a;i<=b;i++)
    {    
        if(Prime(i)==1)
        {
            printf("%d ",i);
        }    
    

   }
return 0;
}
