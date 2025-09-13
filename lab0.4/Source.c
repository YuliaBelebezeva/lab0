#include <stdio.h>
#include <locale.h> 

void name()
{
	setlocale(LC_CTYPE, "RUS");
	puts("                        **********************************************");
	puts("                        *                                            *");
	puts("                        * Тема: Разработка консольного приложения    *");
	puts("                        *                                            *");
	puts("                        *       Выполнила: Белебезьева Ю.Е.          *");
	puts("                        *                                            *");
	puts("                        *            Группа: бИД - 251               *");
	puts("                        *                                            *");
	puts("                        **********************************************");
	return 0;
}

void date()
{
	puts("                        **********************************************");
	puts("                        *                                            *");
	puts("                        *      _    _     _  _    _  __              *");
	puts("                        *       |  | |   /| /|   | |   |             *");
	puts("                        *      /_  |_|.   |  |.  |_|   |             *");
	puts("                        *                                            *");
	puts("                        *                                            *");
	puts("                        **********************************************");
	getchar();
}

int main()
{
	setlocale(LC_CTYPE, "RUS");
	getchar();
	name();
	getchar();
	date();

	return 0;
}