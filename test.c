#include <cs50.h>
#include <stdio.h>

void greet_user(void);
int display_menu(void);

int main(void)
{
  greet_user();
  int answer;
  do
  {
    answer = display_menu();
  }
  while(answer != 4);
}

void greet_user(void)
{
  printf("---------------------------\n");
  printf("--- Welcome to Cookbook ---\n");
  printf("---------------------------\n");
}

int display_menu(void)
{
  printf("What do you want to do next?\n");
  printf("1- Add a new recipe\n");
  printf("2- List all recipes\n");
  printf("3- Remove a recipe\n");
  printf("4- Exit\n");
  return get_int("> ");
}
