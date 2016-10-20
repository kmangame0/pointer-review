#include <stdio.h>

/*
int x [5]; 
x[0] = 10; 
x[1] = 30; 
x[2] = 50; 
x[3] = 70; 
x[4] = 99; 
int *y = x;

Dereference y which is equal to x which points to x[0], then add 2
x[0] = 10 + 2 = 12
printf("%d\n", *y+2);

y is equal to x which points at x[0], increment the pointer by 2
y now points at x[2]
x[2] = 50
printf("%d\n", *(y+2));

x[5] is out of bounds, the output will be a memory address
printf("%d\n", x[5]);

y is equal to the same memory address as x, the output will be the memory address of x[0]
printf("%d\n", y); 
*/

void AddOneToAll(int* x);

int main(int argc, char ** argv){
  int x[5];
  x[0] = 10;
  x[1] = 20;
  x[2] = 30;
  x[3] = 40;
  x[4] = 50;

  for(int i = 0; i < 5; i++){
    printf("%d ", x[i]);
  }
  printf("\n");
  

  AddOneToAll(x);

  for(int i = 0; i < 5; i++){
    printf("%d ", x[i]);	
  }
}

void AddOneToAll(int* x){
  for(int i = 0; i < 5; i++){
  	*x = *x + 1;
  }
}