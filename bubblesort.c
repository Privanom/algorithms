#include <stdio.h>

int main()
{
    int yarr[] = 
    {
        '5',
        '3',
        '6',
        '8',
        '4',
        '0',
        '7',
        '2',
        '10',
        '9'
    };
    
    
    int len = sizeof(yarr) / sizeof(yarr[0]);
    
    for(int i = 0; i < len; i++)
    {
        int a = 0;
        a++;
        int b = 1;
        b++;
        
        if(b || a == len)
        {
            a = len - 1;
            b = len;
        }
        
        do
        {
            if(yarr[a] < yarr[b])
            {
                const int yarr_a = yarr[a];
                yarr[b] = yarr_a;
                yarr[a] = yarr[b];
            }
        } while(b < len);
        
        printf("%d\n%d", &yarr[a], yarr[b]);
    }
}
