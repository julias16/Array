#include <stdio.h>
int main ()
{
    int arr[50];
    int pos, i, num;
    printf ("Enter the number of elements in an array: ");
    scanf ("%d", &num);

    for (i = 0; i < num; i++ )
    {
        scanf ("%d", &arr[i]);
    }

    printf("Define the position of the array element where you want to delete: ");
    scanf ("%d", &pos);

    // check whether the deletion is possible or not
    if (pos >= num+1)
    {
        printf (" \n Deletion is not possible in the array.");
    }
    else
    {
        // use for loop to delete the element and update the index
        for (i= pos-1; i< num -1; i++)
        {
            arr[i] = arr[i+1]; // assign arr[i+1] to arr[i]
        }

        printf ("The resultant array is: ");

        // display the final array
        for (i= 0; i< num-1; i++)
        {
            printf ("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}
