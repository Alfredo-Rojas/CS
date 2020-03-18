// #include <stdio.h>
// #include <cs50.h>

//////to compile de program enter: make <filename>
//////to run the program: ./filename

// int main(void)
// {
//   printf("hello, world\n");
// }

// if (x < Y)
// {
//   printf("x is less than y\n");
// }
// else if (x > y)
// {
//   printf("x is greater than y\n");
// }
// else
// {
//   printf("x is equal to y\n");
// }

//////While looop
// int i = 0;
// while (i < 50) {
//     printf("%i hello, world\n", i);
//     i++;
// }

//////For looop
// for (int i = 0;i <= 50;i++) {
//   printf("%i hello, world\n", i);
// }

// int main(void) {

//     string name = get_string("What is your name?\n");
//     printf("hello, %s\n", name);
// }

// int main(void) {

//     string name = get_string("What is your name?\n");
//     printf("hello, %s\n", name);
// }

///////Small program "How many days old"

// int main(void) {

//   int age = get_int("What's your age?\n");
//   int daysOld = age * 365;
//   printf("You are at least %i days old.\n", daysOld);
// }

////////Small program "What's the price"

// int main(void)
// {

//   float price = get_float("What's the price?\n");
//   printf("Your total is %.2f.\n", price * 1.07);
// }

//////Even or Odd

// int main(void) {
//   int n = get_int("n: ");
//   if (n % 2 == 0) {
//     printf("The number %i is even\n", n);
//   } else {
//     printf("The number %i is odd\n", n);
//   }
// }

///////Conditions

// int main(void) {

//   //Prompt user for x
//   int x = get_int("x: ");

//   //Prompt user for y
//   int y = get_int("y: ");

//   //Compare x and y
//   if (x < y) {
//     printf("x is less than y\n");
//   } else {
//     printf("x is more than y\n");
//   }
// }

///Agree

// int main(void) {

//   //Promp user to agree
//   char c = get_char("Do you agree?\n");

//   //Check whether agreed
//   if (c == 'y' || c == 'Y') {
//     printf("Agreed.\n");
//   } else if (c == 'n' || c == 'N') {
//     printf("Not agreed.\n");
//   }
// }

////////Creating a function to get positives intergers
// int get_positive_int(void);

// int main(void) {
//    get_positive_int();
// }

// int get_positive_int(void) {
// int n;
// do {
//     n = get_int("Enter a positive interger: \n");
// }
// while (n < 1);
//     return n;
// }

/////////Changing a String input from lowercase to uppercase
// #include <cs50.h>
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main(void)
// {
//     string s = get_string("Input: ");
//     printf("Output: ");
//     for (int i = 0, n = strlen(s); i < n; i++)
//     {
//         printf("%c", toupper(s[i]));

//         //Low level solution
//         // if (s[i] >= 'a' && s[i] <= 'z')
//         // {
//         //     printf("%c", s[i] - 32);
//         // } else
//         // {
//         //     printf("%c", s[i]);
//         // }
//     }
//     printf("\n");
// }