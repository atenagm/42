#include <stdio.h>

int main(void)
{
  char name[20];
  int age;

  printf("introdu numele:\n");
  scanf("%s", name);
  printf("introdu virsta:\n");
  scanf("%d", &age);
  printf("nume:%s , virsta %d\n", name ,age);
}
