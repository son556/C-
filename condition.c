#include<stdio.h>
#include<time.h>//random �������
//#include<stdlib.h> //time.h������ random �ȵǴ°��
int main()
{
	//������ ź�ٰ� ����, �л� / �Ϲ���(20���̻�)
	//if(����)  {  }, else {}
	/*int age = 15;
	if (age >= 20)
	{
		printf("�Ϲ��� �Դϴ�.\n");
	}
		
	else {
		printf("�л��Դϴ�.\n");
	}*/


	// �ʵ��л�(8~13) / ���л�(14~16)/����л�(17~19)
	// if / else if / else
	/*int age = 25;

	if (age >= 8 && age <= 13)
	{
		printf("�ʵ��л��Դϴ�.\n");
	}
	else if (age >= 14 && age <= 16)
	{
		printf("���л��Դϴ�.\n");
	}
	else if (age >= 17 && age <= 19)
	{
		printf("����л��Դϴ�\n");
	}
	else
	{
		printf("�����Դϴ�.\n");
	}*/

	//break / continue
	// 1������ 30������ �ִ� �ݿ��� 1 ������ 5������ ���� ��ǥ�� �մϴ�
	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6)
		{
			printf("������ �л��� ����������\n");
			break;
		}
		printf("%d �� �л��� ���� ��ǥ�Ͻÿ�\n", i);
	}*/

	//1�� ���� 30������ ��ǥ 7�� ����
	//7�������ϰ� 6������ 10������ ��ǥ
	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				continue;
			}
			printf("%d���л��� ��ǥ�ϼ���\n", i);
			
		}
	}*/

	// &&(and) ||(or)
	/*int a = 10;
	int b = 10;
	int c = 12;
	int d = 13;
	if (a == b || c == d)
	{
		printf("a�� b�Ǵ� c�� d�� ���� ����\n");

	}
	else
	{
		printf("���� ���� �ʳ׿�\n");
	}*/
	

	//random
	//srand(time(NULL)); //���� �ʱ�ȭ
	//int num = rand() % 3;// 0,1,2�� 1�� ����

	//printf("���� �ʱ�ȭ ����...\n");
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", rand() % 10);
	//}// ó�� ���ุ �����̰� �״��� ���ʹ� ó������� ���� ���� ����
	

	//printf("�����ʱ�ȭ ����\n");
	//srand(time(NULL));//���� �ʱ�ȭ
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", rand() % 10);
	//}

	//����0 ����1 ��2
	/*srand(time(NULL));
	int i = rand() % 3;
	if (i == 0)
	{
		printf("����\n");
	}
	else if (i == 1)
	{
		printf("����\n");
	}
	else if (i == 2)
	{
		printf("��\n");
	}
	else
	{
		printf("??\n");
	}*/

	// switch ����
	//srand(ti(NULL));
	//int i = ranmed() % 3;
	//switch (i)// case �� break ���� ���� �ʴ� ��� ��ġ ���̽� ���� ���� ���� ����
	//	// ��) i = 1 �� ��� case1 ���� ������ ����
	//{
	//case 0: printf("����\n"); break;//case 0 ������ break������ ����ġ�� Ż��
	//case 1: printf("����\n"); break;
	//case 2: printf("��\n"); break;
	//default:printf("?\n"); break;
	//}



	/*int age = 17;
	switch (age)
	{
	case 8: 
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:printf("�ʵ��л��Դϴ�\n"); break;
	case 14:
	case 15:
	case 16:printf("���л��Դϴ�\n"); break;
	case 17:
	case 18:
	case 19:printf("����л��Դϴ�\n"); break;
	default:printf("�л��̾ƴմϴ�\n"); break;
		 
	}*/


	// Up and Down
	srand(time(NULL));
	int num = rand() % 100 + 1;// 1~100 ������ ����
	printf("����");
	int answer = 0;//����
	int chance = 5;//��ȸ
	while (1)
	{
		printf("���� ��ȸ %d\n", chance--);
		printf("���ڸ� ���������� (1~100) :");
		scanf_s("%d", &answer);
		if (answer > num)
		{
			printf("down\n");
		}
		else if (answer < num)
		{
			printf("up\n");
		}
		else if (answer == num)
		{
			printf("�����Դϴ�.\n");
			break;
		}
		if (chance == 0)
		{
			printf("��� ��ȸ�� �� ����Ͽ����ϴ�\n");
			break;
		}
	}
	return 0;
}



