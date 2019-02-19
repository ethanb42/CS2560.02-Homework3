/*
 * GeometryCalculator.c
 *
 *  Created on: Feb 16, 2019
 *      Author: Ethan Balderas
 */

#include <stdio.h>

//declare methods
void end();

//main menu of calculator
void menu() {

	//variable declaration
	double radius, length, width, base, height;
	char yes;


	//displays menu
	printf("Geometry Calculator\n\n");
	printf("   1. Calculate the Area of a Circle\n");
	printf("   2. Calculate the Area of a Rectangle\n");
	printf("   3. Calculate the Area of a Triangle\n");
	printf("   4. Quit\n");
	printf("   Enter your choice (1-4): ");

	int choice;

	//takes in the users choice as input
	fflush(stdout); //ECLIPSE BUG
	scanf("%d", &choice);
	while ((getchar()) != '\n');


	switch (choice) {

	case 1:
		//circle area
		do{
			printf("\n\nPlease enter a valid value for the radius (non-negative numbers only): ");
			fflush(stdout); //ECLIPSE BUG
			scanf("%lf", &radius);

		}
		while(radius <0);
		//using radius to save space for calculations
		radius = radius * radius *3.14159;
		printf("\n\nThe radius of the circle is %f units squared", radius);
		printf ("\n\nType 'Y' to go back to the menu");
		//Waits till the user is ready to continue so they can see the values
		//Also made it easy to take screenshots for the homework and made it easy to test
		while(yes != 'Y' && yes != 'y'){
			fflush(stdout);  //ECLIPSE bug
			yes = getchar();

		}
		menu();
		break;

	case 2:
		//rectangles area
		//length input
		do{
			printf("\n\nPlease enter a valid value for the length (non-negative numbers only): ");
			fflush(stdout); //ECLIPSE BUG
			scanf("%lf", &length);
		}
		while(length <0);
		//width input
		do{
			printf("\n\nPlease enter a valid value for the width (non-negative numbers only): ");
			fflush(stdout); //ECLIPSE BUG
			scanf("%lf", &width);

		}
		while(width <0);
		//calculates the area, using length to save space
		length = length *width;
		printf("\n\nThe area of the rectangle is %f units squared", length);
		printf ("\n\nType 'Y' to go back to the menu");
		while(yes != 'Y' && yes != 'y'){
			fflush(stdout);  //ECLIPSE bug
			yes = getchar();

		}
		menu();

		break;

	case 3:
		//triangles area
		//height input
		do{
			printf("\n\nPlease enter a valid value for the height (non-negative numbers only): ");
			fflush(stdout); //ECLIPSE BUG
			scanf("%lf", &height);

		}
		while(height <0);

		//base input
		do{
			printf("\n\nPlease enter a valid value for the base (non-negative numbers only): ");
			fflush(stdout); //ECLIPSE BUG
			scanf("%lf", &base);

		}
		while(base <0);
		//calculate area using base to save space
		base = 0.5 * base * height;
		printf("\n\nThe area of the triangle is %f units squared", base);
		printf ("\n\nType 'Y' to go back to the menu");

		while(yes != 'Y' && yes != 'y'){
			fflush(stdout);  //ECLIPSE bug
			yes = getchar();

		}
		menu();
		break;

	case 4:
		printf("Program Ended");
		end();
		break;

	default:

		printf("\nYou entered a value outside of (1-4) please try again!.\n\n");
		menu();

	}

	void end(){


	}

}

