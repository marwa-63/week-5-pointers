#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *a=(int*)malloc(5*sizeof(int));
    int *p=(int*)realloc(a,7*sizeof(int));
    for(int i=0;i<7;i++)
    {

        a[i]=i+1;
        printf("%d ",a[i]);
    }
    free(p);
    p=NULL;
    return 0;
}
