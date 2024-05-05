#include<stdio.h>

int main()
{
    int num1,num2,num3;
    printf("Ingrese primer valor:");
    scanf("%i",&num1);
    printf("Ingrese segundo valor:");
    scanf("%i",&num2);
    printf("Ingrese tercer valor:");
    scanf("%i",&num3);
    printf("Rango de valores:");
    if (num1 < num2 && num1 < num3)
    {
        printf("%i",num1);
    }
    else
    {
        if (num2 < num3)
        {
            printf("%i",num2);
        }
        else
        {
            printf("%i",num3);
        }
    }
    printf("-");
    if (num1 > num2 && num1 > num3)
    {
        printf("%i",num1);
    }
    else
    {
        if (num2 > num3)
        {
            printf("%i",num2);
        }
        else
        {
            printf("%i",num3);
        }
    }
    return 0;
}
 
