#include <stdio.h>

void bubble_sort(int arr[], int len) 
{
    // arr[]: The array to sort; len: The length of the array
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				// Swap arr[j] and arr[j + 1]
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main(void) 
{
void bubble_sort(int arr[], int len) {
    // arr[]: The array to sort; len: The length of the array
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				// Swap arr[j] and arr[j + 1]
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

int yarr[] = {
		3, 
		9, 
		4, 
		8, 
		7, 
		6,
		1,
		2, 
		0,
		10
	};

    // Sort yarr
	bubble_sort(yarr, 10);
    
       // Prints the elements of yarr
	for (int i = 0; i < 10; i++)
		printf("%d\n", yarr[i]);

	return 0;
	
}

	};

    // Sort yarr
	bubble_sort(yarr, 10);
    
       // Prints the elements of yarr
	for (int i = 0; i < 10; i++)
		printf("%d\n", yarr[i]);

	return 0;
}
