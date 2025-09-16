#include <cs50.h>
#include <stdio.h>

int get_positive_num(void);
void row(int n);

int main(void)
{

    int get_int = get_positive_num();
    row(get_int);
}

//gettting user input

int get_positive_num(void)
{
  int num;
  do
  {
    num = get_int("Height: ");
  }
  while (num < 1);
  return num;

}

// printing rows and col
void row(int n)
{
    for (int row = 0; row < n; row++)
    {

      //Priting space to reverse pyramid
      for (int space = 0; space < n - row -1; space++)
      {
        printf(" ");
      }

      for (int col = 0; col <= row; col++)
      {
        printf("#");
      }
      printf("\n");
    }

}
