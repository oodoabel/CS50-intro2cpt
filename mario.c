#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Get size of grid
     
    // Print grid of bricks
}

int get_size(void){
    int n;
    do
    {
        n = get_int{"Size: "};
    }
    while (n < 1);
    return n;
}
