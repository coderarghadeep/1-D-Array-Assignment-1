#include<stdio.h>
void remo(int a[],int *n);
int main()
{
    int a[100],n,i;
    printf("enter the array rlements: ");
    scanf("%d",&n);
    printf("enter the numbers: ");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=");
        scanf("%d",&a[i]);
    }
    remo(a,&n);
    printf("after deletion:");
    for(i=0;i<n;i++)
    {
        printf("%3d",a[i]);
    }
    return 0;
}
void remo(int a[],int *n)
{
    int i,j,k;
    for(i=0;i<*n;i++)
    {
        for(j=i+1;j<*n;j++)
        {
            if (a[i]==a[j])
            {
                for(k=j;k<*n;k++)
                {
                    a[k]=a[k+1];
                }
                --*n;
                j--;
            }
        }
    }
}