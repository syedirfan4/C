#include<stdio.h>
#include<stdlib.h>
int main(){
  int a_size = 10;

  int *a = malloc(a_size * sizeof(int));

  int new_a_size = 0;

  for(int i = 0; i < a_size; i++){
    a[i] = i * 7;
  }

  for(int i = 0; i < a_size; i++){
    printf("a[%d]: %d\n",i,a[i]);
  }
  printf("reallocating\n");

  printf("done\n");
  
  int *tmp = NULL;

  new_a_size = a_size * 2;

  tmp = realloc(a, new_a_size * sizeof(int));

  if(tmp == NULL){
     fprintf(stderr,"NO MORE MEMORY!!\n");
     exit(1);
  }

  a = tmp;
  
  for(int i = 0; i < new_a_size; i++){
    a[i] = i * 8;
  }
  for(int i = 0; i < new_a_size; i++){
    printf("a[%d]: %d\n",i,a[i]);
  }
  free(a);
  return 0;
}
