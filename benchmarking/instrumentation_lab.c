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
    clock_t total_reduce;
    double build_seconds;
    double process_seconds;
    double reduce_seconds;
    clock_t total_time;
    double total_seconds;

    start_time = clock();
    build_dataset();
    end_time = clock();
    build_start = start_time;
    build_end = end_time;
    start_time = clock();
    process_dataset();
    end_time = clock();
    process_start = start_time;
    process_end = end_time;
    start_time = clock();
    checksum = reduce_checksum();
    end_time = clock();
    reduce_start = start_time;
    reduce_end = end_time;

    total_time = reduce_end - build_start;
    total_build = build_end - build_start;
    total_process = process_end - process_start;
    total_reduce = reduce_end - reduce_start;

    total_seconds = (double)total_time / CLOCKS_PER_SEC;
    build_seconds = (double)total_build / CLOCKS_PER_SEC;
    process_seconds = (double)total_process / CLOCKS_PER_SEC;
    reduce_seconds = (double)total_reduce / CLOCKS_PER_SEC;
    
    if (checksum == 0ul)
	printf("impossible\n");

    printf("TOTAL seconds: %.6f\n", total_seconds);
    printf("BUILD_DATA seconds: %.6f\n", build_seconds);
    printf("PROCESS seconds: %.6f\n", process_seconds);
    printf("REDUCE seconds: %.6f\n", reduce_seconds);
	    /* Required output (exact format, no extra lines):
	     * TOTAL seconds: <float>
	     * BUILD_DATA seconds: <float>
	     * PROCESS seconds: <float>
	     * REDUCE seconds: <float>
	     */

    return 0;
}
