#include <stdio.h>
#define MONTHS 12


int main(void){
	
	double monthSalary = 1500.5;
	char x = 'A';
	char y = 65; // char는 숫자를 이용하여 문자 나타냄
	// 아스키코드
	int z = 65; 
	char a = 'A';
	printf("%c\n",x); 
	printf("%c\n",y);
	printf("%c\n",z);// int변수도 %c에 들어가면 알아서 문자로 바뀜 65->A 
	printf("%d\n",a);
	return 0;
}
