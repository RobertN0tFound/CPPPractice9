// Действие: определение позиции начала в строке s слова с номером n.
// Разделителем будем считать: ' ', ',', '.'
#include <iostream>
#include <stdio.h>

int main()
{
    char str[1000];
    int i, f, e;
    int j = 0;
    bool d = true;

    setlocale(LC_ALL, "Russian");
    printf("\nВведите строку >> ");
    gets_s(str, 1000);
    printf("\nВведите номер элемента массива >> ");
    scanf_s("%d", &f);
    if ((f > 1000) || (f < 0))
    {
        printf("\nERROR");
    }
    for (i = 0; i < strlen(str); i++)
    {
        if ((str[i] == ' ') || (str[i] == ',') || (str[i] == '.'))
        {
            d = true;
        }
        else
        {
            if (d)
            {
                j++;
                d = false;
            }
        }
    }
}
