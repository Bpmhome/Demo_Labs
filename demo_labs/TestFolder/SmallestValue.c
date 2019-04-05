//Input numbers into an array and then find which one is the smallest
//Make an array
//make a loop that'll run through until the end of the array
//probably make a loop inside the other loop to check through the numbers and probably "Bubble sort"
//break out of the loops
//print the smallest number input
#include<stdio.h>
int main()
{
  int a[10], Size, i, Smallest, Position;
  
  printf("\nPlease Enter the size of an array \n");
  scanf("%d",&Size);

  printf("\nPlease Enter %d elements of an array: \n", Size);
  for(i=0; i<Size; i++)
   {
   	 scanf("%d",&a[i]);
   }   

  Smallest = a[0];
  for(i=1; i<Size; i++)
   {
    if(Smallest > a[i])
     {
       Smallest = a[i];
       Position = i;
	 }   
   }
  
  printf("\nSmallest element in an Array = %d", Smallest);
  printf("\nIndex position of the Smallest element = %d", Position);
  
  return 0;
}