/*
 * Vehicle.cpp
 *
 *  Created on: Jun 17, 2021
 *      Author: pavlo
 */

#include "Vehicle.h"

Vehicle::Vehicle() {
	// TODO Auto-generated constructor stub


}

void Vehicle::setAspects(string name, string model, int speed, int value,
		int seats, float risk) {
	this->name = name;
	this->model = model;
	this->speed = speed;
	this->value = value;
	this->seats = seats;
	this->risk = risk;

}

void Vehicle::calcRating(Vehicle *vehicle, int nVehicles) {
	int i = 0;
	while (i < nVehicles) {
		if (vehicle->risk == 0) {
			vehicle->rating = vehicle->speed * vehicle->value * vehicle->seats;
			vehicle++;
		} else if (vehicle->seats == 0) {
			vehicle->rating = vehicle->speed * vehicle->value * vehicle->risk;
			vehicle++;
		}
		i++;
	}

}

void Vehicle::printBest(Vehicle *vehicle, int nVehicles) {
	int i = 0;
	string namePrint;
	string modelPrint;
	float compare = 0;
	while (i < nVehicles) {
		if (vehicle->rating > compare) {
			compare = vehicle->rating;
			namePrint = vehicle->name;
			modelPrint = vehicle->model;
		}
		i++;
		vehicle++;
	}

	cout << namePrint << " " << modelPrint << " " << "is the best vehicle."
			<< endl;

}

void Vehicle::print() {
	cout << name << endl;
}

Vehicle::~Vehicle() {

	cout << "Vehicle " << name << " destroyed." << endl;

}
