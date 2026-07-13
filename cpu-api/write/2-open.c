#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main() {
  char *textParent = "Hello parent\n";
  char *textChild = "Hello child\n";

  int fd = open("./text.txt", O_CREAT | O_WRONLY, 0644);
  if (fd == -1) {
    perror("open");
  }

  int rc = fork();
  if (rc < 0) {
    fprintf(stderr, "fork failed\n");
  } else if (rc == 0) {
    write(fd, textChild, 13);
  } else {
    write(fd, textParent, 13);
  }

  return 0;
}

// 都可以访问text.txt
