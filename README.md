# DailyCodingProblem
A weather station has measured temperatures during the last N days and the N-1 nights between them. The measurements are given in an array of integers, named 'temperatures', listed in chronological order, starting with the day.
# For example, temperatures = [10, 0, 2, -1, 4] means that the measurements were:

• 10 degrees during the first day;

• 0 degrees during the first night;

• 2 degrees during the second day;

• -1 degree during the second night;

• 4 degrees during the last day.

The task is to calculate the number of warm nights during the recorded period. A night is warm if the temperature was not more than 5 degrees colder than the temperatures measured on both the preceding and following days. In the example above, the second night was warm, but the first night was not.

Write a function:
that, given an array, named 'temperatures', returns the number of warm nights.
