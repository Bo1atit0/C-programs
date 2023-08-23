#include<stdio.h>

int main()
{
    char ch;
    int amount, sum;
   
    
    printf("a - Withdraw funds\nb - Deposit funds \nc - Check balance\n");
    printf("Pick an option: ");
    scanf("%c", &ch);

    switch(ch)
    {
        case 'a' : printf("How much do you want to withdraw ?\n");
                   scanf("%d", &amount);
                   sum -= amount;
                 break;
        case 'b' : printf("How much do you want to deposit? ");        
                   scanf("%d", &amount);
                   sum += amount;
                   break;

       case 'c' : printf("%d", sum);        
                   break;


        default :
                printf("Enter a valid option\n");
    }
    //printf("Thank you for banking with us\n");
}