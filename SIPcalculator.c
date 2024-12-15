#include<stdio.h>
void
check (float a, int n, float intrest)
{
  float c, b, d;
  d = a;
  int i;
  for (i = 1; i <= n; i++)
    {
      b = ((d / 100) * intrest);
      c = b + d;
      d = a + c;
      printf ("**************\n");
      printf ("YEAR :: %d\n", i);
      printf ("INTREST :: %f\n", b);
      printf ("SIP :: %f \n", a);
      printf ("TOTAL AMOUNT :: %f\n", c);
      printf ("**************\n");
    }

}

int
main ()
{
  float amount, intrest;
  int year;
  printf ("Enter Yearly SIP Amount ::");
  scanf ("%f", &amount);
  printf ("Enter No Of year to Invest ::");
  scanf ("%d", &year);
  printf ("Enter Intrest Rate ::");
  scanf ("%f", &intrest);
  check (amount, year, intrest);
  return 0;
}
