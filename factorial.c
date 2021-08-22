#include <stdio.h>
#include <stdlib.h>

int n;

void factorial(int *seq, int perms)
{
	int j,k,temp;
	for (j = 0; j < n - perms; j++)
	{
		if (n- perms > 2)
			factorial(seq, perms+1);


		temp= seq[0];
		for (k = 0; k < n - perms-1; k++)
			seq[k] = seq[k+1];

		seq[n -perms-1]=temp;
		if (n-perms <= 2)
		{
			for (k = 0; k < n; k++)
			{
				printf("%i ", seq[k]);
			}
			printf("\n");
		}
	}
}
int main(int argc, char **argv )
{
	n = atoi(argv[1]);
	int seq[n];
	for (int i = 0; i < n; i++)
	{
		seq[i] = i+1;
	}

	factorial(seq, 0);
}



