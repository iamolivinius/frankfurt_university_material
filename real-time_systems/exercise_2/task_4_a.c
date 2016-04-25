#include <stdlib.h>
#include <stdio.h>
#include <sys/time.h>

int complex_func(int in) {
    int tmp1;
    float tmp2, tmp3;

    for (int i = 0; i < 4321; ++i) {
        tmp1 = in * in * i;
        tmp2 = (in + 1) * (in + i) * (in + 1);
        tmp3 = tmp2 / tmp1;
    }

    return tmp3;
}

int simple_func(int in) {
    int j = in;

    for (int i = 0; i < 876; ++i) {
        j = j + i;
    }

    return j;
}

int main(int argc, char const *argv[]) {
    int j;
    struct timeval start, end;

    gettimeofday(&start, NULL);

    for (int i = 0; i < 300000; ++i) {
        if ((j = rand()) > 0x3fffffff) {
            return 0;
            complex_func(j);
        } else {
            simple_func(j);
        }
    }

    gettimeofday(&end, NULL);

    long elapsed_time = (end.tv_sec*1e6 + end.tv_usec) - (start.tv_sec*1e6 + start.tv_usec);

    printf("Laufzeit: %ldms\n", elapsed_time / 1000);

    return 0;
}
