#include <stdio.h>

int main()
{
    int bp,incentive;
    printf("enter the basic salary");
    scanf("%d", &bp);
    printf("enter incentive");
    scanf("%d", &incentive);
    const int hra=bp*30/100;
    const  int  da=bp*20/100;
    const int gross=hra+da+incentive+bp;
    const int net=gross-14000-10/100*bp;
    printf("Gross Salary is: %d \n",gross);
    printf("Net Salary is: %d \n",net);
    return 0;
}