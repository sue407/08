#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	int score[SIZE];
	int grade[SIZE];
	
	
	for(i=0; i<SIZE; i++)
	 grade[i] = rand() % 100;

	for(i=0; i<SIZE; i++)
	 score[i] = grade[i];

	for(i=0; i<SIZE; i++)
	printf("grade[%d] = %d\n score[%d] = %d\n", i, grade[i], i, score[i]);
	 
	return 0;
}
