#include <stdio.h>
#include <string.h>

#define MAX_LECTURE 1341 //�ڷῡ �ִ� ������ ����
#define MAX_LEN 150 //������ �ִ� ���� 

typedef struct LecArray
{
	int index;		//���� �ε���
	int weight;		// ����ġ
}LecArray;


typedef struct Lecture
{
	int index;					//�ε���
	char name[MAX_LEN];			//���Ǹ�
	char lec_number[MAX_LEN];	//�м���ȣ
	char lec_room[MAX_LEN];		//���ǽ�
	char department[MAX_LEN];	//�а�(���� ���� �а�)
	char cmp_clf[MAX_LEN];		//�̼� ����(Complete Classfication)
	int year;					//�г�
	int credit;					//����
	int start_time;				//���۽ð� //���� [��1,2 ȭ3,4]�� ��� 103���� ǥ��
	int end_time;				//����ð� //���� [��1,2 ȭ3,4]�� ��� 204���� ǥ��
	int week;					//����, ������(1) ~ �ݿ���(5)
} Lecture;

typedef char Preference; //��ȣ ������ Ű���带 ���� �迭�� Ʋ


LecArray weight_setting_basic(Lecture lec, Preference (*user)[20])
{
	LecArray la = { 0, };

	la.index = lec.index;

	printf("�Է��� Ű���� : %s %s %s %s %s", user[0], user[1], user[2], user[3], user[4]);

	if (strstr(lec.cmp_clf, "����") || strstr(lec.cmp_clf, "����") != NULL)
	{
		printf("caught : %s\n", lec.name);
	}

	return la;
}

Preference* ask_basic()
{
	static Preference list[5][20];

	printf("�������� ��� ���� Ű���带 5�� �Է��ϼ���. (�ߺ� ����)\n");
	for (int i = 0; i < 5; i++)
	{
		printf("Ű���� %d : ", i + 1);
		scanf("%s", list[i]);
		printf("%s\n", list[i]);
	}

	return (Preference*) list;
}

int main()
{
	// FILE* data = fopen("������.txt", "r");
	// Schedule sche = { {0,}, {0,}, {0,}, {0,}, {0,} };
	 Lecture lec;
	 LecArray lec_array[MAX_LECTURE] = { 0, }; //����ü�� �ε��� ��ȣ�� ����ġ �ִ� array,
	// LecArray major_insert[MAX_LECTURE] = { 0, }; //����ü�� �ε��� ��ȣ�� ����ġ �ִ� array,
	// LecArray basic_insert[MAX_LECTURE] = { 0, }; //���� ���Կ� �ʿ��� ���
	 Preference (*user_preference)[20];
	// UserInfo user_info;
	// int use_lec_index[MAX_LECTURE];
	// int idx = 0;
	
	char string[MAX_LEN] = "";
	int input = 0;
	
	// //���� �Է¹޾� user_info�� ����
	// user_info = ask_major();

	//���� �Է¹޾� user_preference�� ����
	user_preference = (void*)ask_basic();
	lec_array[0] = weight_setting_basic(lec, user_preference);
    return 0;
}
    