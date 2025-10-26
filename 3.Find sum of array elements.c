#include <stdio.h> 
#define MAX_SIZE 100  
int main() 
{  
 int ghora[MAX_SIZE]; 
 int i, n, s=0; 
  printf("Enter size of the array: "); 
 scanf("%d", &n); 
 printf("Enter %d elements in the array: ", n); 
 for(i=0; i<n; i++)  
 {  
 scanf("%d", &ghora[i]); 
 }  
 for(i=0; i<n; i++)  
 { 
  s = s + ghora[i]; 
 }
   printf("Sum of all elements of array = %d", s); 
 return 0; 
}