//============================================================================
// Name        : vehicle_rating.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Vehicle.h"
using namespace std;

int main() {

	int nVehicles = 3;

	//Create array of vehicles.
	Vehicle* pVehicle = new Vehicle[nVehicles];
	Vehicle* pStart = pVehicle;

	cout << pStart << endl;

	//Assign vehicle aspects.
	pVehicle->setAspects("BMW", "X3", 200, 30000, 2, 0);
	pVehicle++;
	pVehicle->setAspects("Honda", "Civic", 180, 20000, 4, 0);
	pVehicle++;
	pVehicle->setAspects("Yamaha", "R1", 250, 15000, 0, 0.8);
	pVehicle = pStart;

	//Calculate vehicle ratings.
	pVehicle->calcRating(pVehicle, nVehicles);

	//Find and print best vehicle based on ratings.
	pVehicle->printBest(pVehicle, nVehicles);

	cout << pVehicle->name << endl;
	//pVehicle location unchanged by calling of methods.  I guess the pointer itself is aliased inside the methods.

	delete [] pVehicle;

	//pStart should not need destructor.  It was not created same way as pVehicle and does not behave like it.
	//It is just pointer to object pointed to by pVehicle at time of assignment.

	cout << pStart << endl;

	return 0;
}

