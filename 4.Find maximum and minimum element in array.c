#include <stdio.h> 
#define MAX_SIZE 100 
int main() 
{  
int ghora[MAX_SIZE]; 
 int i, max, min, s; 
 printf("Enter size of the array: "); 
 scanf("%d", &s); 
 printf("Enter elements in the array: "); 
 for(i=0; i<s; i++)
 { 
 scanf("%d", &ghora[i]); 
 }
 max = ghora[0]; 
 min = ghora[0]; 
 for(i=1; i<s; i++)  
 {  
 if(ghora[i] > max)  {max = ghora[i]; 
 } 
 if(ghora[i] < min)  {  min = ghora[i]; 
 } 
 } 
 printf("Maximum element = %d\n", max); 
 printf("Minimum element = %d", min); 
 return 0; 
}