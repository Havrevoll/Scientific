#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void merge(int *A, int p, int q, int r);
void merge_sort(int *u, int p, int r);

// Dette er merge sort.
void merge_sort(int *u, int p, int r)
{
	if (p < r)
	{
		int q = (p + r) / 2;
		merge_sort(u, p, q);
		merge_sort(u, q+1, r);
		merge(u, p, q, r);
	}
}

void merge(int *A, int p, int q, int r)
{
	int n1 = q - p + 1;
	int n2 = r - q;
	int L[n1+1], R[n2+1];
	int i, j, k;
	for (i = 0; i < n1; i++)
	{
		L[i] = A[p + i];
	}
	for (j = 0; j < n2; j++)
	{
		R[j] = A[q + j + 1];
	}
	//Set inn "sentinel cards":
	L[n1] = R[n2] = INT_MAX;

	i = j = 0;
	for (k = p; k < r+1; k++)
	{
		if (L[i] <= R[j])
		{
			A[k] = L[i];
			i++;
		}
		else
		{
			A[k] = R[j];
			j++;
		}
	}
}

int main(int argc, char **argv)
{
	int n = argc;
	int usortert[n - 1];

	for (int i = 1; i < n; i++)
	{
		usortert[i - 1] = atoi(argv[i]);
	}
	merge_sort(usortert, 0, n - 2);

	for (int i = 0; i < n - 1; i++)
	{
		printf("%i ", usortert[i]);
	}
	printf("\n");
}
