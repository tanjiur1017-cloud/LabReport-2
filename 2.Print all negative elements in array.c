#include <stdio.h> 
#define MAX_SIZE 100 
int main() 
{  
 int hati[MAX_SIZE]; 
 int i, n; 
 printf("Enter size of the array : "); 
 scanf("%d", &n); 
 printf("Enter elements in array : "); 
 for(i=0; i<n; i++)  
 {
   scanf("%d", &hati[i]); 
 }
   printf("\nAll negative elements in array are : "); 
 for(i=0; i<n; i++)  {  if(hati[i] < 0) 
  {
    printf("%d\t", hati[i]); 
 } 
  }  return 0; 
}