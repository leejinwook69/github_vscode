//���� : �޸��� ���� �� ���ڵ��� ANSI�� �ؾ� �ѱ��� �ȱ����ϴ�.

#include <stdio.h>
#include <string.h>
#define MAX_LEN 100

typedef struct Lecture
{
	char name[MAX_LEN]; //���Ǹ�
	char lec_number[MAX_LEN]; //�м���ȣ
	char lec_room[MAX_LEN]; //���ǽ�
	int credit; //����
	int start_time; //���۽ð� //���� [��1,2 ȭ3,4]�� ��� 103���� ǥ��
	int end_time; //����ð� //���� [��1,2 ȭ3,4]�� ��� 204���� ǥ��
	int week; //����, ������(1) ~ �ݿ���(5)
} Lecture;

//�ڷῡ�� n��°�� ���� �ڷ��� ������ ��� ����ü�� ��ȯ(idx = 0, 1, ...)
Lecture lec_search(int idx)
{
	int line = 2 + (idx * 32); //0��°�ٺ��� �����ϰ�, �޸��忡�� idx��°�� ������ ��� ����ü�� ���� ����
	Lecture temp; //���� ����ü
	FILE* data = fopen("������.txt", "r");
	char str[100];
	//�޸��忡�� idx��°�� �ڷᰡ ���۵Ǵ� �ٷ� �̵�
	for (int i = 0; i < line; i++) 
	{
		fgets(str, MAX_LEN, data);
	}
	char temp_char[MAX_LEN] = "";
	//�ڷ� ���� ����
	do 
	{
		fgets(str, MAX_LEN, data);
		if(strstr(str, "SBJ_NM") != NULL)
		{
			//���Ǹ�
			strcpy(temp_char, strstr(str, ": \"") + 3);
			temp_char[strlen(temp_char) - 3] = NULL;
			strcpy(temp.name, temp_char);
			
		}
		else if (strstr(str, "SBJ_NO") != NULL)
		{
			//�м���ȣ
			strcpy(temp_char, strstr(str, ": \"") + 3);
			temp_char[strlen(temp_char) - 3] = NULL;
			strcpy(temp.lec_number, temp_char);
		}
		else if (strstr(str, "LECT_TIME_ROOM") != NULL)
		{
			//���ǽ�
			strcpy(temp_char, strstr(str, ": \"") + 3);
			temp_char[strlen(temp_char) - 3] = NULL;
			strcpy(temp.lec_room, temp_char);

			//���۽ð�
			strcpy(temp_char, strstr(str, ": \"") + 5);
			temp.start_time = 0;
			if ((temp_char[1] == ',')||(temp_char[1] == '('))
			{
				temp_char[1] = NULL;
			}
			else
			{
				temp_char[2] = NULL;
			}
			if (strlen(temp_char) == 1)
			{
				temp.start_time = (int)(temp_char[0] - '0') * 100;
			}
			else
			{
				temp.start_time = (int)(temp_char[0] - '0') * 1000 + (int)(temp_char[1] - '0')* 100;
			}
			//���۽ð��� 2���� ���
			strcpy(temp_char, strstr(str, "(") + 2);
			if (strstr(temp_char, "(") != NULL)
			{
				strcpy(temp_char, strstr(str, ")") + 4);
				if ((temp_char[1] == ',') || (temp_char[1] == '('))
				{
					temp_char[1] = NULL;
				}
				else
				{
					temp_char[2] = NULL;
				}
				if (strlen(temp_char) == 1)
				{
					temp.start_time += (int)(temp_char[0] - '0');
				}
				else
				{
					temp.start_time += (int)(temp_char[0] - '0') * 10 + (int)(temp_char[1] - '0');
				}
			}
			
			//����ð�
			temp.end_time = 0;
			strcpy(temp_char, strstr(str, "(") - 2);
			if (((int)(temp_char[0] - '0') < 0) || ((int)(temp_char[0] - '0') > 10))
			{
				strcpy(temp_char, temp_char + 1);
			}
			if (temp_char[1] == '(')
			{
				temp_char[1] = NULL;
			}
			else
			{
				temp_char[2] = NULL;
			}
			if (strlen(temp_char) == 1)
			{
				temp.end_time = (int)(temp_char[0] - '0') * 100;
			}
			else
			{
				temp.end_time = (int)(temp_char[0] - '0') * 1000 + (int)(temp_char[1] - '0') * 100;
			}
			//����ð��� 2���� ���
			strcpy(temp_char, strstr(str, "(") + 2);
			if (strstr(temp_char, "(") != NULL)
			{
				strcpy(temp_char, strstr(temp_char, "(") - 2);
				if (((int)(temp_char[0] - '0') < 0) || ((int)(temp_char[0] - '0') > 10))
				{
					strcpy(temp_char, temp_char + 1);
				}
				if (temp_char[1] == '(')
				{
					temp_char[1] = NULL;
				}
				else
				{
					temp_char[2] = NULL;
				}
				if (strlen(temp_char) == 1)
				{
					temp.end_time += (int)(temp_char[0] - '0');
				}
				else
				{
					temp.end_time += (int)(temp_char[0] - '0') * 10 + (int)(temp_char[1] - '0');
				}
			}

			//����
			temp.week = 0;
			strcpy(temp_char, strstr(str, ": \"") + 3);
			if (strstr(temp_char, "��") != NULL)
			{
				temp.week *= 10;
				temp.week += 1;
			}
			if (strstr(temp_char, "ȭ") != NULL)
			{
				temp.week *= 10;
				temp.week += 2;
			}
			if (strstr(temp_char, "��") != NULL)
			{
				temp.week *= 10;
				temp.week += 3;
			}
			if (strstr(temp_char, "��") != NULL)
			{
				temp.week *= 10;
				temp.week += 4;
			}
			if (strstr(temp_char, "��") != NULL)
			{
				temp.week *= 10;
				temp.week += 5;
			}
			if (strstr(temp_char, "��") != NULL)
			{
				temp.week *= 10;
				temp.week += 6;
			}
			if (strstr(temp_char, "��") != NULL)
			{
				temp.week *= 10;
				temp.week += 7;
			}
		}
		else if (strstr(str, "CDT") != NULL)
		{
			//����
			strcpy(temp_char, strstr(str, ": ") + 2);
			temp_char[strlen(temp_char) - 2] = NULL;
			if (strlen(temp_char) == 1)
			{
				temp.credit = (int)(temp_char[0] - '0');
			}
			else
			{
				temp.credit = (int)(temp_char[0] - '0') * 10 + (int)(temp_char[1] - '0');
			}
		}
	} while (strstr(str, "}") == NULL); //idx������ �ڷᰡ ������ �˷��ִ� "}"�� ������ �ݺ��� ����

	/*
	printf("���Ǹ� : %s\n", temp.name);
	printf("�м���ȣ : %s\n", temp.lec_number);
	printf("���ǽ� : %s\n", temp.lec_room);
	printf("���� : %d\n", temp.credit);
	printf("���۽ð� : %d\n", temp.start_time);
	printf("����ð� : %d\n", temp.end_time);
	printf("���� : %d\n", temp.week);
	printf("\n\n");
	*/

	return temp;
}

