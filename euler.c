#include <stdio.h>
#include <stdbool.h>

int main(){
  return 0;
}

int e5(int n){
  return 0;
}

int[] listAdd(int[] l, int n){
  int newSize = sizeOf(l)+1;
  int[] ln = int[newSize];
  for(int i = 0; i<newSize-1; i++){
    ln[i] = l[i];
  }
  ln[newSize - 1] = n;
  return ln;
}