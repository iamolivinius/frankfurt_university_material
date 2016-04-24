#include <stdio.h>
#include <sys/time.h>

int main(int argc, char const *argv[]) {
    struct timeval start, end;

    gettimeofday(&start, NULL);

    while (getchar() != '\n');
    while (getchar() != '\n');

    gettimeofday(&end, NULL);

    long elapsed_time = (end.tv_sec*1e6 + end.tv_usec) - (start.tv_sec*1e6 + start.tv_usec);

    printf("Laufzeit: %ldms\n", elapsed_time / 1000);
    return 0;
}
