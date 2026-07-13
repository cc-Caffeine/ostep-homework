#include <stdio.h>
#include <unistd.h>
int main() {
  int fd[2];
  // 用pipe读写, 找GPT问的答案...
  pipe(fd);

  int rc = fork();

  if (rc == 0) {
    close(fd[0]);
    printf("hello\n");
    write(fd[1], "x", 1);

    close(fd[1]);

  } else {
    close(fd[1]);
    char buf;
    read(fd[0], &buf, 1);
    printf("goodbye\n");

    close(fd[0]);
  }

  return 0;
}
