#include <stdio.h>
void swap(int *x,int *y)
{
    int temp = *x;
    *x=*y;
    *y=temp;
}
void bubblesort(int a[], int n)
{
    //int n = a.length;
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<n-1;j++)
            if(a[j]>a[j+1]){
                // int temp = *a[j];
                // *a[j] = *a[j-1];
                // *a[j-1] = temp;
                swap(&a[j],&a[j+1]);
    }
}
    //void bubblesort(int a[], int n)
 void main()
 {
     int a[] = {4,7,2,40};
     int i;
     int n = sizeof(a) / sizeof(a[0]);

     printf("Array before sort");
     for(i=0;i<n;i++){
         printf("%d",a[i]);
     }
     bubblesort(a,n);
     printf("Array after sorting");
     for(i=0;i<n;i++){
         printf("%d",a[i]);
     }
 }

