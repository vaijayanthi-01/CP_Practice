#include <stdio.h>

int main(void) {

  int X, Y, flag = 0;
  scanf("%d %d", &X, &Y);
  
  for(int i = 0; i <= X; ++i){
    int j = X - i;
    if(2*i + 4*j == Y){
      flag = 1;
      break;
    }
  }
  
  if(flag == 1)
    printf("Yes\n");
  
  else
    printf("No\n");
  
  return 0;
}
