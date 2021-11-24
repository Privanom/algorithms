#include <stdio.h>

int main()
{
    int yarr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int element;
    int mid = sizeof(yarr) % 2;
    int left = (int)yarr / 2 - mid;
    int right = yarr - left;
    extern int i;
    
    int searchend()
    {
        return i;
    }
    
    printf("Binary search:~$ ");
    scanf("%d", &element);
    
    if(element == mid)
    printf("%d", &mid);
    
    else if(element != yarr[right])
    {
        for(i = 0; i < left; i++)
        {
            if(element == i)
            {
            //Does this so that it doesn't print multiple times
            searchend(i);
            i = element;
            }
        }
    }
};
