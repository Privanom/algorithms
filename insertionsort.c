#include <stdio.h>

int main()
{
    int *unsorted[] = {5, 6, 4, 3, 9};
    int *sorted[5];
    do
    {
        int a = 0;
        a++;
        int b = 0;
        b++;
        
        if(unsorted[a] < unsorted[b])
        {
            sorted[a] = unsorted[a];
        }
    } while(sizeof(sorted) != sizeof(unsorted));
}
