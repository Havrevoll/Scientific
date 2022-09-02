#include <stdio.h>
#include <stdlib.h>

int parent(int i);
int left(int i);
int right(int i);

void max_heapify(int *A, int i, int heapsize);
void build_max_heap(int *A, int length);
void heapsort(int *A, int length);

void max_heap_insert();
void heap_extract_max();
void heap_increase_key();
void heap_maximum();

/* In order to maintain the max-heap property, we call the procedure MAX-HEAPIFY.
Its inputs are an array A and an index i into the array. When it is called, MAX-
HEAPIFY assumes that the binary trees rooted at LEFT(i) and RIGHT(i) are max-
heaps, but that A[i] might be smaller than its children, thus violating the max-heap
property. MAX-HEAPIFY lets the value at A[i] "float down" in the max-heap so
that the subtree rooted at index i obeys the max-heap property.*/

void max_heapify(int *A, int i, int heapsize)
{
    int l = left(i);
    int r = right(i);

    int largest;

    if (l < heapsize && A[l] > A[i])
        largest = l;
    else
        largest = i;

    if (r < heapsize && A[r] > A[largest])
        largest = r;

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

    for (int i = (length >> 1) - 1; i >= 0; i--)
        max_heapify(A, i, heapsize);
}

void heapsort(int *A, int length)
{
    int heapsize = length;

    build_max_heap(A, length);


    for (int i = length-1; i > 0; i--)
    {
        A[i] = A[i] - A[0];
        A[0] = A[i] + A[0];
        A[i] = A[0] - A[i];
        heapsize--;
        max_heapify(A, 0, heapsize);
    }
}

int main(int argc, char **argv)
{
    int n = argc;
    int usortert[n - 1];

    for (int i = 1; i < n; i++)
        usortert[i - 1] = atoi(argv[i]);

    //max_heapify(usortert, 1, 10);
    //build_max_heap(usortert, n-1);
    heapsort(usortert, n - 1);
    

    for (int i = 0; i < n - 1; i++)
        printf("%i ", usortert[i]);

    printf("\n");
}

int parent(int i)
{
    return (i - 1) / 2;
}

int left(int i)
{
    return (i << 1) + 1;
}

int right(int i)
{
    return (i << 1) + 2;
}
