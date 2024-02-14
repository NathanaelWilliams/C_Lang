# C_Lang
A number of samples of C language programs.
I am very glad to support you by sharing samples which are useful for Dev with you👁.
And there are 5 samples for C_language.

> + Sample1
  This is the basic sample of C_lang,and it teaches you how to print sth on your screen.
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
  ```
  HelloWorld
  ```

> + Sample2
  The sample shows that how to add num with another,and it shows the forms of the values.
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
  ```
  3e3.143.14159
  ```

> + Sample3
  Just learn a new Function sizeof() .You should know that printf() scanf() are functions,and f means function.
  >Main Code
  ```c
  
  printf("%d",sizeof(int)); 
  printf("%d",sizeof(double)); 
   printf("%d",sizeof(char)); 
   printf("%d",sizeof(float)); 
 ```
