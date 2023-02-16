#include <stdio.h>
#include <stdlib.h>
void Sort(int *a)
{
    int p;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                p=a[i];
                a[i]=a[j];
                a[j]=p;
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }

}
int main()
{
    int a[5]={4,3,5,1,2};
    Sort(a);




    return 0;
}
