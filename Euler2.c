#include <stdio.h>
#include <stdlib.h>
//By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
int main(){
  int sum=0;
  int step=0;
  int prev=1;
  int curr=1;
  int num=1;
  while (curr<=4000000){
    if (num%2==0)
        sum+=curr;
    step=curr+prev;
    prev=curr;
    curr=step;
    num=num+1;
  }
    printf("%d\n",sum);
  return 0;
}
