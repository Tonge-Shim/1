//
//  main.c
//  BirthdayCake
//
//  Created by 심채은 on 2021/03/18.
//
//array ver1
#include <stdio.h>
#include <stdlib.h>


void buildList(int A[], int n)
{
    for(int i = 0; i<n; i++)
    {
        A[i] = i+1;
    }
}

int runSimulation(int A[], int n, int k)
{
    int r = 0;
    int N = n;
    while(n>1)
    {
        int i = 0;
        while(i<k)
        {
            r = (r+1)%N;
            if(A[r] != 0)
                i++;
        }
        A[r] = 0;
        n--;
        while(A[r] == 0)
        {
            r = (r+1) % N;
        }
    }
    return A[r];

}


int candle(int A[], int n, int k)
{
    buildList(A, n);
    return runSimulation(A, n, k);
}

void main()
{
    int n,k;
    printf("how many candles? ");
    scanf("%d", &n);
    printf("how many skips? ");
    scanf("%d", &k);
    int A[n];
    printf("%d\n", candle(A, n, k));
    
    
    
}
