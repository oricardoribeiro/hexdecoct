#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int num;
	int c, k;

	if (argc != 2)
	{
		printf("\nHexdecoct 0.01 (https://www.orr.eti.br/)");
		printf("\nUsage: hexdecoct [decimal number]\n\n");
		return 0;
	}
	else
	{
		num = atoi(argv[1]);

		printf("\nHexdecoct v0.01\n\n", num);
		printf("Decimal value = %d\n", num);
		printf("Octal value = %o\n", num);
		printf("Hexadecimal value = %X\n", num);
		printf("Binary = ");

		for (c = 31; c >= 0; c--)
		{
			k = num >> c;

			if (k & 1)
				printf("1");
			else
				printf("0");
		}

		printf("\n\n");
	}

	return 0;
}
