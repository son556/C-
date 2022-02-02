#include<stdio.h>

int main()
{
	//printf("hello\n");

	// ++ 뿔뿔
	//int a = 10;
	//printf("a = %d\n", a);
	//a++;
	//printf("a = %d\n", a);
	//a++;//1씩 증가
	//printf("a = %d\n", a);
	//printf("");
	//printf("\n");
	//int b = 20;
	//printf("b = %d\n", ++b);//++동작 후 b삽입 
	//printf("b = %d\n", b++);//b삽입 후 ++동작수행
	//printf("b = %d\n", b);

	/*int i = 1;
	printf("hello world % d\n", i++);
	printf("hello world % d\n", i++);
	printf("hello world % d\n", i++);
	printf("hello world % d\n", i++);
	printf("hello world % d\n", i++);
	printf("hello world % d\n", i++);
	printf("hello world % d\n", i++);*/

	//반복문
	// for, while, do while
	//for(선언; 조건; 증감)
	/*for (int i = 1; i <= 10; i++) {
		printf("Hello World%d\n", i);
	}*/
	// while(조건){}
	//int i = 1;
	//while (i <= 10) {
	//	printf("Hello World%d\n", i++);
	//	//i++;
	//}

	//do{} while(조건);
	/*int i = 1;
	do {
		printf("Hello World%d\n", i++);
	} while (i <= 10);*/
	
	
	
	// 나노코딩 c언어 무료 강의(입문부터 게임개발)
	
	/*for (int i = 1; i <= 3; i++)
	{
		printf("첫번째 반복문: %d\n", i);

		for (int j = 1; j <= 5; j++) {
			printf("  두 번째 반복문 : %d\n", j);
		}
	}*/
	
	//이중 반복문(구구단)
	/*for (int i = 2; i <= 9; i++) {

		for (int j = 1; j <= 9; j++) {
			printf("%d X %d = %d\n", i, j, i * j);
		}
	}*/
	
	// 별쌓기
	/*for (int i = 0; i <= 10; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/
	
	// 거꾸로 별
	/*for (int i = 0; i <= 10; i++)
	{
		for (int j = 10; j > i; j--)
		{
			printf(" ");
		}
		for (int x = 0; x <= i; x++)
		{
			printf("*");
		}
		printf("\n");
	}*/

	// 피라미드를 쌓아라
	int floor;
	printf("몇 층으로 쌓겠느냐?");
	scanf_s("%d", &floor);
	for (int i = 0; i < floor; i++)
	{
		for (int j = i; j < floor-1; j++)
		{
			printf(" ");
		}
		for (int x = 0; x < i*2+1; x++)
		{
			printf("*");
		}
		printf("\n");
		
	}
	int floor_2;
	printf("몇 층으로 쌓겠느냐2?");
	scanf_s("%d", &floor_2);
	for (int i = 0; i < floor_2; i++)
	{
		for (int j = i; j < floor_2 - 1; j++)
		{
			printf(" ");
		}
		for (int x = 0; x < i * 2 + 1; x++)
		{
			printf("*");
		}
		printf("\n");

	}
	return 0;
}
