#include <stdio.h>
#include <stdlib.h>

int parent(int i);
int left(int i);
int right(int i);

void max_heapify(int *A, int i, int heapsize);
void build_max_heap(int *A, int length);
void heapsort();

void max_heap_insert();
void heap_extract_max();
void heap_increase_key();
void heap_maximum();

void heapsort(int *A)
{
}

void max_heapify(int *A, int i, int heapsize)
{
    int l = left(i);
    int r = right(i);

    int largest;

    if (l <= heapsize && A[l] > A[i])
    {
        largest = l;
    }
    else
    {
        largest = i;
    }

    if (r <= heapsize && A[r] > A[largest])
    {
        largest = r;
    }

    if (largest != i)
    {
        A[i] = A[i] - A[largest];
        A[largest] = A[i] + A[largest];
        A[i] = A[largest] - A[i];

        max_heapify(A, largest, heapsize);
    }
}

void build_max_heap(int *A, int length)
{
    int heapsize = length;

    for (int i = length/2; i >= 0; i--)
    {
        max_heapify(A, i, heapsize);
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

    // heapsort(usortert, 0, n - 2);
    build_max_heap(usortert, 1, 10);

    for (int i = 0; i < n - 1; i++)
    {
        printf("%i ", usortert[i]);
    }
    printf("\n");
}

int parent(int i)
{
    return (i-1) / 2;
}

int left(int i)
{
    return (i << 1)+1;
}

int right(int i)
{
    return (i << 1) + 2;
}
