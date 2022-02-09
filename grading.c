#include <stdio.h>
int main()
{
    printf("Enter 5 marks : ");
    int mark[5],  sum = 0;
    for (int i = 0; i < 5; i++)
    {
    scanf("%d", &mark[i]);
    sum = sum + mark[i];
    }
    double avg = (((double)sum / 500) * 100);
    printf("avg=%f\n", avg);
        if (avg >= 85 && avg <= 100) 
        printf("%.2f : Grade A\n", avg);
        else if (avg >= 70 && avg <= 84) 
        printf("%.2f : Grade B\n", avg);
        else if (avg >= 55 && avg <= 69) 
        printf("%.2f : Grade C\n", avg);
        else if (avg >= 40 && avg <= 54) 
        printf("%.2f : Grade D\n", avg);
        else
        printf("%.2f : Grade F\n", avg);
        
    
    return 0;
}
