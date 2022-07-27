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
    return 0;
}