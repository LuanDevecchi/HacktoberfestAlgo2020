#include <time.h>
#include <stdlib.h>

int main()
{
  printf("Hey my friend can you guess the number? It's beetween 0 - 5\n");
  
  int rand_number = rand() % 6;

  int the_number = 0;

  scanf("%d", &the_number);

  if(rand_number == the_number)
	  printf("Nice! You're right!\n");
  else
	  printf("You're wrong try again!\n");
  
  return 0;
}
