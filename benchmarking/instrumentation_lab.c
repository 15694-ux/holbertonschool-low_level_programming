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
    process_start_tim = start_time;
    process_end_time = end_time;
    start_time = clock();
    checksum = reduce_checksum();
    end_time = clock();
    reduce_start_time = start_time;
    reduce_end_time = end_time;

    total_build_time = build_end_time - build_start_time;
    total_process_time = process_end_time - process_start_time;
    total_reduce_time = reduce_end_time - reduce_start_time;

    build_seconds = (double)total_build_time / CLOCKS_PER_SEC;
    process_seconds = (double)total_process_time / CLOCKS_PER_SEC;
    reduce_seconds = (double)totale_reduce_time / CLOCKS_PER_SEC:
    
    if (checksum == 0ul)
	printf("impossible\n");

    printf("TOTAL seconds:: %.6f\n";
    printf("BUILD_DATA seconds: %.6f\n";
    printf("PROCESS seconds: %.6f\n";
    printf("REDUCE seconds: %.6f\n";
	    /* Required output (exact format, no extra lines):
	     * TOTAL seconds: <float>
	     * BUILD_DATA seconds: <float>
	     * PROCESS seconds: <float>
	     * REDUCE seconds: <float>
	     */

    return 0;
}
