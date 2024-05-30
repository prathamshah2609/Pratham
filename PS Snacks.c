#include <stdlib.h>
#include <stdio.h>
#define SAMOSA_PRICE 15
#define DABELI_PRICE 10
#define VADAPAV_PRICE 10
#define SANDWICH_PRICE 50
#define PIZZA_PRICE 60
#define CHEESEPIZZA_PRICE 80

int main()
{

	int choice = 0;
	int totalPrice = 0;
	
	printf("\nWelcome to P S Snacks!\n\n");
	printf("May I take your order? \n\n");

	do{
		printf("           Menu: \n\n");
		printf("1. Samosa              ₹%d \n", SAMOSA_PRICE);
		printf("2. Dabeli              ₹%d \n", DABELI_PRICE);
		printf("3. Vadapav             ₹%d \n", VADAPAV_PRICE);
		printf("4. Veg. Grill Sandwich ₹%d \n", SANDWICH_PRICE);
		printf("5. Veg. Pizza          ₹%d \n", PIZZA_PRICE);
		printf("6. Cheese Pizza        ₹%d \n", CHEESEPIZZA_PRICE);
		printf("7. Exit\n\n");
		printf("Enter an item number:");
		scanf("%i", &choice);

		switch(choice){
		case 1:
			totalPrice += SAMOSA_PRICE;
			break;
		case 2:
			totalPrice += DABELI_PRICE;
			break;
		case 3:
			totalPrice += VADAPAV_PRICE;
			break;
		case 4:
			totalPrice +=SANDWICH_PRICE;
			break;
		case 5:
			totalPrice += PIZZA_PRICE;
			break;
		case 6:
			totalPrice += CHEESEPIZZA_PRICE;
			break;
		case 7:
			printf("\n\n\nThank you for ordering at P S Snacks!");
			break;
		default:
			printf("***Error***:  This is not on the menu. \n");
			break;
		}
		
		printf("\n\nTotal Bill: ₹%d\n\n", totalPrice);
	
	} while (choice != 7);

	printf("Have a nice day!");

}
