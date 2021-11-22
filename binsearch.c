/*credit to the-algorithms.com, but there were WAY too many comments in the binary search code so i ed- 
ited a better version.*/
#include <stdio.h>
#include <assert.h>

int binarysearch1(const int *arr, int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarysearch1(arr, l, mid - 1, x);

        
        return binarysearch1(arr, mid + 1, r, x);
    }

  return -1;
}


int binarysearch2(const int *arr, int l, int r, int x)
{
    int mid = l + (r - l) / 2;

    while (arr[mid] != x)
    {
        if (r <= l || r < 0)
            return -1;

        if (arr[mid] > x)
        r = mid - 1;
    }
        else
    {
      l = mid + 1;
      mid = l + (r - l) / 2;
    }


    return mid;
}

void test()
{
   int arr[] = {2, 3, 4, 10, 40};
   int n = sizeof(arr) / sizeof(arr[0]);

    printf("Test 1.... ");
    int x = 10;

    int result = binarysearch1(arr, 0, n - 1, x);
    assert(result == 3);
    printf("passed recursive... ");
    
    result = binarysearch2(arr, 0, n - 1, x);
    assert(result == 3);
    printf("passed iterative...\n");

    printf("Test 2.... ");
    x = 5;
    
    result = binarysearch1(arr, 0, n - 1, x);
    assert(result == -1);
    printf("passed recursive... ");
    result = binarysearch2(arr, 0, n - 1, x);
    assert(result == -1);
    printf("passed iterative...\n");
}

int main()
{
    test();
    return 0;
}
