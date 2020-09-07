#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string answer = get_string("What is your name?");
    printf("hello, %s\n", answer);
}

// int main(void)
// {
//     printf("Hello WOrld\n");
// }

//How to execute
// clang hello.c
// ./a.out

//how to rename ./a.out
// clang -o hello hello.c


//another way to execute
// make hello
//hello


//how to rename a file
//mv hello.c goodbye.c