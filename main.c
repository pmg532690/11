#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void){
	int i;
	int grade[5];
	int sum; 
	for(i=0;i<5;i++)
	{
		printf("grade[%i]=", i);
		scanf("%d", &grade[i]);
	}
	for(i=0;i<5;i++){
		printf("grade[%i] = %i\n", i, *(grade+i));
		sum = sum + *(grade+i) ;
	}
	
	printf("Average : %i\n", sum / 5);
	
	system("PAUSE");
	return 0;
}
