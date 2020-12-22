//WAP FIND SUM OF ALL ELEMENTS OF AN ARRAY
#include <stdio.h>

void main()
{
    int a[100];
    int i, limit, sum=0;

       printf("Enter limit of the array: ");
       scanf("%d",&limit);

       printf("Input %d elements in the array :\n",limit);
       for(i=0;i<limit;i++)
        {
	      printf("Enter element %d: ",i+1);
	      scanf("%d",&a[i]);
	    }

    for(i=0; i<limit; i++)
    {
        sum += a[i];
    }

    printf("Sum of all elements stored in the array is : %d\n\n", sum);
}
