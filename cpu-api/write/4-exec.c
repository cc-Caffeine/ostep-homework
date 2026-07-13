#include <stdio.h>
#include <unistd.h>

int main() {
  char *args[] = {"ls", "-l", NULL};
  char *env[] = {"PATH=/bin", NULL};

  // int rcve = fork();
  // if (rcve == 0) {
  //   execve("/bin/ls", args, env);
  // }

  // int rcl = fork();
  // if (rcl == 0) {
  //   execl("/bin/ls", "ls", "-l", NULL);
  // }

  // int rcle = fork();
  // if (rcle == 0) {
  //   execle("/bin/ls", "ls", NULL, env);
  // }

  // int rclp = fork();
  // if (rclp == 0) {
  //   execlp("ls", "ls", "-l", NULL);
  // }

  // int rcv = fork();
  // if (rcv == 0) {
  //   execv("/bin/ls", args);
  // }

  // int rcvp = fork();
  // if (rcvp == 0) {
  //   execvp("ls", args);
  // }

  int rcvpe = fork();
  if (rcvpe == 0) {
    // 有 execvpe() 这个东西吗?
  }
  return 0;
}
