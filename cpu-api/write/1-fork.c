#include <stdio.h>
#include <unistd.h>

int main() {
  int x = 100;
  int rc = fork();
  if (rc < 0) {
    fprintf(stderr, "fork failed\n");
  } else if (rc == 0) {
    printf("child: %d\n", x);
    x = 50;
    printf("child: %d\n", x);
  } else {
    printf("parent: %d\n", x);
    x = 50;
    printf("parent: %d\n", x);
  }
  return 0;
}
