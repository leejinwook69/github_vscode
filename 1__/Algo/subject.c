//주의 : 메모장 저장 시 인코딩을 ANSI로 해야 한글이 안깨집니다.

#include <stdio.h>
#include <string.h>
#define MAX_LEN 100

typedef struct Lecture
{
	char name[MAX_LEN]; //강의명
	char lec_number[MAX_LEN]; //학수번호
	char lec_room[MAX_LEN]; //강의실
	int credit; //학점
	int start_time; //시작시간 //만약 [월1,2 화3,4]인 경우 103으로 표시
	int end_time; //종료시간 //만약 [월1,2 화3,4]인 경우 204으로 표시
	int week; //요일, 월요일(1) ~ 금요일(5)
} Lecture;

//자료에서 n번째의 적힌 자료의 정보가 담긴 구조체를 반환(idx = 0, 1, ...)
Lecture lec_search(int idx)
{
	int line = 2 + (idx * 32); //0번째줄부터 시작하고, 메모장에서 idx번째의 정보가 담긴 구조체의 시작 라인
	Lecture temp; //리턴 구조체
	FILE* data = fopen("교과목.txt", "r");
	char str[100];
	//메모장에서 idx번째의 자료가 시작되는 줄로 이동
	for (int i = 0; i < line; i++) 
	{
		fgets(str, MAX_LEN, data);
	}
	char temp_char[MAX_LEN] = "";
	//자료 추출 시작
	do 
	{
		fgets(str, MAX_LEN, data);
		if(strstr(str, "SBJ_NM") != NULL)
		{
			//강의명
			strcpy(temp_char, strstr(str, ": \"") + 3);
			temp_char[strlen(temp_char) - 3] = NULL;
			strcpy(temp.name, temp_char);
			
		}
		else if (strstr(str, "SBJ_NO") != NULL)
		{
			//학수번호
			strcpy(temp_char, strstr(str, ": \"") + 3);
			temp_char[strlen(temp_char) - 3] = NULL;
			strcpy(temp.lec_number, temp_char);
		}
		else if (strstr(str, "LECT_TIME_ROOM") != NULL)
		{
			//강의실
			strcpy(temp_char, strstr(str, ": \"") + 3);
			temp_char[strlen(temp_char) - 3] = NULL;
			strcpy(temp.lec_room, temp_char);

			//시작시간
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
			//시작시간이 2개인 경우
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
			
			//종료시간
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
			//종료시간이 2개인 경우
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

			//요일
			temp.week = 0;
			strcpy(temp_char, strstr(str, ": \"") + 3);
			if (strstr(temp_char, "월") != NULL)
			{
				temp.week *= 10;
				temp.week += 1;
			}
			if (strstr(temp_char, "화") != NULL)
			{
				temp.week *= 10;
				temp.week += 2;
			}
			if (strstr(temp_char, "수") != NULL)
			{
				temp.week *= 10;
				temp.week += 3;
			}
			if (strstr(temp_char, "목") != NULL)
			{
				temp.week *= 10;
				temp.week += 4;
			}
			if (strstr(temp_char, "금") != NULL)
			{
				temp.week *= 10;
				temp.week += 5;
			}
			if (strstr(temp_char, "토") != NULL)
			{
				temp.week *= 10;
				temp.week += 6;
			}
			if (strstr(temp_char, "일") != NULL)
			{
				temp.week *= 10;
				temp.week += 7;
			}
		}
		else if (strstr(str, "CDT") != NULL)
		{
			//학점
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
	} while (strstr(str, "}") == NULL); //idx번재의 자료가 끝남을 알려주는 "}"가 나오면 반복문 종료

	/*
	printf("강의명 : %s\n", temp.name);
	printf("학수번호 : %s\n", temp.lec_number);
	printf("강의실 : %s\n", temp.lec_room);
	printf("학점 : %d\n", temp.credit);
	printf("시작시간 : %d\n", temp.start_time);
	printf("종료시간 : %d\n", temp.end_time);
	printf("요일 : %d\n", temp.week);
	printf("\n\n");
	*/

	return temp;
}

int main()
{
	Lecture lec;
	
	lec = lec_search(0); //원하는 인덱스를 삽입
	printf("강의명 : %s\n", lec.name);
	printf("학수번호 : %s\n", lec.lec_number);
	printf("강의실 : %s\n", lec.lec_room);
	printf("학점 : %d\n", lec.credit);
	printf("시작시간 : %d\n", lec.start_time);
	printf("종료시간 : %d\n", lec.end_time);
	printf("요일 : %d\n", lec.week);
	printf("\n\n");

	lec = lec_search(1); //원하는 인덱스를 삽입
	printf("강의명 : %s\n", lec.name);
	printf("학수번호 : %s\n", lec.lec_number);
	printf("강의실 : %s\n", lec.lec_room);
	printf("학점 : %d\n", lec.credit);
	printf("시작시간 : %d\n", lec.start_time);
	printf("종료시간 : %d\n", lec.end_time);
	printf("요일 : %d\n", lec.week);
	printf("\n\n");

	lec = lec_search(2); //원하는 인덱스를 삽입
	printf("강의명 : %s\n", lec.name);
	printf("학수번호 : %s\n", lec.lec_number);
	printf("강의실 : %s\n", lec.lec_room);
	printf("학점 : %d\n", lec.credit);
	printf("시작시간 : %d\n", lec.start_time);
	printf("종료시간 : %d\n", lec.end_time);
	printf("요일 : %d\n", lec.week);

	return 0;
}