/*Author: Harshit Jain*/
#include <iostream>
#include "fibonacci.h"

/*
 * fibonacci(): returns nth fibonacci number
 * */

int fibonacci(int n){
  if (n <=1){
    return n;
  }
  return fibonacci(n-1) + fibonacci(n-2);
}
