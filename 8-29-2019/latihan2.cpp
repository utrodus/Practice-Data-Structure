#include <bits/stdc++.h>
#define MAX 10

using namespace std;

int *fibo;

int main() {

	fibo = (int *) malloc(MAX & sizeof(int));

	*(fibo + 1) = 1;
	*(fibo + 2) = 1;

	for(int i = 3; i<= MAX; i++) {
		*(fibo + i) = (*(fibo + i - 2) + *(fibo + i - 1));
	}

	printf("BILANGAN FIBONACCI : ");
	for(int i = 1; i<= MAX; i++) {
		printf("%d ", *(fibo + i));
	}
	
	printf("\n");

	return 0;

}
