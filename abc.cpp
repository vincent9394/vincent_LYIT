#include <iostream>
#include <vector>
#include <string>
//#include <conio.h>
#include <ctype.h>
#include <stdio.h>

using namespace std;

#define INDEX 10

int main()
{
   //Part 1  print hello world
   vector<string> msg{"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

   for (const string &word : msg)
   {
      cout << word << " ";
   }
   cout << endl;
   printf("\n");
   
   // Part 2 print value

   int a = 5;
   int b;
   int c = 10;
   printf("my value is %d %d \n", b, c);
   printf("\n");

   //Part 3 print input value
 
   int age;
   printf("enter age\n");
   scanf("%d", &age);
   printf("your age is %d \n", age);
   // return 0;
   printf("\n");

   //part 4  if
   if (a > b)
   {
      printf(" a is larger than b");
   }
   else
   {
      printf("b is larger");
   }
   printf("\n");

   //part 5  if and or
   if (a > b && b > c)
   {
      printf("AND a is larger than b");
   }
   else
   {
      printf("AND c is larger");
   }
   printf("\n");

   if (a > b || b > c)
   {
      printf("OR a is larger than b");
   }
   else
   {
      printf("OR c is larger");
   }
   printf("\n");

   //part 5 while for loop
   int count = 0;
   a = 0;
   b = 0;
   while (a <= 10)
   {
      printf("%dx%d = %d  \n", a, b, a * b);
      //  printf("count is %d   \n", count );
      a++;
      b++;
      count++;
   }
   printf("\n");
   //part 5
   for (int i = 0; i < 11; i++)
   {
      for (int k = 0; k < 11; k++)
      {
         printf("%dx%d = %d ", i, k, i * k);
      }
      printf("\n");
   }
   //part 6  rand()
   int r = rand();
   printf("the old rand is %d \n", r);
   printf("the old rand is %d  \n", r % 10);
   printf("the old rand is %d  \n", r);

   srand(time(NULL));
   int newRand = rand();
   printf("the new rand is %d \n", newRand);
   printf("the new rand is %d  \n", newRand % 10);
   printf("the new rand is %d  \n", newRand);

   printf("\n");
   //part 7   guess num do-while loop
   srand(time(NULL));
   int guessAns = rand() % 100 + 1;
   int guess;
   printf("the guess is %d \n", guessAns);

   do
   {
      printf("enter guess\n");
      scanf("%d", &guess);

      if (guess == guessAns)
      {
         printf("do while loop You are right, the Ans is %d  \n", guessAns);
      }
      else
      {
         printf("Try again \n");
      }
   } while (guess != guessAns);

   //part 8  guess num for loop
   for (;;)
   {

      printf("enter guess\n");
      scanf("%d", &guess);

      if (guess == guessAns)
      {
         printf("For loop, You are right, the Ans is %d  \n", guessAns);
         break;
      }
      else
      {
         printf("Try again \n");
         if (guessAns > guess)
         {
            printf("the Ans larger than %d  \n", guess);
         }
         else
         {
            printf("the Ans smaller than %d  \n", guess);
         }
      }
   }

   //part9  print float
   
float d =321.23456789;
float e =5.5f;
int f =e;

printf("float is %f %f %d \n", d,e,f);
printf("the %% is show by write %%%% \n");
printf("%+f %-5f %0f",d,d,d);


   //part9 print array
   int array[INDEX];
   int sum = 0;

   for (int i = 0; i < 11; i++)
   {
      array[i] = i;
      printf("%d \n", array[i]);
   }

   for (int i = 0; i < 11; i++)
   {
      if (array[i] > 0)
      {
         printf("+");
      }

      sum = sum + array[i];
      printf("%d", array[i]);
   }
   printf(" = %d \n", sum);

   //part10 sort array for loop
   sum = 0;
   //printf("%d",sum);

   for (int k = 0; k < 10; k++)
   {
      int maxValue = array[k];
      int maxIndex = k;

      for (int i = k + 1; i < 11; i++)
      {
         if (array[i] > maxValue)
         {
            maxIndex = i;
            maxValue = array[i];
         }
      }

      int temp = array[k];
      array[k] = array[maxIndex];
      array[maxIndex] = temp;

      printf("forIndex =  %d maxIndex = %d maxValue = %d \n", k, maxIndex, maxValue);
      for (int j = 0; j < 11; j++)
      {
         printf("%d ", array[j]);
      }
      printf("\n");
   }

   for (int i = 0; i < 11; i++)
   {
      if (array[i] < 10 && array[i] >= 0)
      {
         printf("+");
      }
      sum = sum + array[i];
      printf("%d", array[i]);
   }
   printf(" = %d \n", sum);
   printf("\n");

   //part11 bubble sort array for loop
   sum = 0;
   //printf("%d",sum);

   for (int k = 0; k < 10; k++)
   {

      for (int i = 0; i < 10 - k; i++)
      {
         if (array[i] > array[i + 1])
         {
            int temp = array[i];
            array[i] = array[i + 1];
            array[i + 1] = temp;
         }
      }
      for (int j = 0; j < 11; j++)
      {
         printf("%d ", array[j]);
      }
      printf("\n");
   }

   for (int i = 0; i < 11; i++)
   {
      if (array[i] <= 10 && array[i] > 0)
      {
         printf("+");
      }
      sum = sum + array[i];
      printf("%d", array[i]);
   }
   printf(" = %d \n", sum);
   printf("\n");

   // Part12 Mark six
   int markSix[49];
   int trial = 7;
   int trials[7];
   int same = 0;
   for (int i = 0; i < 49; i++)
   {
      markSix[i] = i + 1;
      printf("%d ", markSix[i]);
   }

   printf("\n");
  
  
   for (int i = 0; i < trial; i++)
     {
      
      int draw = rand() % 49 + 1;
      same = 0;
      do{
         for (int j = 0; j<i; j++){
            if (trials [j] == draw) {
               same = 1; 
               printf("redraw same is %d", draw);
               break;
            }
         }     
     } while (same==1); 
      trials[i] = draw;
      printf("%d ", trials[i]);

   }
   
   printf("\n");


   printf("Program end, Press any key to exit\n");
}
