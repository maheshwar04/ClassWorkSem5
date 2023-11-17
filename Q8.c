#include <stdio.h>
#include <string.h>

struct GroceryItem {
char name[20];
int unit_cost;
char category;
union {
struct {
char meat_type;
char expiration_date[11]; 
char packaging_date[11];
} meat;
struct {
char produce_type; 
char received_date[11]; 
} produce;
struct {
char expiration_date[11]; 
}dairy;
struct {
char expiration_date[5]; 
int aisle_number;
char aisle_side; 
} canned_goods;
struct {
char category_type; 
int aisle_number;
char aisle_side; 
} nonfoods;
} additional_data;
};


struct GroceryItem scanGroceryItem() {
struct GroceryItem item;
    
printf("Enter item name: ");
scanf("%s", item.name);
    
printf("Enter unit cost in cents: ");
scanf("%d", &item.unit_cost);
    
printf("Enter product category (M/P/D/C/N): ");
scanf(" %c", &item.category);
    
if (item.category == 'M') {
printf("Enter meat type (R/P/F): ");
scanf(" %c", &item.additional_data.meat.meat_type);
        
printf("Enter packaging date (MM/DD/YYYY): ");
scanf("%s", item.additional_data.meat.packaging_date);
        
printf("Enter expiration date (MM/DD/YYYY): ");
scanf("%s", item.additional_data.meat.expiration_date);
} else if (item.category == 'P') {
printf("Enter produce type (F/V): ");
scanf(" %c", &item.additional_data.produce.produce_type);
        
printf("Enter received date (MM/DD/YYYY): ");
scanf("%s", item.additional_data.produce.received_date);
} else if (item.category == 'D') {
printf("Enter expiration date (MM/DD/YYYY): ");
scanf("%s", item.additional_data.dairy.expiration_date);
} else if (item.category == 'C') {
printf("Enter expiration date (MMYY): ");
scanf("%s", item.additional_data.canned_goods.expiration_date);
        
printf("Enter aisle number: ");
scanf("%d", &item.additional_data.canned_goods.aisle_number);

printf("Enter aisle side (A/B): ");
scanf(" %c", &item.additional_data.canned_goods.aisle_side);
} else if (item.category == 'N') {
printf("Enter category type (C/P/O): ");
scanf(" %c", &item.additional_data.nonfoods.category_type);
        
printf("Enter aisle number: ");
scanf("%d", &item.additional_data.nonfoods.aisle_number);
        
printf("Enter aisle side (A/B): ");
scanf(" %c", &item.additional_data.nonfoods.aisle_side);
}
return item;
}
// Function to display grocery item information
void displayGroceryItem(struct GroceryItem item) {
printf("Item Name: %s\n", item.name);
printf("Unit Cost: %d cents\n", item.unit_cost);
printf("Category: %c\n", item.category);
    
if (item.category == 'M') {
printf("Meat Type: %c\n", item.additional_data.meat.meat_type);
printf("Expiration Date: %s\n", item.additional_data.meat.expiration_date);
} else if (item.category == 'P') {
printf("Produce Type: %c\n", item.additional_data.produce.produce_type);
printf("Received Date: %s\n", item.additional_data.produce.received_date);
} else if (item.category == 'D') {
printf("Expiration Date: %s\n", item.additional_data.dairy.expiration_date);
} else if (item.category == 'C') {
printf("Expiration Date: %s\n", item.additional_data.canned_goods.expiration_date);
printf("Aisle Number: %d\n", item.additional_data.canned_goods.aisle_number);
printf("Aisle Side: %c\n", item.additional_data.canned_goods.aisle_side);
} else if (item.category == 'N') {
printf("Category Type: %c\n", item.additional_data.nonfoods.category_type);
printf("Aisle Number: %d\n", item.additional_data.nonfoods.aisle_number);
printf("Aisle Side: %c\n", item.additional_data.nonfoods.aisle_side);
}
}

int main() {
struct GroceryItem groceryItems[100]; 
int itemCount = 0;
char moreItems;

do {
groceryItems[itemCount] = scanGroceryItem();
itemCount++;

printf("Do you want to add more items? (Y/N): ");
scanf(" %c", &moreItems);
} while (moreItems == 'Y' || moreItems == 'y');

printf("\nGrocery Items:\n");
for (int i = 0; i < itemCount; i++) {
displayGroceryItem(groceryItems[i]);
printf("\n");
}

return 0;
}

