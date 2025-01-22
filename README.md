Approach
Read Historical Data: The historical data is stored in a file named "trainingdata.txt". Each line contains two values: the charging time and the corresponding battery life.

Determine Maximum Battery Life: From the historical data, find the maximum battery life recorded. This value indicates the point beyond which the battery life does not increase regardless of charging time.

Calculate Threshold: The threshold is determined by dividing the maximum battery life by 2. This threshold helps us determine the point up to which the battery life increases linearly with charging time.

Predict Battery Life: For a given charging time:

If the charging time is less than or equal to the threshold, the battery life is twice the charging time.

If the charging time exceeds the threshold, the battery life is the maximum battery life observed in the historical data.
