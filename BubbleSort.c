// #include <stdio.h>

// void swap(int* x, int* y)
// {
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }

// void bubble_sort(int arr[], int n)
// {
//     int i, j;
//     for (i = 0; i < n - 1; i++) {
//         for (j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 swap(&arr[j], &arr[j + 1]);
//             }
//         }
//     }
// }

// int main()
// {
//     int arr[5] = {20,10,50,40,30};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     printf("\nInput Array: \n");
//     for (int i = 0; i < n; i++)
//         printf("%d ", arr[i]);
        
//     bubble_sort(arr, n);

//     printf("\nSorted Array: \n");
//     for (int i = 0; i < n; i++)
//         printf("%d ", arr[i]);

//     return 0;
// }




#include <stdio.h>
int main()
{   int arr[50],temp,n,index,i,j,k;
    printf("enter number of elements you want in array. \n");
    scanf("%d",&n);

    printf("enter array elements \n");
    for(i=0;i<n;++i){
    scanf("%d",&arr[i]);}

    for(i=0;i<n;++i)
    { for(j=0;j<(n-1)-i;++j)
        {if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    printf("the sorted array is as below:-- ");
    for(k=0;k<n;k++)
    {    printf("%d ",arr[k]);
    }
    return 0;
}