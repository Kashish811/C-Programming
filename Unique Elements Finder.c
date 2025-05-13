#include <stdio.h>
#define SIZE 10

int main()
{
    int arr[SIZE];
    int uniqueArr[SIZE];
    int i, j, k = 0;
    int isUnique;

    for(i = 0; i < SIZE; i++)
    {
        printf("Enter element-%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < SIZE; i++)
    {
        isUnique = 1; 
        for(j = 0; j < SIZE; j++)
        {
            if(i != j && arr[i] == arr[j])
            {
                isUnique = 0;
                break;
            }
        }

        if(isUnique)
        {
            uniqueArr[k++] = arr[i];  
        }
    }

    printf("\nArray having Only Unique Elements:\n");
    for(i = 0; i < k; i++)
    {
        printf("%d ", uniqueArr[i]);
    }

    printf("\nThe number of unique elements = %d\n", k);

    return 0;
}

