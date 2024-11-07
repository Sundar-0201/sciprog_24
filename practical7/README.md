This is Practical 7


This contains all the .c files for practical 7


practical7.c comparing the true value and estimate of the exponential function.


Output:

Enter the required polynomial order: 15
 1.0000000000
 0.5000000000
 0.1666666667
 0.0416666667
 0.0083333333
 0.0013888889
 0.0001984127
 0.0000248016
 0.0000027557
 0.0000002756
 0.0000000251
 0.0000000021
 0.0000000005
 0.0000000008
 0.0000000005

e estimated: 2.7182818301
e actual: 2.7182818285
difference: 0.0000000016


Explanation of Output Behavior
As the polynomial order increases, the initial estimates improve. However, beyond a certain point, the estimates begin to worsen due to floating-point precision limitations. Higher-order terms involve very small values, and adding these small terms can lead to rounding errors, reducing the accuracy of the estimate.
