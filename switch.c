#include <stdio.h>
int main(void)
{
// display menu
printf("Pick item : \n1. Pizza, Rs 240\n2. Burger, Rs 130\n3. Pasta, Rs 180\n4. Fries, Rs 99\n5. Sandwich, Rs 150\n");
// read choices
int ch;
scanf("%d",&ch);
// display based on choice
switch (ch)
{
case 1:
    printf("Food item- Pizza\nPrice- Rs 240");
    break;
case 2:
    printf("Food item- Burger\nPrice- Rs 130");
    break;
case 3:
    printf("Food item- Pasta\nPrice- Rs 180");
    break;
case 4:
    printf("Food item- Fries\nPrice- Rs 99");
    break;
case 5:
    printf("Food item- Sandwich\nPrice- Rs 150");
    break;

default:
    printf("Invalid Input");
    break;
}
}