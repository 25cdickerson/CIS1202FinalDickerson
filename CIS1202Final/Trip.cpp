// Christopher Dickerson
// CIS 1202
// 12/11/2020

// This is the implementation of the trip header file.

#include <iostream>

#include "Trip.h"

using namespace std;

Trip::Trip() {
	name = "null";
	date = "null";
	tex = -1;
	fex = -1;
	vex = -1;
	oex = -1;
	total = -1;
}

// Constuctor Declaration
Trip::Trip(string n, string d, int t, int f, int v, int o, int to) {
	name = n;
	date = d;
	tex = t;
	fex = f;
	vex = v;
	oex = o;
	total = to;
}

// Getter Declarations
string Trip::getName() {
	return name;
}

string Trip::getDate() {
	return date;
}

int Trip::getTex() {
	return tex;
}

int Trip::getFex() {
	return fex;
}

int Trip::getVex() {
	return vex;
}

int Trip::getOex() {
	return oex;
}

int Trip::getTotal() {
	return total;
}

// Setter Declarations

void Trip::setName(string s) {
	name = s
}

void Trip::setDate(string s) {
	date = s;
}

void Trip::setTex(int i) {
	tex = i;
}

void Trip::setFex(int i) {
	fex = i;
}

void Trip::setVex(int i) {
	vex = i;
}

void Trip::setOex(int i) {
	oex = i;
}

void Trip::setTotal(int i) {
	total = i;
}