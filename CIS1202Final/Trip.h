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
	Trip();
	Trip(string n, string d, int t, int f, int v, int o, int to);
	
	// Getters
	string getName();
	string getDate();
	int getTex();
	int getFex();
	int getVex();
	int getOex();
	int getTotal();

	// Setters
	void setName(string s);
	void setDate(string s);
	void setTex(int i);
	void setFex(int i);
	void setVex(int i);
	void setOex(int i);
	void setTotal(int i);
};


#endif