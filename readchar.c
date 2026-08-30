#include<stdio.h>
int main(){
	FILE *fp;
	fp = fopen("hello.txt","r");
	int c;

//	c = fgetc(fp);
//	printf("%c\n", c);
	
	while((c = fgetc(fp)) != EOF){
		printf("%c",c);
	}

	fclose(fp);


}
