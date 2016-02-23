#include <stdio.h>
/*
  Austin Boucher
  Lab 2
*/
double X;     //stores the intial input value
double Y;     //stores the secondary input value
double t;     //stores the calculated output value
double placement = 0; //assures the program is ran to 5th term
double get_input(void)
{
  if(placement != 0) //runs on the secondary call
    {
      printf("Enter a value for the next sequence > ");//asks for the second term
      scanf("%lf", &Y);//scans the secondary input value;
      placement++;//increases the placement by 1
    }
  else//runs once to read in the first input value
    {
  printf("\nEnter a value > ");
  scanf("%lf", &X);
  placement++;
    }
}
double get_next(void)//calculates the next term
{
  t = (double) ((X/2)+(3*Y));//calculates the term based on the value of placement
  X = Y;//replaces the lowest term with the highest term
  Y = t;//replaces the highest term the the newly calculated term
  placement++;//increases placement by 1
}
int print_result(void)// prints out the 5th term to the secondary digit
{
  printf("The result is %.2lf \n", t);
}
int main(void)//runs a driver for the program
{
  get_input();//runs the first input
  get_input();//runs the secondary input
  while(placement < 5)//makes sure that the program is ran to the 5th degree
    {
      get_next(); //runs the calculations
    }
  print_result(); //prints the results of the program
}


