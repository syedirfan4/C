#include<stdio.h>
#include<stdlib.h>
int main(){
  int a_size = 10;

  int *a = malloc(a_size * sizeof(int));

  
  for(int i = 0; i < a_size; i++){
    a[i] = i * 7;
  }

  for(int i = 0; i < a_size; i++){
    printf("a[%d]: %d\n",i,a[i]);
  }
}
