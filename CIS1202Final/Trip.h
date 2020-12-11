// Christopher Dickerson
// CIS 1202
// 12/11/2020

// This is the class header for the trip program.

#include <iostream>
#include <string>

using namespace std;

#ifndef TRIP_H
#define TRIP_H

// Class initalization
class Trip {
private:
	string name;
	string date;
	int tex;
	int fex;
	int vex;
	int oex;
	int total;

public:
	Trip(string n, string d, int t, int f, int v, int o, int to);
};

// Getters

// Setters

#endif