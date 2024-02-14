# C_Lang
  &emsp; A number of samples of C language programs.<br>
  &emsp; I am very glad to support you by sharing samples which are useful for Dev with you👁.<br>
  &emsp; And there are 5 samples for C_language.

## **Sample1**

This is the basic sample of C_lang,and it teaches you how to ***print*** sth on your screen.
  >Code
  ```c
  #include <stdio.h>
  #include <stdlib.h>
  int main(){
  /* Although the better form is:
   int main()
   {
      return 0;
   }
   I get used to using that form 
   because of Java
  */
  printf("HelloWorld\n");
  return 0;
  }
  ```
  >OutPut
  ```java
  HelloWorld
  ```

## **Sample2**

The sample shows that how to add num with another,and it shows the forms of the ***values***.
  >Main Code
  ```c
   int a,b,c; 
   char d; 
   char e = 'e'; 
   d = e; 
   int f = 1; 
   c = f; 
   a = 2; 
   b = a + c; 
   float g = 3.14; 
   double h = 3.14159; 
   printf("%d%c%f%lf",b,d,g,h); 
   return 0;
  ```
  >OutPut
  ```java
  3e3.143.14159
  ```

## **Sample3**

Just learn a new *Function* ***sizeof()***.<br> You should know that ***printf()*** ,***scanf()*** are functions,and f means ***function***.
  >Main Code
  ```c
  
  printf("%d",sizeof(int)); 
  printf("%d",sizeof(double)); 
   printf("%d",sizeof(char)); 
   printf("%d",sizeof(float)); 
 ```
  >OutPut
  ```java
  4814
  ```

## **Sample4**

Learn how to use ***switch*** and ***case***,and make a computer.
  >Main Code
  ```c

    double a, b, d; 
     char c; 
     scanf("%lf %c %lf", &a, &c, &b); 
     switch (c) 
     { 
     case'+':d = a + b; break; 
     case'-':d = a - b; break; 
     case'*':d = a * b; break; 
     case'/':d = a / b; break; 
     case'%': 
         a = (long)a; 
         b = (long)b; 
         d = (long)a % (long)b; break; 
     } 
     printf("%G %c %G = %G\n", a, c, b, d);
  ```
  >InPut
  ```java
  10 * 6
  ```
  >OutPut
  ```java
  10 * 6 = 60
  ```

## **Sample5**

Try to use ***math.h*** to make a triangle computer
  >Code
  ```c
 #include <stdio.h>       
 #include <math.h>       
 #define PI 3.14159265 
  
 int main () 
 { 
   //cosine 
   double param, result; 
   param = 60.0; 
   result = cos ( param * PI / 180.0 ); 
   printf ("The cosine of %f degrees is %f.\n", param, result ); 
  
   /* sin example */ 
   double param1, result1; 
   param1 = 30.0; 
   result1 = sin (param1*PI/180); 
   printf ("The sine of %f degrees is %f.\n", param1, result1 ); 
  
   /* tan example */ 
   double param2, result2; 
   param2 = 45.0; 
   result2 = tan ( param2 * PI / 180.0 ); 
   printf ("The tangent of %f degrees is %f.\n", param2, result2 ); 
  
   return 0; 
 }
  ```
  >OutPut
  ```java
  The cosine of 60.000000 degrees is 0.500000. 
The sine of 30.000000 degrees is 0.500000. 
The tangent of 45.000000 degrees is 1.000000. 
  ```
