#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
  if (argc != 2)
  {
    printf("Error, invalid enter\n");
    printf("1\n");
    return 1;
  }

  const int KEY = atoi(argv[1]);
  // printf("hello, %i\n", KEY);
  string plainText = get_string("Enter text to be cipher: ");

  printf("cipherText: ");

  for (int i = 0, n = strlen(plainText); i < n; i++)
  {
    if (!isalpha(plainText[i]))
    {
      printf("%c", plainText[i]);
    }
    else if (plainText[i] > 'Z')
    {
      printf("%c", (plainText[i] - 'a' + KEY) % 26 + 'a');
    }
    else
    {
      printf("%c", (plainText[i] - 'A' + KEY) % 26 + 'A');
    }
  }
  printf("\n");
}