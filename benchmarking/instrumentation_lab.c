#include <stdio.h>
#include <time.h>

#define DATASET_SIZE 50000
#define SEED_VALUE 42u

static int dataset[DATASET_SIZE];

static unsigned int next_value(unsigned int *state)
{
    *state = (*state * 1103515245u) + 12345u;
    return *state;
}

static void build_dataset(void)
{
    unsigned int state;
    int i;

    state = SEED_VALUE;

    for (i = 0; i < DATASET_SIZE; i++)
        dataset[i] = (int)(next_value(&state) % 100000);
}

static void process_dataset(void)
{
    int i;
    int v;

    for (i = 0; i < DATASET_SIZE; i++)
    {
        v = dataset[i];
        v = (v * 3) + (v / 7) - (v % 11);
        if (v < 0)
            v = -v;
        dataset[i] = v;
    }
}

static unsigned long reduce_checksum(void)
{
    unsigned long sum;
    int i;

    sum = 0;
    for (i = 0; i < DATASET_SIZE; i++)
        sum = (sum * 131ul) + (unsigned long)dataset[i];

    return sum;
}

int main(void)
{
    unsigned long checksum;
    clock_t start_time;
    clock_t end_time;
    clock_t build_start;
    clock_t build_end;
    clock_t process_start;
    clock_t process_end;
    clock_t reduce_start;
    clock_t reduce_end;
    clock_t total_build;
    clock_t total_process;
    clock_t totale_reduce;
    double build_seconds;
    double process_seconds;
    double reduce_seconds;
    clock_t total_time;
    double total_seconds;

    start_time = clock();
    build_dataset();
    end_time = clock();
    build_start_time = start_time;
    build end_time = end_time;
    start_time = clock();
    process_dataset();
    end_time = clock();
    process_start_time;
    process_end_time;




    if (checksum == 0ul)
	printf("impossible\n");

    printf("Total time is: %.6f\n", reduce_checksum + process_dataset, build_dataset);
    printf("Build Dataset time: %.6f\n", build_dataset);
    printf("Process Dataset time: %.6f\n", reduce_checksum);


    /* Required output (exact format, no extra lines):
     * TOTAL seconds: <float>
     * BUILD_DATA seconds: <float>
     * PROCESS seconds: <float>
     * REDUCE seconds: <float>
     */

    return 0;
}
