#include <stdio.h>

void factorial(int *seq, int perms)
{
	int j,k,temp
		for (j = 0; j < n - perms; j++)
		{
			if (perms <n)
				factorial(seq, perms+1);

			

			temp= seq[0];
			for (k = 0; k < n - perms-1; k++)
				seq[k] = seq[k+1];

			seq[n -perms-2]=temp;


		}

	void main(int n)
	{
		int seq[n];
		for (int i = 0; i < n; i++)
		{
			seq[i] = i+1;
		}

		factorial(seq, 0);
	}



