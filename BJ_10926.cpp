#include <stdio.h>

int main()
{
	char id[51];
	
	scanf("%s",id);
	printf("%s?\?!",id);
	return 0;
}

/*
printf("%s?\?!",id);
-> ??!를 ?\?!로 입력하는 이유?
= c언어 삼중자
??! 실행시 | 부호 출력됨 -> 이 상황 방지 위해 ?\?!로 입력하면 ??!로 출력됨 
*/
