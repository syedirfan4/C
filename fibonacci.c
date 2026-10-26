#include<stdio.h>

void fib(int n){

	int a = 0;
	int b = 1;
	for(int i = 1 ; i<=n ; i++){
		if(i > 2){
			int c = a + b;
			a = b;
			b = c;
			printf("%d\n",c);
		}
		else if(i == 1){
			printf("%d\n",a);
		}
		else if(i == 2){
			printf("%d\n",b);
		
		}		
	}
			
	
}
int main(){
	fib(3);

	puts(" ");

	fib(4);

	puts(" ");

	fib(7);
}
