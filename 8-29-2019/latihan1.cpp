#include <iostream>
using namespace std;

int main() {
	int y, x = 87;
	int *px;
	float d = 54.5, *pd;

	px = &x;
	y = *px;

	printf("Alamat x = %p\n", &x);
	printf("Isi px  = %p\n", px);
	printf("Isi x = %d\n", x);
	printf("Nilai yan ditunjukkan oleh px = %d\n", *px);
	printf("Nilai y = %d\n", y);
	
	printf("Isi d mula-mula = %g\n", d);
	pd = &d;
	
	*pd += 10;
	printf("Isi d sekarang = %g\n", d);
	

	return 0;

}
