#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");

    char str[200];

    printf("Введите строку: ");
    fgets(str, sizeof(str), stdin);

    // Удаление символа переноса строки
    str[strcspn(str, "\n")] = '\0';

    // Проверка последнего символа
    int length = (int)strlen(str);

    if (length > 0 && str[length - 1] != '.')
    {
        strcat(str, ".");
    }

    printf("Результат: %s\n", str);

    return 0;
}
