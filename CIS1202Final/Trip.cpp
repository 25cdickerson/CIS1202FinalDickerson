// Christopher Dickerson
// CIS 1202
// 12/11/2020

// This is the implementation of the trip header file.

#include <iostream>

#include "Trip.h"

using namespace std;

Trip::Trip(string n, string d, int t, int f, int v, int o, int to) {
	name = n;
	date = d;
	tex = t;
	fex = f;
	vex = v;
	oex = o;
	total = to;
}


