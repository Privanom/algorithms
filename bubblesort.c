#include <stdio.h>

int main()
{
    int *yarr[] = {
        '3', 
        '9', 
        '4', 
        '8', 
        '7', 
        '6',
        '1',
        '2', 
        '0', 
        '10'
    };
   
    //Swaps yarr[0] and yarr[1] 
    if(yarr[0] < yarr[1])
    {
        const int yarr_0 = yarr[0];
        yarr[0] = yarr[1];
        yarr[1] = yarr_0;
    }
    
    if(yarr[2] < yarr[3])
    {
        const int yarr_2 = yarr[2];
        yarr[2] = yarr[3];
        yarr[3] = yarr_2;
    }
    
    if(yarr[3] < yarr[4])
    {
        const int yarr_3 = yarr[3];
        yarr[3] = yarr[4];
        yarr[4] = yarr_3;
    }
    
    if(yarr[4] < yarr[5])
    {
        const int yarr_4 = yarr[4];
        yarr[4] = yarr[5];
        yarr[5] = yarr_4;
    }
    
    if(yarr[5] < yarr[6])
    {
        const int yarr_5 = yarr[5];
        yarr[5] = yarr[6];
        yarr[6] = yarr_5;
    }
    
    if(yarr[6] < yarr[7])
    {
        const int yarr_6 = yarr[6];
        yarr[6] = yarr[7];
        yarr[7] = yarr_6;
    }
    
    if(yarr[7] < yarr[8])
    {
        const int yarr_7 = yarr[7];
        yarr[7] = yarr[8];
        yarr[8] = yarr_7;
    }
    
    if(yarr[8] < yarr[9])
    {
        const int yarr_8 = yarr[8];
        yarr[8] = yarr[9];
        yarr[9] = yarr_8;
    }
    
    printf("%d\n", yarr[0]);
    printf("%d\n", yarr[1]);
    printf("%d\n", yarr[2]);
    printf("%d\n", yarr[3]);
    printf("%d\n", yarr[4]);
    printf("%d\n", yarr[5]);
    printf("%d\n", yarr[6]);
    printf("%d\n", yarr[7]);
    printf("%d\n", yarr[8]);
    printf("%d\n", yarr[9]);
}
