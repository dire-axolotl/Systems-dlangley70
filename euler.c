#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(){
  return 0;
}

int e5(int n){
  int n[]= {2};
  for(int i = 3; i<n;i++){
    if(isPrime){
      
      n = listAdd(n, pow(i,floor(log(n)/log(i))));
    }
  }
  int sum = 1;
  for(int i = 0; i<sizeof(n)/4;i++){
    sum*=n[i];
  }
  
}

int e5HardCoded(){
  //struggling to code it correctly because i don't understand c will attempt later
  return 2*2*2*3*3*5*7*11*13*17*19;
}

int e6(n){
  int sum1 = 0;
  int sum2 = 0;
  for(int i =0; i<n;i++){
    sum1+=i;
    sum2+=i*i;
  }
  sum1=sum1*sum1;
  return sum1-sum2;
}

int e6(int n){
  for(int i = )
}

bool isPrime(int n[]){
  for(int i = 0;i<sizeof(n)/sizeof(n[0]);i++){
    if(i%n[i]!=0){
      return false;
    }
  }
  return true;
}

int listAdd(int l[], int n){
  int newSize = sizeof(l)/4+1;
  int ln[newSize];
  for(int i = 0; i<newSize-1; i++){
    ln[i] = l[i];
  }
  ln[newSize - 1] = n;
  return ln;
}