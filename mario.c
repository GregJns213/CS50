#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int user_input;
    do
    {
        printf("Height: ");
        user_input = GetInt();    
    }  
    while (user_input <= 0 && user_input >= 23);
    // This function takes the user input and checks it aganst parameters
    
    int height;
    int width;
    for (height = 0; height < user_input; height++)
    {
        for (width = 0; width < user_input; width++)
        {
            printf("#");
        }
        
        printf("\n");
    }
}
