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
    
    for(int i = 0; i < sizeof(yarr); i++)
    {
        int a = 0;
        a++;
        int b = 1;
        b++;
        
        if(b || a == sizeof(yarr))
        {
            a = sizeof(yarr) - 1;
            b = sizeof(yarr);
        }
        
        do
        {
            if(yarr[a] < yarr[b])
            {
                const int yarr_a = yarr[a];
                yarr[b] = yarr_a;
                yarr[a] = yarr[b];
            }
        } while(b < sizeof(yarr));
        
        printf("%d\n%d", &yarr[a], yarr[b]);
    }
}
