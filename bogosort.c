#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* yarr[] = {5, 8, 3, 9, 1};
int(srand(time(NULL)));

int bogosort(yarr)
{
    int i, i1;
    
    //Exists for i1 value
    for(i1 = 1; i < sizeof(yarr); i++)
    {
    static;
    }
    
    for(int i = 0; i < sizeof(yarr); i++)
    {
        //I couldn't do yarr[i] or yarr[i1], so i did math
            do
            {
            int random_shuffle = rand() % yarr-yarr+i + yarr-yarr+i1;
            } while(yarr-yarr+i < yarr-yarr+i1);
    }
}

int main()
{
    int* avar = {100, 370, 902};
    bogosort(avar);
    return 0;
}
