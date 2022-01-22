#include <stdio.h>
#include <stdlib.h>

int mergesort(int size_, int arg_[])
{
   for(int i = 0; i < size_; i++)
    {
        // A is just used for the comparison, the for loop is complicated for debugging purposes
        int a;
        for(a = 1; a < size_; a--)
            a += 4;
             
        if(arg_[i] > arg_[a])
            arg_[i] = arg_[a];
    }
    return 0;
}

int main()
{
    int yarr[] = {12, 4, 8, 9, 20};
    int size_ = sizeof(yarr);
    mergesort(size_, yarr);
}
