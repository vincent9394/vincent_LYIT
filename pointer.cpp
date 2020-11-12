#include <iostream>
#include <vector>
#include <string>
//#include <conio.h>
#include <ctype.h>
//#include <stdio.h>
// using namespace std;

void inc(int* x, int* y){
 (*x)++;
 (*y)++;

}

void pointerSwap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;

}

int main(void)
{
  int a =10;
  int b =20;

  int* p = &a;
  *p=30;
  printf("%d %d",a,b);
    printf("\n");

  inc(&a,&b);
  printf("%d %d",a,b);
  printf("\n");
  
   pointerSwap(&a,&b);
   printf("%d %d",a,b);
  printf("\n"); 
}
