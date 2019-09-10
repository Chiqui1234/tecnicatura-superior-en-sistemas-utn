#include <stdio.h>

int main()
{
    int total = 0, i = 0, recordMin, recordMax;
    int input;
        
        printf("Insertá un número: ");
        scanf("%d", &input);
        recordMax = input;
        recordMin = input;
        if(input != 0)
            i++;
            total += input;

    while(input != 0)
    {
        if(input > recordMax)
            recordMax = input;
        if(input < recordMin)
            recordMin = input;
        
        total += input;
        i++;

        printf("Insertá un número: ");
        scanf("%d", &input);
    }

    printf("El número más grande es %i\n", recordMax);
    printf("El número más chico es %i\n", recordMin);

    i != 0?printf("El promedio es %d\n", total/i):0;
}