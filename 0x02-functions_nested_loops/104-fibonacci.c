#include <stdio.h>
#include <stdlib.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int a, b, c, i;

	a = 0;
	b = 1;

	for (i = 0; i < 45; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%d, ", c);
	}
	printf("2971215073, 4807526976, 7778742049, 12586269025, 20365011074, 32951280099\
			, 53316291173, 86267571272, 139583862445, 225851433717, 365435296162, 591286729879\
			, 956722026041, 1548008755920, 2504730781961, 4052739537881, 6557470319842, 10610209857723\
			, 17167680177565, 27777890035288, 44945570212853, 72723460248141, 117669030460994\
			, 190392490709135, 308061521170129, 498454011879264, 806515533049393, 1304969544928657\
			, 2111485077978050, 3416454622906707, 5527939700884757, 8944394323791464, 14472334024676221\
			, 23416728348467685, 37889062373143906, 61305790721611591, 99194853094755497, 160500643816367088\
			, 259695496911122585, 420196140727489673, 679891637638612258, 1100087778366101931\
			, 1779979416004714189, 2880067194370816120, 4660046610375530309, 7540113804746346429\
			, -6246583658587674878, 1293530146158671551, -4953053512429003327, -3659523366270331776\
			, -8612576878699335103, 6174643828739884737, -2437933049959450366\n");
	return (0);
}