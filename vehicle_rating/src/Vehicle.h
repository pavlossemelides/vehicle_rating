/*
 * Vehicle.h
 *
 *  Created on: Jun 17, 2021
 *      Author: pavlo
 */

#include <iostream>
using namespace std;

#ifndef VEHICLE_H_
#define VEHICLE_H_

class Vehicle {
public:
	string name;
private:

	string model;
	int speed;
	int value;
	int seats;
	float risk;
	float rating;
public:
	Vehicle();
	void print();
	void setAspects(string name, string model, int speed, int value, int seats, float risk);
	void printBest(Vehicle* vehicle, int nVehicles);
	void calcRating(Vehicle* vehicle, int nVehicles);
	virtual ~Vehicle();
};

#endif /* VEHICLE_H_ */
