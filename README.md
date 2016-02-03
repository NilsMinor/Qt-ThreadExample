# Qt-ThreadExample
This is a straight forward example on how to use QThread in a Qt application. It is based on the workerThreads.
The Goal was to test how QThreads work and how the improve the performance of an application.

Therefor this example provides two subclasses doing something which needs more cpu-time. 
One is generating random numbers and fill up an array with it [1000*1000], the other subclass simluates a manipulation 
on this array and doing some double calculations. The
