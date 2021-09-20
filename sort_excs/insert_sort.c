#include <stdio.h>
#include <stdlib.h>

# Dette er insert sort.
int * insert(int* usortert, int len)
{
    int temp;
    for (int i =1; i<len; i++)
    {
        for (int j= i; j > 0; j--)
        {
            if (u[j] < u[j-1])
            {
                temp=u[j-1];
                u[j-1] = u[j];
                u[j]=temp;
            }
        }
    }
}

int main(int argc, char **argv) 
{
    int n = argc;

    int usortert[n-1];

    for (int i = 1; i <n; i++)
    {
        usortert[i-1] = atoi(argv[i]);

    }
    insert(usortert, n-1);

    for (int i =0;i<n-1;i++)
    {
        printf("%i ",usortert[i]);
    }
    printf("\n");

}
