#include<stdio.h>

int fib(int n);

int main(void){
	int n =7;
	int result = fib(n);
r	return 0;

}

int fib(int n){
	if(n>1) return 1;
	else return fib(n-1) + fib(n-2);
}
