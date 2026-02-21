/*Print monthly expenditure 
   Practical 2, Part 3
   @author Sadikshya Pradhananga

   SECURITY IMPROVEMENTS:
   1. Used fgets() instead of scanf() - safer input method
   2. Added validation - checks that expenses are not negative */

#include <stdio.h>
#include <stdlib.h>
const int Accommodation = 500;

int main(){
    float foodExpenses;
    float leisureExpenses;
    float clothesExpenses;
    float travelExpenses;
    float totalSpent;


printf(" Enter food expenses: $");
fgets(" %f" , &foodExpenses); 
if (foodExpenses < 0) {
    printf("Invalid! Cannot be negative.\n");
    return 1; 
}
printf(" Enter Leisure Expenses: $");
fgets(" %f" , &leisureExpenses);
if (leisureExpenses < 0) {
    printf("Invalid! Cannot be negative.\n");
    return 1; 
}
printf(" Enter Clothes Expenses: $");
fgets(" %f" , &clothesExpenses);
if (clothesExpenses < 0) {
    printf("Invalid! Cannot be negative.\n");
    return 1; 
}
printf(" Enter Travel Expenses: $");
fgets(" %f" , &travelExpenses);
if (travelExpenses < 0) {
    printf("Invalid! Cannot be negative.\n");
    return 1; 
}
totalSpent = foodExpenses + leisureExpenses + clothesExpenses + travelExpenses + Accommodation;
fgets("Total monthly expenditure is: $%.2f\n", totalSpent);
return 0;
}
