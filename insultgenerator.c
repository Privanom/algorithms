//WARNING: This file is very vulgar.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int *insult1 = 
    {
        "Fucking",
        "Bitching",
        "Stupid",
        "Dumb"
    };
    
    int *insult2 = 
    {
        "Idiot",
        "Moron",
        "Jizzbag",
        "Douchebag"
    };
    
    srand(time(rand));
    
    int k = rand() % 4;
    
    printf("%d %d", insult1[k], insult2[k]);
}
