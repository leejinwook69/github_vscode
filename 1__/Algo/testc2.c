#include <stdio.h>
#include <string.h>

#define MAX_LECTURE 1341 //자료에 있는 강의의 숫자
#define MAX_LEN 150 //글자의 최대 숫자 

typedef struct LecArray
{
	int index;		//강의 인덱스
	int weight;		// 가중치
}LecArray;


typedef struct Lecture
{
	int index;					//인덱스
	char name[MAX_LEN];			//강의명
	char lec_number[MAX_LEN];	//학수번호
	char lec_room[MAX_LEN];		//강의실
	char department[MAX_LEN];	//학과(강의 설립 학과)
	char cmp_clf[MAX_LEN];		//이수 구분(Complete Classfication)
	int year;					//학년
	int credit;					//학점
	int start_time;				//시작시간 //만약 [월1,2 화3,4]인 경우 103으로 표시
	int end_time;				//종료시간 //만약 [월1,2 화3,4]인 경우 204으로 표시
	int week;					//요일, 월요일(1) ~ 금요일(5)
} Lecture;

typedef char Preference; //선호 교양의 키워드를 담을 배열의 틀


LecArray weight_setting_basic(Lecture lec, Preference (*user)[20])
{
	LecArray la = { 0, };

	la.index = lec.index;

	printf("입력한 키워드 : %s %s %s %s %s", user[0], user[1], user[2], user[3], user[4]);

	if (strstr(lec.cmp_clf, "교필") || strstr(lec.cmp_clf, "교선") != NULL)
	{
		printf("caught : %s\n", lec.name);
	}

	return la;
}

Preference* ask_basic()
{
	static Preference list[5][20];

	printf("교양으로 듣고 싶은 키워드를 5개 입력하세요. (중복 가능)\n");
	for (int i = 0; i < 5; i++)
	{
		printf("키워드 %d : ", i + 1);
		scanf("%s", list[i]);
		printf("%s\n", list[i]);
	}

	return (Preference*) list;
}

int main()
{
	// FILE* data = fopen("교과목.txt", "r");
	// Schedule sche = { {0,}, {0,}, {0,}, {0,}, {0,} };
	 Lecture lec;
	 LecArray lec_array[MAX_LECTURE] = { 0, }; //구조체의 인덱스 번호랑 가중치 있는 array,
	// LecArray major_insert[MAX_LECTURE] = { 0, }; //구조체의 인덱스 번호랑 가중치 있는 array,
	// LecArray basic_insert[MAX_LECTURE] = { 0, }; //교양 삽입에 필요한 어레이
	 Preference (*user_preference)[20];
	// UserInfo user_info;
	// int use_lec_index[MAX_LECTURE];
	// int idx = 0;
	
	char string[MAX_LEN] = "";
	int input = 0;
	
	// //질문 입력받아 user_info에 저장
	// user_info = ask_major();

	//질문 입력받아 user_preference에 저장
	user_preference = (void*)ask_basic();
	lec_array[0] = weight_setting_basic(lec, user_preference);
    return 0;
}
    