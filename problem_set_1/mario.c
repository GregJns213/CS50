#include <stdio.h>
#include <cs50.h>

int main (void)
{
    printf("Please give me the height of your blocks: ");
    int x = GetInt();
    
    if (x > 23)
    {
        printf("That number was over 23! Please give me a non-negative number less than or equal to 23: "); 
    }
    
    else if (x <= 23)
    {
        printf("Height: %i\n", x);
    }
}
