# ###Green Efficiency Analysis Report###

## ##Methodology##

My task for this project was to utilize the provided code to determine the time each process took to complete, then to have that data printed for documentation for each individual process as well as the overall time.
First step was to identify which functions or modules were needed. Having been given the requirement of using 'clock()' and 'clock_t' from '<time.h>', looking into the function of these made it apparent that it would be used to track the start and end times of each process as it was called on. Once the times were documented and stored, using 'CLOCKS_PER_SEC' and the '%.6f' formatting, it printed the times for all processes including total time down to the sixth decimal place allowing for a more accurate idea of the process times.

__

## ##Observed Performance Differences##

I ran the program three times to get an idea on how the processes would compare after concurrent runs.


Pass 1
'TOTAL seconds: 0.000825
BUILD_DATA seconds: 0.000301
PROCESS seconds: 0.000315
REDUCE seconds: 0.000207'

The results of pass one, above, acted as a baseline for each of the following runs.

Pass 2
'TOTAL seconds: 0.000743
BUILD_DATA seconds: 0.000291
PROCESS seconds: 0.000307
REDUCE seconds: 0.000143'

The results of pass two, above, showed an marginal improvement across the board but most visibily with the reduce.

Pass 3
'TOTAL seconds: 0.000742
BUILD_DATA seconds: 0.000287
PROCESS seconds: 0.000319
REDUCE seconds: 0.000135'

The result of pass three, above, showed that while the build and reduce times lowered, the process time actually took longer than the first and second passes.


