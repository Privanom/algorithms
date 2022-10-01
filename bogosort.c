#include <stdio.h>
#include <stdlib.h>

int is_sorted(int *arr, int len);
void randomize_elements(int *arr, int len);
void bogosort(int *arr, int len);



int main()
{
    int arr[3] = {5, 8, 3};

    int arr_len = 3;

    bogosort(arr, arr_len);

    for(int i = 0; i < arr_len; i++){
        printf("%d\n", arr[i]);
    }
}

int is_sorted(int *arr, int len)
{

    //running through the array and checking if the elements are in the correct order
    while(--len >= 1){
        if(arr[len] < arr[len - 1]){ //the < could be switched to a > for a decreasing implementation
            return 0;
        }
    }


    return 1;
}

void randomize_elements(int *arr, int len)
{
    int temp1, temp2;

    for(int i = 0; i < len; i++){
        temp1 = arr[i];
        temp2 = rand() % len;

        //exchanging two random values from within the array
        arr[i] = arr[temp2];
        arr[temp2] = temp1;
    }
}

void bogosort(int *arr, int len)
{
    while(is_sorted(arr, len) == 0){
        randomize_elements(arr, len);
    }

}