int main()
{
	Lecture lec;
	
	lec = lec_search(0); //���ϴ� �ε����� ����
	printf("���Ǹ� : %s\n", lec.name);
	printf("�м���ȣ : %s\n", lec.lec_number);
	printf("���ǽ� : %s\n", lec.lec_room);
	printf("���� : %d\n", lec.credit);
	printf("���۽ð� : %d\n", lec.start_time);
	printf("����ð� : %d\n", lec.end_time);
	printf("���� : %d\n", lec.week);
	printf("\n\n");

	lec = lec_search(1); //���ϴ� �ε����� ����
	printf("���Ǹ� : %s\n", lec.name);
	printf("�м���ȣ : %s\n", lec.lec_number);
	printf("���ǽ� : %s\n", lec.lec_room);
	printf("���� : %d\n", lec.credit);
	printf("���۽ð� : %d\n", lec.start_time);
	printf("����ð� : %d\n", lec.end_time);
	printf("���� : %d\n", lec.week);
	printf("\n\n");

	lec = lec_search(2); //���ϴ� �ε����� ����
	printf("���Ǹ� : %s\n", lec.name);
	printf("�м���ȣ : %s\n", lec.lec_number);
	printf("���ǽ� : %s\n", lec.lec_room);
	printf("���� : %d\n", lec.credit);
	printf("���۽ð� : %d\n", lec.start_time);
	printf("����ð� : %d\n", lec.end_time);
	printf("���� : %d\n", lec.week);

	return 0;
}