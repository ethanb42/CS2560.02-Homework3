/*
 * Population.c
 *
 *  Created on: Feb 15, 2019
 *      Author: Ethan Balderas
 */
#include <stdio.h>


//define variables
int startingPopulation;            //the starting population
int years;                        //years gone by
int endingPopulation;             //the projected population in x-years

double deathRate;     //the death rate
double birthRate;      //the birth rate

//runs this method to execute the program 
int projectPopulation(){

	printf("Welcome to population projector! \n\n");

	//get starting population
	do{
		printf("Please enter the starting population (It must 2 or greater): ");
		fflush(stdout); //ECLIPSE BUG
		scanf("%d", &startingPopulation);

	} while (startingPopulation <2);

	printf("\n");

	//get year span
	do{
		printf("Please enter the number of years to display (It must 1 or greater): ");
		fflush(stdout); //ECLIPSE BUG
		scanf("%d", &years);


	}while (years <1);

	printf("\n");

	//birth rate input
	printf ("Please note the birth rate is the percentage increase of the population due to births,\nPlease input a percentage. Ex: 1= 1 percent and 100= 100 percent");
	do{
		printf("\nPlease enter the birth rate (It must 1 or greater): ");
		fflush(stdout); //ECLIPSE BUG
		scanf("%lf", &birthRate);


	}while(birthRate<1);

	//change birthrate to decimal format
	birthRate = birthRate /100; // from percentage to decimal

	printf("\n");

	//death rate input
	printf ("Please note the death rate is the percentage decrease of the population due to deaths.\nPlease input a percentage. Ex: 1= 1 percent and 100= percent");
		do{
			printf("\nPlease enter the death rate (It must 1 or greater): ");
			fflush(stdout); //ECLIPSE BUG
			scanf("%lf", &deathRate);


		}while(deathRate<1);

		//change deathrate to decimal format
		deathRate = deathRate /100; // from percentage to decimal

		printf("\n\n");

		//calculates results and displays year by year
		for(int i =0; i<years; i++){
			endingPopulation = startingPopulation + birthRate*startingPopulation - deathRate*startingPopulation;
			printf("Year %d:       Starting Pop: %d              Projected Pop: %d\n", i+1,startingPopulation, endingPopulation);
			startingPopulation = endingPopulation;
		}

		//displays results
		printf("\n\n\nAfter %d years the population will be %d people.",years, endingPopulation);


		return 0;
}



