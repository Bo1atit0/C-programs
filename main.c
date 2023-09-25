#include <stdio.h>

int main()
 {
  char name;
  int test1;
  int test2;

printf("Input your name: ");
  
  printf("Input your name and test scores: ");
  int x =  scanf("%d %d", &test1, &test2);
  
  if (x != 3) {
    printf("Error reading input. Please provide valid test scores.\n");
    return 1; // Return an error code to indicate a problem.
  }
  
  printf("Name: %s\n", name);
  printf("Test 1 score: %d\n", test1);
  printf("Test 2 score: %d\n", test2);
  
  return 0;
}
