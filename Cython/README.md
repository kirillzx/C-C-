## Cython optimization
In this example I have used the Leggendre polynomial, in three steps. The first is the initial recursion. The second step is cython optimization without typification and for the last step was specified data types.

## Test
for check it, just type the following
``` python
%timeit function()
````
## Results

Function|Time
---|---
leg|716 ms +- 16.5 ms
leg1|306 ms +- 5.9 ms
leg2|154 ms +- 1.05 ms
