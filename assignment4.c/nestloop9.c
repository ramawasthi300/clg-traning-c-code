// no.
#include<stdio.h>
int main(void)
{
    int num,i,j;
    printf("enter any no.");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
          for(j=1;j<=i;j++)
          {
              printf("%d",i);
          }
          printf("\n");
    }
}