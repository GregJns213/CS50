#include <stdio.h>
#include <cs50.h>

int main (void)
{
    printf("height: ");
    int x = GetInt();
    
    int y;
    for (y = 0; y <= x ; y++)
    {
         int z;
         for (z = 0; z <= x ; z++)
        {
            printf("#");
        }
        printf("\n");
     }
}
