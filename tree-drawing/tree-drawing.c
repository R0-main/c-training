#include <stdio.h>

void ft_putchar(char c);

int main(void)
{

    int rows;
    int i;
    int y;

    printf("How many rows ? ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++)
    {
        for (y = 0; y < rows - i - 1; y++)
            ft_putchar(' ');

        for (y = 0; y < i * 2 + 1; y++)
            ft_putchar('*');

        printf("\n");
    }
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}
