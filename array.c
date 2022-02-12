#include <stdio.h>

void main()
{
  int a[3][3],i,j;
  /* Stored values into the array*/
       printf("Input elements in the matrix :\n");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
	      printf("element - [%d],[%d] : ",i,j);
	      scanf("%d",&a[i][j]);
      }
  }  
 
 printf("\nThe matrix is : \n");
  for(i=0;i<3;i++)
  {
      printf("\n");
      for(j=0;j<3;j++)
           printf("%d\t",a[i][j]);
  }
 printf("\n\n");

	int Sum = 0;
    for(i = 0; i < 3; i++)
  	{
   		Sum = Sum + a[i][i];
  	}
 
 	printf("\nThe Sum of Diagonal Elements of a Matrix =  %d", Sum );

}
  
