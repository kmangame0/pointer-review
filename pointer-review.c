#include <stdio.h>

void AddOne(int* x);

int main(int argc, char ** argv){
  int x = 0;
  printf("X: %d \n", x);
  
  AddOne(&x);
  
  printf("X: %d \n", x);
}

void AddOne(int* x){
  *x = *x + 1;
}
