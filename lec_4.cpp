#include <stdio.h>
#define SECOND_PER_MINUTE 60
int main(){
	int input = 1000;
	int minute = input/ SECOND_PER_MINUTE;
	int second = input % SECOND_PER_MINUTE;
	printf("%d�� %d�� %d�� �Դϴ�.\n",input,minute,second);
		int x = 0;
	printf("������ x�� %d�Դϴ�\n.",x);
	x++;
	printf("������ x�� %d�Դϴ�\n.",x);
	printf("������ x�� %d�Դϴ�\n.",x--);// ������ �� �� 
	printf("������ x�� %d�Դϴ�\n.",x);
	printf("������ x�� %d�Դϴ�\n.",--x);//���� �� �� ���� 
	x = 100;
	printf("������ x�� %d�Դϴ�\n.",x);
	x += 50;
	printf("������ x�� %d�Դϴ�\n.",x);
	x -= 50;
	printf("������ x�� %d�Դϴ�\n.",x);
	x *= 50;
	printf("������ x�� %d�Դϴ�\n.",x);
	x /= 50;
	printf("������ x�� %d�Դϴ�\n.",x);
	x %= 3;
	printf("������ x�� %d�Դϴ�\n.",x);
	return 0;
}



