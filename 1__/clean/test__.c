#include <stdio.h>

#include <string.h>



int main(void)

{

	char a[10] = "choi";

	char b[10] = "kim";



	for (int i = 0; i < 10; ++i)

		printf("%d ", a[i]);

	putchar('\n');



	for (int i = 0; i < 10; ++i)

		printf("%d ", b[i]);

	putchar('\n');



	strcpy(a, b);



	for (int i = 0; i < 10; ++i)

		printf("%d ", a[i]);

	putchar('\n');



	printf("%s\n", a);



	return 0;

}

