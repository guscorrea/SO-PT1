#include "cthread.h"
#include <stdio.h>

void* func0(void *arg) {
  printf("Eu sou a thread ID0 imprimindo %d\n", *((int *)arg));
}
void* func1(void *arg) {
  printf("Eu sou a thread ID1 imprimindo %d\n", *((int *)arg));
}

int main(int argc, char *argv[]) {
  int id0, id1, i;
//  id0 = ccreate(func0, (void *)&i, 0);
//  id1 = ccreate(func1, (void *)&i, 0);
//  printf("Eu sou a main após a criação de ID0 e ID1\n");
//  cjoin(id0);
//  cjoin(id1);
  printf("Eu sou a main voltando para terminar o programa\n");
}