#include <stdio.h>
int main()
{
	int arr[5];
	printf("Total size of array : %d \n", sizeof(arr));
	printf("Array element size : %d \n", sizeof(arr[0]));
	printf("Length of Array : %d \n", sizeof(arr)/sizeof(arr[0]));
    return 0;
}

