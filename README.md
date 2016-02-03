# Qt-ThreadExample
This is a straight forward example on how to use QThread in a Qt application. It is based on the workerThreads.
The Goal was to test how QThreads work and how the improve the performance of an application.

Therefor this example provides two subclasses doing something which needs more cpu-time. 
One is generating random numbers and fill up an array with it [1000*1000], the other subclass simluates a manipulation 
on this array and doing some double calculations. 

Usage:
Start the application.
- One time enter frequency (50 for example means loop is called 50 times per second) and don't click on Threading and it won't use threads. It will by slow.
- Second time enter same fequency like before. But now click on Threading and the application will now use threads. The 4 Timeoutputs will show the loop time which is equal to the inverse of the frequency so 50 Hz = 20 ms. The application is now faster.

Check the spreaded workload by observing the threads and cpu times on your machine.
If you use Linux or os x start terminal and enter top. In linux you can see the odd cores by pressing keyboard number 1, in os x there is a gui tool like system monitor (in german = Aktivitätsanzeige). There you can observe core workload. By not using threads, workload won't reach more then 100% since the thread system can not spread the workload. This will lead to slow down the application! By using threads the single tasks in the application are moved into threads. The system can spread the workload by issue them on the available cores.


Mainly this was a test for myself for the improfement of a computer Vision Software i am working on, based on infrared thermal imagers.
Feel free to use it how ever you want.

More comments will follow in the sourcecode.

-Nils-
