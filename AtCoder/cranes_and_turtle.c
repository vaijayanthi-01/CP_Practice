/*Q: There are some animals in a garden. Each of them is a crane with two legs or a turtle with four legs.
Takahashi says: "there are X animals in total in the garden, and they have Y legs in total." Determine whether there is a 
combination of numbers of cranes and turtles in which this statement is correct.*/

/*i/p: 3 8
o/p: Yes
The statement "there are 3 The statement "there are 8 legs in total" is correct if there are two cranes and one turtle.
Thus, there is a combination of numbers of cranes and turtles in which the statement is correct.*/

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
