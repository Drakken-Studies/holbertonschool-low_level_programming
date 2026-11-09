Benchmarking Report

Measurement Methodology

For this exercise, I worked through three different benchmarking tasks in C to get a better understanding of how long programs take to run and how different approaches can affect performance.
The first task was a simple baseline loop running 100 million iterations over 3 recorded runs. The second compared two different algorithms, a naive approach and a single-pass approach. The final task involved measuring how long it took to build a dataset, process the information, and calculate a checksum.
For the instrumentation lab, I used clock() to record the processor time before and after each task, then divided the difference by CLOCKS_PER_SEC to convert it into seconds.
I recorded the results from each program so I could compare them and see what was happening.

Observed Performance Differences
The baseline loop completed 100 million iterations in and average of 0.069868 seconds, I was suprised, how quickly it completed that many iterations.
The biggest difference was in the algorithm comparison. The naive algorithm took 0.930994 seconds, while the single-pass algorithm took just 0.000030 seconds. Thats approximatelyy 32,000 times longer on average. It aslo uses nested loops, which means it repeatedly checks the same data, while the single-pass algorithm only checks each value once. This explains the big difference in average execution times, with the naive algorithm taking 0.938681 seconds compared to just 0.000029 seconds for the single-pass approach.
That's a massive difference, with the naive algorithm taking considerably longer based on these results.
I did notice that the algorithms produced different outputs. The naive algorithm returned 625025000, while the single-pass algorithm returned 25000.
For the instrumentation lab, the total execution time was 0.000361 seconds.
Building the dataset took 0.000136 seconds, processing took 0.000182 seconds, and calculating the checksum took 0.000043 seconds. Checksum calculation appeared to be the quickest task, must be good at math!

Relation Between Runtime and Energy Consumption:
This exercise forced me to consider how execution time might relate to energy consumption.
In theory, if a program takes longer to complete a task, it could use more energy because the processor is working for longer. However, that also depends on how much power the computer is drawing as well.
Based on the algorithm comparison task, the naive approach ran significantly longer than the single-pass approach, this might mean there could be a difference in energy consumption, but didn't actually measure power usage, so I can't say for sure how much either consumed.

Limitations of the Experiment:
I believe there were a few limiting factors with this project.
- Although I ran the benchmarks three times, there were small differences in execution times between runs. Things like background processes and other system activity could affect these measurements. Some of the recorded times were also incredibly small, meaning even minor timing differences could have an impact on the results.
- The naive and single-pass algorithms produced different results because the nested loops repeatedly counted some values. This makes it difficult to compare them directly, as they weren't actually performing the same amount of work.
- I didn't measure actual energy consumption, so any connection between execution time and energy use is still my own speculation rather than something my testing proved.

Practical Engineering Takeaway:
The biggest thing I've taken away from these exercises is that the way we write code can make a significant difference to how long it takes to run.
The algorithm comparison showed the biggest difference in execution time, while the instrumentation lab helped me understand how to measure individual parts of a program rather than just looking at the total time.
I also learned that getting a faster result doesn't automatically mean the code is better. It still needs to produce the correct output.
Going forward, I'd want to run benchmarks multiple times, check that the results are correct, and use the measurements to work out where improvements would actually be useful.
