#include <stdio.h>
#include <stdlib.h>

/*
 * Copyright (c) 2021 All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 3,
 * as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Authors:
 *   Onildo R. Ribeiro		<oricardoribeiro.sa@gmail.com>
 */

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
