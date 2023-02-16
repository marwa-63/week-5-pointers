#include <stdio.h>
#include <stdlib.h>
 int Mul(int *a,int *b)
{
    int prod=0;
    for(int i=0;i<3;i++)
        prod+= *(a+i) * *(b+i);
        return prod;
}
int main()
{
   int a[3]={1,2,3};
   int b[3]={4,5,6};
   int prod=Mul(a,b);
   printf("The scalar product of two arrays:%d",prod);

    return 0;
}
