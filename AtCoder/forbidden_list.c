/* Q: Given are an integer X and an integer sequence of length N: p1,...,pN.
Among the integers not contained in the sequence p1,..,pN, find the integer nearest to X, that is, find the integer
whose absolute difference with X is minimum. If there are multiple such integers, report the smallest such integer.*/

/* i/p: 6 5
        4 7 10 6 5
   o/p: 8
   Among the integers not contained in the sequence 4, 7, 10, 6, 5, the nearest one to 6 is 8.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int comfun(const void *a, const void *b){
  	return (*(int*)a - *(int*)b);
}

int binarySearch(int arr[], int l, int r, int x) 
{ 
    while (l <= r) { 
        int m = l + (r - l) / 2; 
        if (arr[m] == x) 
            return m; 
        else if (arr[m] < x) 
            l = m + 1; 
        else
            r = m - 1; 
    } 
    return -1; 
}

int main(void) {
  int X, N;
  scanf("%d %d", &X, &N);
  int p[N], i;
  
  for(i = 0; i < N; ++i) 
    scanf("%d", &p[i]);
  
  qsort(p, N, sizeof(int), comfun);
  
  int b, min = 101, ans = 0, absolute;
  
  for(i = 0; i <= 101; ++i){
    b = binarySearch(p, 0, N - 1, i);
    if(b == -1){
      absolute = abs(X - i);
      if(absolute < min){
        min = absolute;
        ans = i;
      }
    }
    else 
      continue;
  }
  
  printf("%d\n", ans);
  return 0;
}
