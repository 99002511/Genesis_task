#include <stdio.h>
#include <math.h>

int main()
{
    printf("Choose a operation you want from 1 to 100 \n");
    int selection;
    scanf("%d",&selection);
    printf("Type 2 numbers\n");
    int num1,num2,output;
    scanf("%d%d",&num1,&num2);
    switch(selection)
    {
    case 1:
        output=add(num1,num2);
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
