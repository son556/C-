#include<stdio.h>

int main()
{
	//printf("hello\n");

	// ++ �Ի�
	//int a = 10;
	//printf("a = %d\n", a);
	//a++;
	//printf("a = %d\n", a);
	//a++;//1�� ����
	//printf("a = %d\n", a);
	//printf("");
	//printf("\n");
	//int b = 20;
	//printf("b = %d\n", ++b);//++���� �� b���� 
	//printf("b = %d\n", b++);//b���� �� ++���ۼ���
	//printf("b = %d\n", b);

	/*int i = 1;
	printf("hello world % d\n", i++);
	printf("hello world % d\n", i++);
	printf("hello world % d\n", i++);
	printf("hello world % d\n", i++);
	printf("hello world % d\n", i++);
	printf("hello world % d\n", i++);
	printf("hello world % d\n", i++);*/

	//�ݺ���
	// for, while, do while
	//for(����; ����; ����)
	/*for (int i = 1; i <= 10; i++) {
		printf("Hello World%d\n", i);
	}*/
	// while(����){}
	//int i = 1;
	//while (i <= 10) {
	//	printf("Hello World%d\n", i++);
	//	//i++;
	//}

	//do{} while(����);
	/*int i = 1;
	do {
		printf("Hello World%d\n", i++);
	} while (i <= 10);*/
	
	
	
	// �����ڵ� c��� ���� ����(�Թ����� ���Ӱ���)
	
	/*for (int i = 1; i <= 3; i++)
	{
		printf("ù��° �ݺ���: %d\n", i);

		for (int j = 1; j <= 5; j++) {
			printf("  �� ��° �ݺ��� : %d\n", j);
		}
	}*/
	
	//���� �ݺ���(������)
	/*for (int i = 2; i <= 9; i++) {

		for (int j = 1; j <= 9; j++) {
			printf("%d X %d = %d\n", i, j, i * j);
		}
	}*/
	
	// ���ױ�
	/*for (int i = 0; i <= 10; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/
	
	// �Ųٷ� ��
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

	// �Ƕ�̵带 �׾ƶ�
	int floor;
	printf("�� ������ �װڴ���?");
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
	printf("�� ������ �װڴ���2?");
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
