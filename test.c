#include <cs50.h>
#include <stdio.h>

void greet_user(void);
int display_menu(void);
void perform_action(int number);
void display_recipes(void);
void add_recipe(string recipe);

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
    add_recipe("Salad");
  }
  else if (number == 2)
  {
    display_recipes();
  }
  else
  {
    printf("Sorry, this action is not implemented yet\n");
  }
}

void display_recipes()
{
  printf("You have %i recipes in your Cookbook:\n", RECIPES_COUNT);
  for (int i = 0; i < RECIPES_COUNT; ++i)
  {
    printf("%i - %s\n", i + 1, RECIPES[i]);
  }
  printf("\n");
}

void add_recipe(string recipe)
{
  // RECIPES_COUNT += 1;
  int new_array_length = RECIPES_COUNT + 1;
  string new_array[new_array_length];
  for (int i = 0; i < RECIPES_COUNT; ++i)
  {
    new_array[i] = RECIPES[i];
  }
  new_array[new_array_length - 1] = recipe;
  for (int i = 0; i < new_array_length; ++i)
  {
    printf("%i - %s\n", i + 1, new_array[i]);
  }
}
