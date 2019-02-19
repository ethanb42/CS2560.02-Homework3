/*
 * ReverseArray.c
 *
 *  Created on: Feb 15, 2019
 *      Author: Ethan Baldeas
 */

#include <stdio.h>

int *p;        //declare pointer
int copy[];   //declare copy for pointer

//takes in an array to reverse
int * reverseArray(int array[], int size){

	//fills in new array starting at end of the inputted array
	for(int x=0; x<size; x++){
		copy[x] = array[size-1-x];
	}

	p=copy;
	return p;
}


//test the program
int main(){
	int SIZE = 7;
	int numbers[7] = {2, 6, 9, 16, 23, 30, 39};
	int *Ptr;
	Ptr = reverseArray(numbers,SIZE);

	//printing out elements from the pointer to verify results
	for (int x=0; x<SIZE; x++){
		printf("%d ", *Ptr);
		Ptr++;
	}

	printf("END REACHED");

	return 0;
}
