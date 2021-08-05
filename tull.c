#include <stdio.h>

int main() {
	int x =2;

	char b='c';

	int ar[6];

	ar[0]=45;
	ar[1]=745;
	
	int *px = &ar[0];

	int *py = px+1;
	printf("px er %i\n", *px);
	printf("py er %i\n", *py);

	printf("px har adressee %p\n", px);
	printf("py har adressee %p\n", py);
}

void funk(int* par) {
	printf("her erfunk  %i\n",*par);

}
