#include <stdio.h>

int main(void)
{
    int opt;
    long n1, n2, x;
    printf("Select an option (enter the code infront of the function):"
          "\n1 = Addition"
          "\n2 = Subtraction"
          "\n3 = Multiplication"
          "\n4 = Division"
          "\n5 = Squares"
          "\n6 = exit"
          "\n\nChoice: ");
    scanf("%d", &opt);

    while (opt!=1 && opt!=2 && opt!=3 && opt!=4 && opt!=5 && opt!=6){
        printf("\nInvalid choice!! Choose again...\nChoice: ");
        scanf("%d", &opt);
    }
    
    switch (opt){
    case 1:
        printf("Enter two integers: \n");
        scanf("%ld %ld", &n1, &n2);
        printf("Sum = %ld", n1+n2);
        break;
    case 2:
        printf("Enter two integers: \n");
        scanf("%ld %ld", &n1, &n2);
        printf("Subtraction = %ld", n1-n2);
        break;
    case 3:
        printf("Enter two integers: \n");
        scanf("%ld %ld", &n1, &n2);
        printf("Product = %ld", n1*n2);
        break;
    case 4:
        printf("Enter Dividend (integer): ");
        scanf("%d", &n1);
        printf("Enter Divisor (integer): ");
        scanf("%d", &n2);
        if(n2 == 0){
            printf("\nDIvision by zero not allowed.");
            break;
        }
        x = n1/n2;     
        printf("\nQuotient = %ld, Remainder = %ld", n1/n2,n1%n2);
        break;
    }
    return 0;
}