#include <stdio.h>
#include <sys/wait.h>
#include <threads.h>
#include <unistd.h>

int main() {
  int rc = fork();
  if (rc == 0) {
    printf("hello child\n");
  } else {
    int rc_wait = waitpid(0, NULL, 0);
    printf("hello parent\n");
  }

  return 0;
}
