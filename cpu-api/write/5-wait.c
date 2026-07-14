#include <stdio.h>
#include <sys/wait.h>
#include <threads.h>
#include <unistd.h>

int main() {
  int rc = fork();
  if (rc == 0) {
    int rc_wait = wait(NULL);
    printf("hello child\n");
  } else {
    // int rc_wait = wait(NULL);
    printf("hello parent\n");
  }

  return 0;
}
