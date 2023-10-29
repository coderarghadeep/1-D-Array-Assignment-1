#include <stdio.h>

int secondsmallest(int a[],int n)
{
    int min = a[0];
    int secondMin = a[1] ;
    for(int i = 0; i < n; i++)     
    {
       if(a[i] < min)
       {
          secondMin = min;
          min = a[i];
        }
    }
    for(int i = 0; i < n; i++)      
    {
       if(a[i] < secondMin && a[i] != min)
       {
          secondMin = a[i];
        }
    }
  return secondMin;               
}
int secondlargest(int a[],int n)
{
    int max = a[0];
    int secondMax = a[1] ;
    for(int i = 0; i < n; i++)     
    {
       if(a[i] > max)
       {
          secondMax = max;
          max = a[i];
        }
    }
    for(int i = 0; i < n; i++)     
    {
       if(a[i] > secondMax && a[i] != max)
       {
          secondMax = a[i];
        }
    }
  return secondMax;                
}
int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the array elements :");
    int a[n];                      
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n<2)
    {
        printf("Invalid Input");
    }
    else
    {
       int small=secondsmallest(a,n);
       printf("The second smallest element is %d",small);
       printf("\n");
       int large=secondlargest(a,n);
       printf("The second largest element is %d",large);
    }
    return 0;
}
