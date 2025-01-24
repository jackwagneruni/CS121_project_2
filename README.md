# CS121_project_2
(lab) Bubbles and Pointers

## Overview
This C program sorts an array of 9 integers starting from low to high

# Algorithm
## Initialize Variables and Constants
- Define constant MAX and assign it the value of 6 to represent the size of the array of numbers
## Define supporting functions
### printValues function:
- takes the integer titled array as input
- print "["
- goes through each item of the array with a for loop
- print the value in the array followed by a space
- print "]"
### swap function
- take two integers as inputs
- switch the two values memory inputs
### sort function
- take an int array as input
- make the int varriable and assign it the value MAX
- use the bubble sort method to sort from low to high
-  the outer loop goes through each item of the array (outer_loop_counter starts at 0 and goes to  size_of_array - 1
-  the inner loop compares adjacent ints and swaps them if necessary
## Main Function
- make an array of integers called  "values" and give it {7, 3, 9, 4, 6, 1, 2, 8, 5}
- print the array using printValues
