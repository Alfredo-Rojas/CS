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

////////Program that take arguments at console
// #include <cs50.h>
// #include <stdio.h>

// int main(int argc, string argv[])
// {
//     if (argc == 2)
//     {
//         printf("hello, %s\n", argv[1]);
//     }
//     else
//     {
//         printf("hello, world\n");
//     }
// }

///////////String Comparison/////

// #include <cs50.h>
// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//   string names[4] = {"EMMA", "RODRIGO", "BRIAN", "DAVID"};

//   for (int i = 0; i < 4; i++)
//   {
//     if (strcmp(names[i], "EMMA") == 0)
//     {
//       printf("Found\n");
//       return 0;
//     }
//   }
//   printf("Not found\n");
//   return 1;
// }

/////////////Custom data type/////////

// #include <cs50.h>
// #include <stdio.h>
// #include <string.h>

// //Struct is like a container to put differents data types in c
// typedef struct
// {
//   string name;
//   string number;
// }
// person;

// int main(void)
// {
//   person people[4];

//   people[0].name = "EMMA";
//   people[0].number = "617-555-0100";

//   people[1].name = "RODRIGO";
//   people[1].number = "617-555-0101";

//   people[2].name = "BRIAN";
//   people[2].number = "617-555-0102";

//   people[3].name = "DAVID";
//   people[3].number = "617-555-0103";

//   // string name[4] = {"EMMA", "RODRIGO", "BRIAN", "DAVID"};
//   // string numbers[4] = {"617-555-0100", "617-555-0101", "617-555-0102", "617-555-0103"};

//   for (int i = 0; i < 4; i++)
//   {
//     if (strcmp(people[i].name, "EMMA") == 0)
//     {
//       printf("%s\n", people[i].number);
//       return 0;
//     }
//   }
//   printf("Not found");
//   return 0;
// }

///////////Recursion//////

// #include <cs50.h>
// #include <stdio.h>

// void draw(int h);

// int main(void)
// {
//   int height = get_int("Height: ");

//   draw(height);
// }

// void draw(int h)
// {
//   for (int i = 1; i <= h; i++)
//   {
//     for (int j = 1; j <= i; j++)
//     {
//       printf("#");
//     }
//      printf("\n");
//   }
// }

//Recursion implementation
// void draw(int h);

// int main(void)
// {
//   int height = get_int("Height: ");

//   draw(height);
// }

// void draw(int h)
// {
//   if (h == 0)
//   {
//     return;
//   }

//   draw(h-1);

//   for (int i = 0; i < h; i++)
//   {
//     printf("#");
//   }
//   printf("\n");
// }

//////Memory/////

// #include <stdio.h>

// int main(void)
// {
//   int n = 50;
//   // printf("%i\n", n);
//   // printf("%p\n", &n); //we use & to get the address of n(pointer)
//   // printf("%i\n", *&n); //we use * to go to that address
//   int *p = &n;        //This means this the pointer/address of an interger
//   printf("%p\n", p);  // print the address of p
//   printf("%i\n", *p); // print the value store in n

//   char *s = "EMMA";
//   printf("%s\n", s);     // print the value of s("EMMA")
//   printf("%p\n", s);     // print the address of s(0x400694)
//   printf("%p\n", &s[0]); // print the address of the first character in s(0x400694) wich is the same address of s
//   printf("%p\n", &s[1]);
//   printf("%p\n", &s[2]);
//   printf("%p\n", &s[3]);

//   printf("%c\n", *s);       // print the letter E (first char in the EMMA string)
//   printf("%c\n", *(s + 1)); // print the letter M (first second char in the string)
//   printf("%c\n", *(s + 2));
//   printf("%c\n", *(s + 3));
// }

///////Memory allocation///////
// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>
// #include <stdlib.h>
// #include <cs50.h>

// int main(void)
// {
//     char *s = get_string("S: ");
//     char *t = malloc(strlen(s) + 1);//Means then input lenght + the null(\0) char at the end to denote the end of the string

//     strcpy(t, s);//copy the chars in s to t(different address in memory)

//     t[0] = toupper(t[0]);

//     printf("%s\n", s);
//     printf("%s\n", t);

//     free(t);//free the memory allocated y malloc
// }
