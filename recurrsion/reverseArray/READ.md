Recursion Method

Approach: The recursive method has an approach almost similar to the iterative one. The approach has been broken down into some steps for simplicity.

Create a function that takes an array, start index, and end index of the array as parameters.
Swap the elements present  at the start and end index, 
The portion of the array left to be reversed is arr[start+1,end-1]. Make a recursive call to reverse the rest of the array. While calling recursion pass start +1  and ends - 1 as parameters for the shrunk array. Repeat step 2.
Continue recursion as long as the ‘start < end’ condition is satisfied. This is the base case for our recursion.