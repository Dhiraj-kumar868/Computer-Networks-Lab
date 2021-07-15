/*WAP to read item details used in party and calculate all 
expenses, divide expenses in all friends equally.*/


#include <stdio.h>
#define MAX 20

typedef struct item_details
{
    char itemName[30];
    int quantity;
    float price;
    float totalAmount;
} item;

int main()
{
    item item1[MAX];
    int i, choice;
    int count = 0;
    float expenses = 0.0f;

    i = 0;
    do
    {
        printf("Enter item details for item %d:\n", i + 1);

        printf("Enter the item name:");
        scanf("%s", &item1[i].itemName);

        printf("Enter the price of an item:");
        scanf("%f", &item1[i].price);

        printf("Enter the quantity of an item:");
        scanf("%d", &item1[i].quantity);

        item1[i].totalAmount = (float)item1[i].quantity * item1[i].price;
        expenses += item1[i].totalAmount;

        i++;
        count++;

        printf("\nWant to more items (press 1): ");
        scanf("%d", &choice);

        getchar();

    } while (choice == 1);

    printf("All details are:\n");
    for (i = 0; i < count; i++)
    {
        printf("%s\t %.2f \t %3d \t %.2f\n", item1[i].itemName, item1[i].price, item1[i].quantity, item1[i].totalAmount);
    }
    printf("\nTotal expense: %.2f\n", expenses);

    printf("Want to divide in friends (press 1 for yes): ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("How many friends? ");
        scanf("%d", &i);
        printf("Each friend will have to pay: %.2f\n", (expenses / (float)i));
    }
    return 0;
}