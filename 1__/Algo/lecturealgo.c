#include <stdio.h>
#include <string.h>

typedef char Preference [5][20]; //��ȣ ������ Ű���带 ���� �迭


int main(void)
{
    Preference list;

	printf("�������� ��� ���� Ű���带 5�� �Է��ϼ���.\n");
	for(int i = 0; i<5; i++)
    {
        printf("Ű���� %d : ", i+1);
        scanf("%s", list[i]);
        printf("%s\n", list[i]);
    }

	printf("�Է��� Ű���� : %s %s %s %s %s", list[0], list[1], list[2], list[3], list[4]);
}