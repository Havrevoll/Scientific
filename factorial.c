#include <stdio.h>

void factorial(int *seq, int perms)
{
	int j,k,temp
	for (j = 0; j < n - perms; j++)
	{
		factorial(seq, perms-1);
			temp= seq[k];
		for (k = 0; k < n - perms; k++)
		{
			

	}

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



