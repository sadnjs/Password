#include <stdio.h>
#include <string.h>	
#include <conio.h>

int main() {
	char pass[] = "abcd";
	char getPass[20];
	int i;
	printf("입력 > ");

	for (i = 0; i < 20; i++) {
		getPass[i] = _getch();
		if (getPass[i] == 13) { //Enter 일 경우 
			getPass[i] = '\0'; //Enter를 Null로 초기화 
			break;
		}
		_putch('*');
	}

	printf("\n");
	if (!strcmp(pass, getPass)) { //pass 와 getPass 가 같을 경우 
		printf("로그인 되었습니다. \n");
	}
	else {
		printf("비밀번호가 틀렸습니다. \n");
	}

	return 0;
}
