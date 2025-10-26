#include <stdio.h>
int main() {
 int hati[100], ghora, i, item, found = 0;
printf("Enter number of elements: ");
scanf("%d", &ghora);
printf("Enter %d elements:\n", ghora);
 for (i = 0; i < ghora; i++) {
scanf("%d", &hati[i]);
}
printf("Enter the element to search: ");
scanf("%d", &item);
 for (i = 0; i < ghora; i++) {
 if (hati[i] == item) {
printf("Element found at position %d\n", i + 1);
 found = 1;
 break;
 }
 }
if (!found) {
printf("Element not found in the array.\n");
 }
 return 0;
}