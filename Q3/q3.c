#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main() {
    int fd;
    char buffer[100];

    fd = open("employee.txt", O_CREAT | O_RDWR, 0644);

    if (fd < 0) {
        perror("open");
        return 1;
    }

    write(fd, "101 John Manager\n", 17);
    write(fd, "102 Alice Developer\n", 20);

    lseek(fd, 0, SEEK_SET);

    read(fd, buffer, sizeof(buffer) - 1);
    buffer[37] = '\0';

    printf("Employee Records:\n%s", buffer);

    lseek(fd, 17, SEEK_SET);

    write(fd, "102 Alice SeniorDev\n", 20);

    close(fd);

    return 0;
}
