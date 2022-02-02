#include<stdio.h>
#include<time.h>//random 사용위해
//#include<stdlib.h> //time.h만으로 random 안되는경우
int main()
{
	//버스를 탄다고 가정, 학생 / 일반인(20세이상)
	//if(조건)  {  }, else {}
	/*int age = 15;
	if (age >= 20)
	{
		printf("일반인 입니다.\n");
	}
		
	else {
		printf("학생입니다.\n");
	}*/


	// 초등학생(8~13) / 중학생(14~16)/고등학생(17~19)
	// if / else if / else
	/*int age = 25;

	if (age >= 8 && age <= 13)
	{
		printf("초등학생입니다.\n");
	}
	else if (age >= 14 && age <= 16)
	{
		printf("중학생입니다.\n");
	}
	else if (age >= 17 && age <= 19)
	{
		printf("고등학생입니다\n");
	}
	else
	{
		printf("성인입니다.\n");
	}*/

	//break / continue
	// 1번부터 30번까지 있는 반에서 1 번에서 5번까지 조별 발표를 합니다
	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6)
		{
			printf("나머지 학생은 집에가세요\n");
			break;
		}
		printf("%d 번 학생은 조별 발표하시오\n", i);
	}*/

	//1번 부터 30번까지 발표 7번 병결
	//7번제외하고 6번부터 10번까지 발표
	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				continue;
			}
			printf("%d번학생은 발표하세요\n", i);
			
		}
	}*/

	// &&(and) ||(or)
	/*int a = 10;
	int b = 10;
	int c = 12;
	int d = 13;
	if (a == b || c == d)
	{
		printf("a와 b또는 c와 d는 서로 같다\n");

	}
	else
	{
		printf("서로 같지 않네요\n");
	}*/
	

	//random
	//srand(time(NULL)); //난수 초기화
	//int num = rand() % 3;// 0,1,2중 1개 뽑음

	//printf("난수 초기화 이전...\n");
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", rand() % 10);
	//}// 처음 실행만 랜덤이고 그다음 부터는 처음실행과 같은 값이 나옴
	

	//printf("난수초기화 이후\n");
	//srand(time(NULL));//난수 초기화
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", rand() % 10);
	//}

	//가위0 바위1 보2
	/*srand(time(NULL));
	int i = rand() % 3;
	if (i == 0)
	{
		printf("가위\n");
	}
	else if (i == 1)
	{
		printf("바위\n");
	}
	else if (i == 2)
	{
		printf("보\n");
	}
	else
	{
		printf("??\n");
	}*/

	// switch 구문
	//srand(ti(NULL));
	//int i = ranmed() % 3;
	//switch (i)// case 에 break 문을 쓰지 않는 경우 일치 케이스 이후 문장 전부 시행
	//	// 예) i = 1 인 경우 case1 부터 끝까지 시행
	//{
	//case 0: printf("가위\n"); break;//case 0 수행후 break문으로 스위치문 탈출
	//case 1: printf("바위\n"); break;
	//case 2: printf("보\n"); break;
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
	case 13:printf("초등학생입니다\n"); break;
	case 14:
	case 15:
	case 16:printf("중학생입니다\n"); break;
	case 17:
	case 18:
	case 19:printf("고등학생입니다\n"); break;
	default:printf("학생이아닙니다\n"); break;
		 
	}*/


	// Up and Down
	srand(time(NULL));
	int num = rand() % 100 + 1;// 1~100 사이의 숫자
	printf("숫자");
	int answer = 0;//정답
	int chance = 5;//기회
	while (1)
	{
		printf("남은 기회 %d\n", chance--);
		printf("숫자를 맞혀보세요 (1~100) :");
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
			printf("정답입니다.\n");
			break;
		}
		if (chance == 0)
		{
			printf("모든 기회를 다 사용하였습니다\n");
			break;
		}
	}
	return 0;
}



