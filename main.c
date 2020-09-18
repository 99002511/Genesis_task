#include <stdio.h>
#include <math.h>

int main()
{
    printf("Choose a operation you want from 1 to 100 /n");
    int selectioin;
    scanf("%d",&selection);
    printf("Type 2 numbers");
    int num1,num2,output;
    scanf("%d%d",&num1,&num2);
    switch(selection)
    {
    case 1:
        outut=add(num1,num2);
        break;
    case 2:
        output=sub(num1,num2);
        break;
    case 3:
        output=mult(num1,num2);
        break;
    }


    printf("%d",output);
}
