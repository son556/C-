#include<stdio.h>

// ����
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
	////����
	//int num = 2;
	////printf("num �� %d �Դϴ�\n", num);
	//p(num);


	//// 2 + 3 �� ?
	//num = num + 3;
	////printf("num �� %d �Դϴ�\n", num);
	//p(num);


	//// 5 - 1 �� ?
	//num -= 1;
	///*printf("num �� %d �Դϴ�\n", num);*/
	//p(num);


	//// 4 * 3 �� ?
	//num *= 3;
	////printf("num �� %d �Դϴ�\n", num);
	//p(num);


	//// 12/6 =?
	//num /= 6;
	////printf("num �� %d �Դϴ�\n", num);
	//p(num);

	//�Լ� ����
	//��ȯ���� ���� �Լ�
	/*function_without_return();*/

	//��ȯ���� �ִ� �Լ�
	/*int ret = function_with_return();
	p(ret);*/

	//�Ķ����(���ް�)�� ���� �Լ�
	/*function_without_params();*/

	//�Ķ����(���ް�)�� �ִ� �Լ�
	/*function_with_params(1, 2, 3);*/

	/*int ret = apple(5, 2);
	printf("��� 5�� �߿� 2���� ������ ��� ���ƿ�: %d\n", ret);*/
	/*printf("��� %d�� �߿� %d���� ������ %d���� ���ƿ�.\n", 10, 2, apple(10, 2));*/
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


//���� 
void p(int num)
{
	printf("num �� %d �Դϴ�\n", num);
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
	printf("���ް��� ��ȯ���� �ִ� �Լ��Դϴ�.\n");
	return total - ate;
}
////�Լ��� ��ȯ�� �Լ��̸� (���ް�)// �Լ����� ��ȯ���ִ� �ڷ����� ����
//{
//	����
// return ��ȯ
//}

// �Լ��� void�� �ƹ��͵� ��ȯ���� ����
//void function_without_return()
//{
//	printf("��ȯ���� ���� �Լ� �Դϴ�.\n");
//
//}

//int function_with_return()
//{
//	printf("��ȯ���� �ִ� �Լ� �Դϴ�.\n");
//	return 10;
//}

void function_without_params()
{
	printf("���ް��� ���� �Լ� �Դϴ�.\n");
}

void function_with_params(int num1, int num2, int num3)
{
	printf("���ް��� �ִ� �Լ�, ���� ���� ���� %d, %d, %d �Դϴ�.\n", 
		num1, num2, num3);
}