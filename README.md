# CS260_Assignment_01

Assignment 01 - Bag of Marbles
Author: Eduarda (Duda) Reolon
CS260 Winter 2024

Goal: 
Design and code a program that shows the behavior of a bag that can store marbles. The implementation must include a way to add and to remove marbles from the bag. 

Implementation:
My vision to represent a bag of marbles is to have the bag be an array of the a struct type that I define. An array is a type of data structure that has the
capability to store several different elements, being that each element will be identified under a specific index. Struct is short for 'structure' and is a special
feature that allows programmers to create a costum data type. Structures are a way to store data that is different but somehow related under one big domain. On my
code, the marbles were stured under a struct called Marble. I did not explore in depth all the uses of a struct on my assignment solution as the marbles on my
program only differ in color. However, if I had made my program more sophisticated, I could have added that each marble had its own size, weight, and etc, and having
all marbles under one structure would have made it easier to store all the information about them. 

Now for the methods my program will include 3 of them:
  1. To add a marble to the bag: The parameters for this function will need to be the array of
the bag, the integer number that is the current size of the bag, in other words, how many marbles
are already in the bag, and the color that will be inputed as a string. If the bag has 5 marbles,
that will mean that the new marble needs to be put on slot 6 of the array, so the first thing this
function does is to increment the size by one. Then it takes the slot on the array bag that the number
'size' is now pointing to and stores the string color in that spot (bag[size]=color).

  3. To remove a marble from the bag: This function will take the exact same parameters as the add
funciton. 

    
  4. To display the content that is inside of the bag: This function will not need the color parameter,
only the bag array and the amount of marbles that are in the bag. 

Testing:
7 testings were run on the program, see the results below:
![image](https://github.com/dudareolon/CS260_Assignment_01/assets/102680672/d465f9f5-f8c2-4bb3-816d-8630c5ac157f)

Work meeting requirements:
There were 4 requirements:
1. some way of representing marbles:
![image](https://github.com/dudareolon/CS260_Assignment_01/assets/102680672/aec0b494-5fcd-450c-b72a-219613947149)

2. a way to add new marbles into the bag:
![image](https://github.com/dudareolon/CS260_Assignment_01/assets/102680672/e99d7f8e-c6fb-4bf7-8ce6-ffdf27892795)

3. a way to remove a marble out of the bag:
![image](https://github.com/dudareolon/CS260_Assignment_01/assets/102680672/94acaf5f-e87f-4ba9-9408-2dac270ce74a)

4. a few ways that we could use to show that our implementation should be working correctly (tests):
![image](https://github.com/dudareolon/CS260_Assignment_01/assets/102680672/8054edc1-dcb3-421b-847b-82a67c2a3437)
![image](https://github.com/dudareolon/CS260_Assignment_01/assets/102680672/6baaa893-d30a-49c0-9f7b-a55def704af1)


