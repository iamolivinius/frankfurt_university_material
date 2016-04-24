#include <stdio.h>
#include <time.h>
#include <sys/time.h>

#define NUM_OF_ELEMS 5

int main(int argc, char const *argv[]) {
    struct timeval now;
    struct timeval last_run;
    int num_iterations;
    struct tm *time;

    int intervals[NUM_OF_ELEMS] = {1000, 500, 250, 50, 1};

    gettimeofday(&now, NULL);
    gettimeofday(&last_run, NULL);

    for (int i = 0; i < NUM_OF_ELEMS; i++) {
        num_iterations = 0;

        while (num_iterations < 7) {
            gettimeofday(&now, NULL);
            long elapsed_time = ((now.tv_sec*1e6 + now.tv_usec) - (last_run.tv_sec*1e6 + last_run.tv_usec));

            if (elapsed_time > intervals[i] * 1000) {
                gettimeofday(&last_run, NULL);
                time = localtime((time_t *)&now);
                printf("Current local time: %02d:%02d:%02d:%02ld\n", time->tm_hour,
                                                                    time->tm_min,
                                                                    time->tm_sec,
                                                                    now.tv_usec / 1000);
                num_iterations++;
            }
        }
    }

    return 0;
}
