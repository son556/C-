#include<stdio.h>

// 선언
void p(int num);
int add(int num, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);
//void function_without_return();
//int function_with_return();
int apple(int total, int ate);
void function_without_params();
void function_with_params(int num1,int num2,int num3);
int main()
{
	////function
	////계산기
	//int num = 2;
	////printf("num 은 %d 입니다\n", num);
	//p(num);


	//// 2 + 3 은 ?
	//num = num + 3;
	////printf("num 은 %d 입니다\n", num);
	//p(num);


	//// 5 - 1 은 ?
	//num -= 1;
	///*printf("num 은 %d 입니다\n", num);*/
	//p(num);


	//// 4 * 3 은 ?
	//num *= 3;
	////printf("num 은 %d 입니다\n", num);
	//p(num);


	//// 12/6 =?
	//num /= 6;
	////printf("num 은 %d 입니다\n", num);
	//p(num);

	//함수 종류
	//반환값이 없는 함수
	/*function_without_return();*/

	//반환값이 있는 함수
	/*int ret = function_with_return();
	p(ret);*/

	//파라미터(전달값)가 없는 함수
	/*function_without_params();*/

	//파라미터(전달값)이 있는 함수
	/*function_with_params(1, 2, 3);*/

	/*int ret = apple(5, 2);
	printf("사과 5개 중에 2개를 먹으면 몇개가 남아요: %d\n", ret);*/
	/*printf("사과 %d개 중에 %d개를 먹으면 %d개가 남아요.\n", 10, 2, apple(10, 2));*/
	int num = 2;
	num = add(num, 2);
	printf("add: %d\n",num);

	num = sub(num, 1);
	printf("sub: %d\n", num);
	
	num = mul(num, 3);
	printf("num: %d\n", num);

	num = div(num, 6);
	printf("num: %d\n", num);
	return  0;
}


//정의 
void p(int num)
{
	printf("num 은 %d 입니다\n", num);
}

int add(int num, int num2)
{
	return num + num2;
}

int sub(int num1, int num2)
{
	return num1 - num2;
}

int mul(int num1, int num2)
{
	return num1 * num2;
}

int div(int num1, int num2)
{
	return num1 / num2;
}

int apple(int total, int ate)
{
	printf("전달값과 반환값이 있는 함수입니다.\n");
	return total - ate;
}
////함수형 반환형 함수이름 (전달값)// 함수형은 반환해주는 자료형에 맞춤
//{
//	내용
// return 반환
//}

// 함수형 void는 아무것도 반환하지 않음
//void function_without_return()
//{
//	printf("반환값이 없는 함수 입니다.\n");
//
//}

//int function_with_return()
//{
//	printf("반환값이 있는 함수 입니다.\n");
//	return 10;
//}

void function_without_params()
{
	printf("전달값이 없는 함수 입니다.\n");
}

void function_with_params(int num1, int num2, int num3)
{
	printf("전달값이 있는 함수, 전달 받은 값은 %d, %d, %d 입니다.\n", 
		num1, num2, num3);
}