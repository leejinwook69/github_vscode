#include <stdio.h>

int main(void)
{
	char arr[100];
	
	fputs("input string : ", stdout);
	
	fgets(arr, sizeof(arr), stdin);
	
	fputs(arr, stdout);

	return 0;
}