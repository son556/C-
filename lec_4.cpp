#include <stdio.h>
#define SECOND_PER_MINUTE 60
int main(){
	int input = 1000;
	int minute = input/ SECOND_PER_MINUTE;
	int second = input % SECOND_PER_MINUTE;
	printf("%d초 %d분 %d초 입니다.\n",input,minute,second);
		int x = 0;
	printf("현재의 x는 %d입니다\n.",x);
	x++;
	printf("현재의 x는 %d입니다\n.",x);
	printf("현재의 x는 %d입니다\n.",x--);// 실행한 후 뺌 
	printf("현재의 x는 %d입니다\n.",x);
	printf("현재의 x는 %d입니다\n.",--x);//먼저 뺀 후 실행 
	x = 100;
	printf("현재의 x는 %d입니다\n.",x);
	x += 50;
	printf("현재의 x는 %d입니다\n.",x);
	x -= 50;
	printf("현재의 x는 %d입니다\n.",x);
	x *= 50;
	printf("현재의 x는 %d입니다\n.",x);
	x /= 50;
	printf("현재의 x는 %d입니다\n.",x);
	x %= 3;
	printf("현재의 x는 %d입니다\n.",x);
	return 0;
}



