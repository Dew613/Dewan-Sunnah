#include <stdio.h>
#include <stdlib.h>
int main(){
//Find the sum of all the multiples of 3 or 5 below 1000.
/*for to 1000 first 3 then 5
  then 5 but sa if mod 3 =0 then don;t add*/
  
  int sum=0;
  int num=0;
  for (num;num<1000;num++){
    if (num%3==0)
      sum+=num;
  }
  num=0;
  for (num;num<1000;num++){
    if(num%3!=0){
      if (num%5==0)
	sum+=num;
    }
  }
  printf("%d\n", sum);
  return 0;
  }

