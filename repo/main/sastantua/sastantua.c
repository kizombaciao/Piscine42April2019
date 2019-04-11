#include <stdio.h>
#include <unistd.h>

#define NB_LINES(a) (2 * a + a * (a + 1) / 2) // number of rows in pyramid
#define DOOR_SIZE(a) (a - ((a % 2) ? 0 : 1))


void  ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_n_putchar(char c, int n)
{
  while (n--)
  {
    ft_putchar(c);
  }
}

void ft_build_rows(int line, int size, int stars, int spaces)
{
  ft_n_putchar(' ', spaces);
  ft_putchar('/');

  //printf("\nDOOR SIZE  %d", DOOR_SIZE(size)); // DOOR SIZE = 1

  if (line >= NB_LINES(size) - DOOR_SIZE(size)) // length of door height from bottom
  {
    ft_n_putchar('B', stars - (DOOR_SIZE(size) - 1) / 2); // 'B' / before door
    if (size >= 5 && line == NB_LINES(size) - DOOR_SIZE(size) / 2 - 1)
    {
      //printf("\nDOOR!!!");
      ft_n_putchar('A', DOOR_SIZE(size) - 2); // 'A' / same level as door knob
      ft_putchar('$');
      ft_putchar('|');
    }
    else
    {
      ft_n_putchar('a', DOOR_SIZE(size)); // 'a' / other than door knob level
    }
    ft_n_putchar('C', stars - (DOOR_SIZE(size) - 1) / 2); // 'C' / after door
  }
  else
  {
    ft_n_putchar('Y', stars * 2 + 1); // i think it should be asterisk / 'Y'

//    ft_n_putchar('Y', DOOR_SIZE(size)); // i think it should be asterisk
  }
  ft_putchar('\\');
  ft_putchar('\n');
}

void  sastantua(int size)
{
  int i;
  int counter;
  int tier;
  int line;
  int stars[NB_LINES(size)]; // 25 rows for size 5

  i = 0;
  tier = 1;
  counter = 0;

  while (tier++ <= size) // up to 5 tiers for size 5
  {
    line = 1; // keeps track of # of lines per tier

    while (line++ < (tier + 2)) // note, tier 3 = 3 + 2; tier 1 = 1 + 2.
    {
      stars[i] = counter; // keep track of # of stars for each row.
      counter++;
      i++;
    }
    counter += ((tier % 2) ? (tier - 1) / 2 : tier / 2) + 1;
  }

  //printf("\ntier:  %d", tier);

  i = -1;
  while (++i < NB_LINES(size)) // 3 rows for size 1
  {
    ft_build_rows(i, size, stars[i], stars[NB_LINES(size) - 1] - stars[i]);
  } // 3 - 1 => stars[2] - stars[0] = 2 - 0 = 2
}

int main()
{
  sastantua(7);
}


//
