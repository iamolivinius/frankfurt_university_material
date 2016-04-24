#include <stdio.h>
#include <sys/time.h>

int main(int argc, char const *argv[]) {
    struct timeval start, end;
    int tmp;
    float tmpf;
    long duration = 0;

    gettimeofday(&start, NULL);
    for (int i = 0; i < 40000000; i++) {
        tmp = i + i;
    }
    gettimeofday(&end, NULL);
    duration += (end.tv_sec*1e6 + end.tv_usec) - (start.tv_sec*1e6 + start.tv_usec);
    printf("int: %ldms\n", duration / 1000);

    gettimeofday(&start, NULL);
    for (int i = 0; i < 40000000; i++) {
        tmpf = (float)i + (float)i;
    }
    gettimeofday(&end, NULL);
    duration += (end.tv_sec*1e6 + end.tv_usec) - (start.tv_sec*1e6 + start.tv_usec);
    printf("float: %ldms\n", duration / 1000);

    return 0;
}
