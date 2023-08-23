#include<stdio.h>

int main()
{
double num1, num2, result;

char operator;

printf("Enter an operantor(+, -, x, /): ");
scanf("%c", &operator);
printf("Enter two numbers: ");
scanf("%lf %lf", &num1, &num2);


switch(operator)
{
    case '+' :
       result = num1 + num2;
        printf("%.2f", result);
        break;

    case '-' :
         result = num1 - num2;
        printf("%.2f", result);
        break;
    
case 'x' :
         result = num1 * num2;
        printf("%.2f", result);
        break;

case '/' :
        if (num2 != 0)
        {
            result = num1 / num2;
        printf("%.2f", result);
        break; 
        }
default :
        printf("Enter valid numbers");
}
}

