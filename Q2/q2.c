#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>
#include <stdlib.h>

int main() {
    pid_t pid = fork();

    if (pid < 0) {
        printf("Fork failed\n");
        return 1;
    }

    if (pid == 0) {
        printf("Child Process (PID=%d) is running...\n", getpid());
        sleep(10);
        printf("Child Process Finished.\n");
        exit(0);
    } else {
        printf("Parent Process (PID=%d)\n", getpid());

        sleep(3);

        printf("Terminating child process...\n");
        kill(pid, SIGTERM);

        wait(NULL);

        printf("Zombie process prevented.\n");
    }

    return 0;
}
