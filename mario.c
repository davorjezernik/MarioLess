#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n; //n stands for height
    int i; //i stands for row
    int c; //c stands for collum
    int space; //space is here for reversing the triangle
    do
    {
        //Taking user inputt
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
    for (i = 0 ; i < n ; i++)
    {
        for (space = 0; space < n - i - 1; space++)
        {
            printf(" ");
        }
        for (c = 0 ; c <= i ; c++)
        {
            printf("#");
        }
        printf("\n");
    }


}