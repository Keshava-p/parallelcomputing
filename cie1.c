#include <stdio.h>
#include <time.h>

int main() {
    // Variable to store start and end time
    clock_t start_time, end_time;
    double execution_time;

    // Record the start time
    start_time = clock();

    // 
    // This is the code segment to be measured
    //
    for (int i = 0; i < 1000000000; i++) {
        // A dummy operation to simulate work
    }

    // Record the end time
    end_time = clock();

    // Calculate the total execution time
    // Subtracting start time from end time and dividing by CLOCKS_PER_SEC
    execution_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    // Display the execution time
    printf("Execution time: %f seconds\n", execution_time);

    return 0;
}