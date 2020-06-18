/* Q: Given is a number sequence A of length N.
Find the number of integers i (1 <= i <= N) with the following property:
  For every integer j (1 <= j <= N) such that i != j, Aj doesn't divide Ai. */

/* i/p: 5
        24 11 8 3 16
   o/p: 3
   The integers with the property are 2, 3 and 4. */

//Sieve of Eratosthenes

#include <stdio.h>
#include <stdlib.h>

int comfun(const void* a, const void *b){
  return (*(int*)a - *(int*)b);
}

int main(void){
  int N, i;
  scanf("%d", &N);
  int A[N];
  
  for(i = 0; i < N; ++i)
     scanf("%d", &A[i]);
  
  qsort(A, N, sizeof(int), comfun);
  
  int arr[1000001] = {0}, ans = 0;
  
  for(i = 0; i < N; ++i){
    
    if(arr[A[i]] == 0){
      ++ans;
      for(int j = 1; j * A[i] <= 1000000; ++j)
        arr[j * A[i]] = 1;
      if(i < N - 1){
        if(A[i] == A[i + 1])
          --ans;
      }
    }
    
  }
  printf("%d\n", ans);
  return 0;
}
