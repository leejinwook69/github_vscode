#include <stdio.h>
#include <string.h>

typedef char Preference [5][20]; //선호 교양의 키워드를 담을 배열


int main(void)
{
    Preference list;

	printf("교양으로 듣고 싶은 키워드를 5개 입력하세요.\n");
	for(int i = 0; i<5; i++)
    {
        printf("키워드 %d : ", i+1);
        scanf("%s", list[i]);
        printf("%s\n", list[i]);
    }

	printf("입력한 키워드 : %s %s %s %s %s", list[0], list[1], list[2], list[3], list[4]);
}