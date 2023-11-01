#include <stdio.h>
int secondsmall(int array[], int sizeofarray)
{
    int min=0;
    int min1=0;
    for(int i=0; i<sizeofarray; i++)
    { 
        if(array[i] < min)
       {
         min1 = min;
         min = array[i];
       }
       else if(array[i] < min1 && array[i] != min)   
       {
         min1 = array[i];
       }
    }
   return min1;             
}

    int secondlarge(int array[], int sizeofarray)
{
    int max=0;
    int max1=0;
    for(int i=0; i<sizeofarray; i++)
    { 
         if(array[i] < max)
       {
         max1 = max;
         max = array[i];
       }
       else if(array[i] > max1 && array[i] != max)   
       {
         max1 = array[i];
       }
    }
   return max1;
}     
int main()
{
  int array1[]={14,64,97,15,11,10,98,69};
  int S=secondsmall(array1,8);
  printf("The second smallest element is %d",S);
  int L=secondlarge(array1,8);
  printf("The second largest element is %d",L);
  return 0;
}