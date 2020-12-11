// Christopher Dickerson
// CIS 1202
// 12/11/2020

// Main method for the trip expenses calculator. 
// It calculates the total price it will cost for 
// the trip based on entered values.

#include <iostream>
#include <vector>

#include "Trip.h"

using namespace std;

// Function to create the menu
int menu() {
	int in;
	cout << "1) Add New Vacation\n";
	cout << "2) View All Vacations\n";
	cout << "3) Find a Vacation\n";
	cout << "4) Sort in Order of Cost\n";
	cout << "5) Exit\n\n";
	cin >> in;
	return in;
}

// Function created to create a new vacation entry
Trip newTrip() {
	string name;
	string date;
	int tex;
	int fex;
	int vex;
	int oex;
	int total;

	cout << "Name\n";
	getline(cin, name);
	cout << "\nDate\n";
	getline(cin, date);
	cout << "\nTravel Expenses (Plane/Car): $";
	cin >> tex;
	cout << "\nFood Expenses: $";
	cin >> fex;
	cout << "Visiting Fees (Hotel/Rental): $";
	cin >> vex;
	cout << "\nOther Expenses: $";
	cin >> oex;
	cout << "\nTotal Expenses: $";
	cin >> total;

	Trip a = Trip(name, date, tex, fex, vex, oex, total);
	return a;
}

// Function created to display all trips created
void allTrips(vector<Trip> t) {
	for (size_t i = 0; i < t.size(); i++) {
		cout << "#" << i + 1 << ": ";
		t.at(i).displayTrip();
	}
}

// Main Method
int main() {
	// Intial Messages
	cout << "Enter your first trip to start:\n\n";
	vector<Trip> trips;
	trips.push_back(newTrip());

	// Loops through the menu until you hit '5'
	int m = menu();
	while (m != 5) {
		if (m == 1) {
			trips.push_back(newTrip());
			cout << "Trip added successfully\n\n";
		}
		else if (m == 2) {
			allTrips(trips);
		}
		else if (m == 3) {

		}
		else if (m == 4) {

		}
	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
