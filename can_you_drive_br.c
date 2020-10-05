#include <stdio.h>

// You have the age to drive a car on Brazil? Let's now?

int main()
{
 int age = 0;
  printf("What's you age?\n");
  scanf("%d", &age);

  if(age > 18)
	  printf("Yes you can drive a car on Brazil\n");
  else 
	  printf("Oh no, that's sad. You cant drive a car on Brazil\n);

  return 0;

}
