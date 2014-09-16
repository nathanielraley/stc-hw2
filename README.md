
                        File: README

HW2 - Compile/Make - Nathaniel Raley - 9/16/2014 - STC, Fall 2014

## ABOUT ##

Functions for numerically estimating the integral of X^7 over (0,1) are
located in the file "hw2-routines.c". There are three such functions:
midpoint(), trapezoid(), and simpsons(), each of which take three double
inputs that specify (1) the start of the domain of integration, (2) the
end of the domain of integration, and (3) the number of regions into
which to subdivide the interval. "hw2-routines.h" provides the header
files and function prototypes for these functions. "hw2-prog.c" has
the main program within it; it calls the above three functions several
times for formatting purposes (I have demonstrated how you would loop
through to achieve the same result, but I commented it out because the
formatting was not cooperating and for an application so small I figured
this would be appropriate. I cannot think of a way to get around calling
the function each function 5 times, because the result needs to be
evaluated for the 5 different values of n.

## HOW TO COMPILE AND RUN ##

To compile, simply navigate to the current directory and type "make".
This will generate an executable file called "integrate" which can be
run simplying by entering "./integrate". Alternatively, you can choose
to link the compile and run steps by specifying "make run". To remove
all object files in the directory, simply enter "make clean". To remove
all files generated from the previous make, including executables,
type "make clobber".

The Makefile also includes options for toggling -c flags, compilers, 
optimization levels, etc.These can be changed by changing the default
value (":=") at the top of the Makefile. 

If you have any questions about this program, please contact
Nathaniel Raley at nathaniel.raley@utexas.edu

Thanks!
