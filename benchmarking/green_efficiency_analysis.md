# ###Green Efficiency Analysis Report###

## ##Methodology##

My task for this project was to utilize the provided code to determine the time each process took to complete, then to have that data printed for documentation for each individual process as well as the overall time.
First step was to identify which functions or modules were needed. Having been given the requirement of using 'clock()' and 'clock_t' from '<time.h>', looking into the function of these made it apparent that it would be used to track the start and end times of each process as it was called on. Once the times were documented and stored, using 'CLOCKS_PER_SEC' and the '%.6f' formatting, it printed the times for all processes including total time down to the sixth decimal place allowing for a more accurate idea of the process times.



## ##Observed Performance Differences##

I ran the program three times to get an idea on how the processes would compare after concurrent runs.


Pass 1
'TOTAL seconds: 0.000825'
'BUILD_DATA seconds: 0.000301'
'PROCESS seconds: 0.000315'
'REDUCE seconds: 0.000207'

The results of pass one, above, acted as a baseline for each of the following runs.

Pass 2
'TOTAL seconds: 0.000743'
'BUILD_DATA seconds: 0.000291'
'PROCESS seconds: 0.000307'
'REDUCE seconds: 0.000143'

The results of pass two, above, showed an marginal improvement across the board but most visibily with the reduce.

Pass 3
'TOTAL seconds: 0.000742'
'BUILD_DATA seconds: 0.000287'
'PROCESS seconds: 0.000319'
'REDUCE seconds: 0.000135'

The result of pass three, above, showed that while the build and reduce times lowered, the process time actually took longer than the first and second passes.

In summary of the observation:

Pass one was the slowest of the three.
Passes two and three were nearly the same.
The main difference I noticed was the reduction in process time from pass one to two being faster, then pass two to three being slower.



## ##Relation Between Runtime vs. Energy Consumption##

As this task was to calculate the time it took for each process to run and line that up with energy consumption, my findings are as follows.
Across the three tasks, the overall time of each pass was lower each time the program ran, however the time from pass one 'PROCESS seconds: 0.000315', to pass two 'PROCESS seconds: 0.000307', and pass three 'PROCESS seconds: 0.000319', showed that while the processing time from pass one was improved upon in pass two, the process time in pass three was slower than pass one. 



## ##Limitations##

All tests for this particular task were executed from a sandbox, put together and processed remotely by myself. This would leave the testing pool particularly low and may not reflect testing on a wider range of systems.
As I only tested the program three times, the testing doesn't have as broad a pool for results as would be most informative.
As this test was exclusively based around processing times, the processing time vs. energy consumption rates are purely speculative and to be taken with a grain of salt.



## ##Key Engineering Takeaway##

The idea behind this task was to track the time it took to for processes to run and identify which process took the longest to complete. It could be speculated that longer processing times leads to higher energy consumption. For a more thorough result it would be a good idea to implement changes to also track energy consumption, however, unless that is requested it would be best practice to attempt to optimize the code in an effort to reduce processing time and by extension reduce energy consumption per pass for future testing.


Authored by Jack Brincat.
