#include <stdio.h>
#include <unistd.h>

int main() {
  int rc = fork();
  if (rc == 0) {
    close(STDOUT_FILENO);
    // no output
    printf("hello child\n");
  }

  return 0;
}
