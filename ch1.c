#import <stdio.h>
void fu(int *hi);

int main() {

	int x=1;
	int u[8];
	for (int i =0;i<8; i++) {

		u[i]=i*i;
		printf("u%i er %i\n", i, u[i]);
	}

	fu(u);
	fu(&x);
	int *a = &x;

	printf("hei %p\n", a);
}

void fu(int *hi) {
	//hi++;
	printf("peikaren = %p\n",hi);
	printf("verdien = %i\n",hi[4]);
	return ;
}
