#include <stdio.h>

void printarr(int arr[],int n)
{
    printf("Elements are\n");
     for(int i=0;i<n;i++)
        {
	      printf("%d \n",arr[i]);
	    }

}


int main()
{
   int arr[100];
    int i, n;

       printf("Enter limit of the array: ");
       scanf("%d",&n);

       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
        {
	      printf("Enter element %d: ",i+1);
	      scanf("%d",&arr[i]);
	    }

   printarr(arr,n);
   return 0;
}
