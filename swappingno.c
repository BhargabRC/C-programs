#include <stdio.h>
//making a function for swapping nos.
void swap(int *px, int *py)
{
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
}
int main(void)
{
    //taking input of two nos.
    printf("Enter value for x : ");
    int x;
    scanf("%d",&x);
    printf("\nEnter value for y : ");
    int y;
    scanf("%d",&y);

    printf("x=%d y=%d\n",x,y);

    if(x>y || x<y)
    {
        // calling swap function
        swap(&x, &y);
    }

    printf("x=%d y=%d",x,y);

    return 0;
}