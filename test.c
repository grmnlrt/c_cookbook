#include <cs50.h>
#include <stdio.h>

void greet_user(void);
int display_menu(void);
void perform_action(int number);
void display_recipes(void);

const int RECIPES_COUNT = 2;
const string RECIPES[RECIPES_COUNT] = { "Carrot Cake", "Brownie" };

int main(void)
{
  greet_user();
  int answer;
  do
  {
    answer = display_menu();
    perform_action(answer);
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

void perform_action(int number)
{
  if (number == 1)
  {
    display_recipes();
  }
  else
  {
    printf("Sorry, this action is not implemented yet\n");
  }
}

void display_recipes(void)
{
  printf("You have %i recipes in your Cookbook:\n", RECIPES_COUNT);
  for (int i = 0; i < RECIPES_COUNT; ++i)
  {
    printf("%i - %s\n", i + 1, RECIPES[i]);
  }
  printf("\n");
}
