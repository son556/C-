#include <stdio.h>

int main(void)
{
	int x = 4;
	int y = 6;
	printf("x+y = %d\n",x+y);
	for(int i=0;i<10;i++){
		printf("%d\n",i);
		if(i>5){
			break;
		}
	}
	return 0;
}
float sum(float a,float b){
	return a + b;
	
}

float a = 10;
float b = 20;
printf("%d",sum(a,b););
