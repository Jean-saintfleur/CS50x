#include <cs50.h>
#include <stdio.h>

int get_positive_num(void);
void row(int n);

int main(void)
{

    int get_int = get_positive_num();
    row(get_int);
}

// getting user input

int get_positive_num(void)
{
  int num;
  do
  {
    num = get_int("Choose a number: ");
  }
  while (num < 1);
  return num;

}

// printing rows and col
void row(int n)
{
    for (int row = 0; row < n; row++)
    {
      for (int col = 0; col < row; col++)
      {
        printf("#");
      }
      printf("\n");
    }

}
