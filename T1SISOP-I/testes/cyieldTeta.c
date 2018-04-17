/**
** Teste da função cyield
**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/support.h"
#include "../include/cthread.h"

void* func0() {
	printf("Eu sou a thread ID1 \n");
}

void* func1() {
	printf("Eu sou a thread ID2 \n");

}

void* func2() {
	printf("Eu sou a thread ID3 \n");

}

int main(int argc, char *argv[]) {
	
	int id0, id1, id2;
	

	id0 = ccreate(func0, (void *) NULL, 0);
	printf("Eu sou a thread de TID: %d\n", id0);
	
	id1 = ccreate(func1, (void *) NULL, 0);
	printf("Eu sou a thread de TID: %d\n", id1);

	id2 = ccreate(func2, (void *) NULL, 0);
	printf("Eu sou a thread de TID: %d\n", id2);
	

	printf("Eu sou a main após a criação de threads\n");
	
	if(cyield() == 0)
		printf("cyield realizada com sucesso pela main\n");
	else	
		printf("cyield deu errado quando a main chamou\n");		
		
	printf("Sou a main após cyield\n");

	return 0;
}
