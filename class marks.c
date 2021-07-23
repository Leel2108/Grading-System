#include<stdlib.h>
#include<stdio.h>
#define Pizza_price 239
#define Burger_price 129
#define Pasta_price 179
#define French_Fries_price 99
#define Sandwich_price 149
int main()
{
    int choice = 0;
    double totalPrice =0;
    printf("Welcome to FastFood Restaurant!\n");
    printf("May I Take Your Order? \n\n");
    do{
        printf("Menu: \n\n");
        printf("1. Pizza   $%.2If \n", Pizza_price);
        printf("2. Burger  $%.2If \n", Burger_price);
        printf("3. Pasta   $%.2If \n", Pasta_price);
        printf("4. French Fries $%.2If \n", French_Fries_price);
        printf("5. Sandwich  $%.2If \n", Sandwich_price);
        printf("6. Exit\n\n");
        printf("Enter an item: ");
        scanf("%i",&choice);

        switch(choice){
    case 1:
        totalPrice += Pizza_price;
        break;
    case 2:
        totalPrice += Burger_price;
        break;
    case 3:
        totalPrice += Pasta_price;
        break;
    case 4:
        totalPrice += French_Fries_price;
        break;
    case 5:
        totalPrice += Sandwich_price;
        break;
    case 6:
        printf("Thank You For Ordering at Fast Food Restaurant! \n");
        break;
    default:
        printf("***Error: This is not on the menu. \n");
        break;
        }
        printf("Total so far: $%.2If\n\n", totalPrice);
    } while (choice != 7);
    printf("Your Order is $%.2If \n\n", totalPrice);
    printf("Thank you for coming to fast food Restaurant.\n");
    printf("Have a nice day!.\n\n");

    system("pause");
}
