#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x =7,y=4,z=5;
    int *px=&x;
    int *py=&y;
    int *pz=&z;
    printf("x=%d y=%d z=%d \n px=%d py=%d pz=%d *px=%d *py=%d *pz=%d \n ",x,y,z,px,py,pz,*px,*py,*pz);
    printf("___________________________After Swapping________________________\n");
    pz=px;
    px=py;
    py=pz;
    printf("x=%d y=%d z=%d \n px=%d py=%d pz=%d *px=%d *py=%d *pz=%d ",x,y,z,px,py,pz,*px,*py,*pz);
    return 0;
}
