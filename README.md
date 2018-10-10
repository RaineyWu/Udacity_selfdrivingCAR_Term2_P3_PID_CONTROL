# CarND-Controls-PID
Self-Driving Car Engineer Nanodegree Program

---

## refletion

Each component's effect is as follows:

1. P part:  generate the steering value opposite the ETC.
2. I part: in order to deal with system bias
3. D part: in order to deal with oscillates.

my implemention  the final hyperparameters (P, I, D coefficients):

i chose manually  tuning. Set I D pard 0.0 tuning P, get the acceptable results and do not change it anymore, then tuning D, and at last tune I.

my final choice is :

P : 0.125

I  : 0.0001

D: 0.5

## demo

demo is in ./demo