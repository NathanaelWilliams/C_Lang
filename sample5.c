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
