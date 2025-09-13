#include <stdio.h>
#include <locale.h>

void date()
{
    puts("   **********************************************");
    puts("   *                                            *");
    puts("   *      _    _     _  _    _  __              *");
    puts("   *       |  | |   /| /|   | |   |             *");
    puts("   *      /_  |_|.   |  |.  |_|   |             *");
    puts("   *                                            *");
    puts("   *                                            *");
    puts("   **********************************************");
    getchar();
}

void main()
{
    setlocale(LC_CTYPE, "RUS");
    date();
    return 0;
}