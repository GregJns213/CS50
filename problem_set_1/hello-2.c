#include <stdio.h>// Standard libraries
#include <cs50.h>

int main(void)
{
    printf("State your name: ");
    string name = GetString();
    printf("hello, %s\n", name);  
}
