#include <stdio.h>

int main()
{
    int arr[100], n = 0, i, choice;
    int element, found;
    int largest, smallest, sum;

    do
    {
        printf("\n===== ARRAY OPERATIONS MENU =====\n");
        printf("1. Insert Elements\n");
        printf("2. Display Array\n");
        printf("3. Find Largest Element\n");
        printf("4. Find Smallest Element\n");
        printf("5. Find Sum of Elements\n");
        printf("6. Search an Element\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter number of elements: ");
                scanf("%d", &n);

                printf("Enter %d elements:\n", n);
                for(i = 0; i < n; i++)
                {
                    scanf("%d", &arr[i]);
                }
                break;

            case 2:
                printf("Array Elements: ");
                for(i = 0; i < n; i++)
                {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 3:
                largest = arr[0];
                for(i = 1; i < n; i++)
                {
                    if(arr[i] > largest)
                        largest = arr[i];
                }
                printf("Largest Element = %d\n", largest);
                break;

            case 4:
                smallest = arr[0];
                for(i = 1; i < n; i++)
                {
                    if(arr[i] < smallest)
                        smallest = arr[i];
                }
                printf("Smallest Element = %d\n", smallest);
                break;

            case 5:
                sum = 0;
                for(i = 0; i < n; i++)
                {
                    sum += arr[i];
                }
                printf("Sum of Elements = %d\n", sum);
                break;

            case 6:
                printf("Enter element to search: ");
                scanf("%d", &element);

                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(arr[i] == element)
                    {
                        printf("Element found at position %d\n", i + 1);
                        found = 1;
                        break;
                    }
                }

                if(!found)
                    printf("Element not found.\n");
                break;

            case 7:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 7);

    return 0;
}-