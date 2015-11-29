//on linux x86_64
//gcc -m64 test1.c; ./a.out

#include <stdio.h>
int main(int argc,char* argv[]){
	int i=1; void test(int);
	test(i++);
	return 0;
}

void test(int i){
	long int k;
	i<10 && (*(&k+2) = (long int)(main+0x16) );
	printf("%i\n",i);
}

