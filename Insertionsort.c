#include <stdio.h>

void insertionsort(int a[], int n)
{
    int j,temp;
    for(int k=1;k<n-1;k++)
    {
        temp=a[k];
        j=k-1;
        while(temp<a[j] && (j>=0))
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
}
void printArray(int a[], int size)
{
    int i;
    for (i=0; i <size; i++)
        printf("%d ", a[i]);
}
int main()
{
    int a[]={2,3,5,23,1,65};
    int n = sizeof(a)/sizeof(a[0]);
    printf("Sorted array");
    printArray(a,n);

    return 0;
}
