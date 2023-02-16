#include <stdio.h>
#include <stdlib.h>
int Sum(int *x,int *y)
{
    int sum;
    sum=*x+*y;
    return sum;

}

int main()
{
   int x,y;
   printf("Enter two numbers:\n");
   scanf("%d %d",&x,&y);
   int sum =Sum(&x,&y);
   printf("The sum of the numbers: %d",sum);

    return 0;
}
