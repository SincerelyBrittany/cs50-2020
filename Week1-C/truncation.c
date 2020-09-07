#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //get a numbers from user
    int x = get_int("x: ");
    int y = get_int("y: ");

    //Divide x by y
    float z = x/y;
    printf("%f\n", z);
}

//make truncation
// ./truncation
