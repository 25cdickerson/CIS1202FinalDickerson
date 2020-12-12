// Christopher Dickerson
// CIS 1202
// 12/11/2020

// Main method for the trip expenses calculator. 
// It calculates the total price it will cost for 
// the trip based on entered values.

#include <iostream>
#include <vector>
#include <fstream>

#include "Trip.h"

using namespace std;

// Function to create the menu
int menu() {
	cout << "\n";
	int in;
	cout << "1) Add New Trip\n";
	cout << "2) View All Trip\n";
	cout << "3) Find a Trip\n";
	cout << "4) Save to Binary File\n";
	cout << "Press any other buttons to exit\n";
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

	cout << "Name: ";
	cin >> name;
	cout << "\nDate (MM/YY): ";
	cin >> date;
	cout << "\nTravel Expenses (Plane/Car): $";
	cin >> tex;
	cout << "\nFood Expenses: $";
	cin >> fex;
	cout << "\nVisiting Fees (Hotel/Rental): $";
	cin >> vex;
	cout << "\nOther Expenses: $";
	cin >> oex;

	total = tex + fex + vex + oex;

	Trip a = Trip(name, date, tex, fex, vex, oex, total);
	return a;
}

// Function created to display all trips created
void allTrips(vector<Trip> t, int s) {
	cout << "\n";
	for (int i = 0; i < s; i++) {
		cout << "#" << i + 1 << ": ";
		t.at(i).displayTrip();
		cout << "\n";
	}
}

// Function created to find a specific trip based on the name
void findTrip(vector<Trip> t, int s) {
	cout << "\n";
	string n;
	cout << "Enter the name of the trip:\n";
	cin >> n;
	for (int i = 0; i < s; i++) {
		if (t.at(i).getName() == n) {
			cout << "Trip Found:\n";
			t.at(i).displayTrip();
			break;
		}
	}
	cout << "\n";
}

// Function Writes to File
void writeToFile(vector<Trip> t, int s) {
	fstream file("file.bin", ios::binary | ios::out | ios::app);
	for (int i = 0; i < s; i++) {
		file << t.at(i).getName();
		file << t.at(i).getDate();
		file << t.at(i).getTex();
		file << t.at(i).getFex();
		file << t.at(i).getVex();
		file << t.at(i).getOex();
		file << t.at(i).getTotal();
	}
}

// Main Method
int main() {
	// Intial Messages
	cout << "Enter your first trip to start:\n\n";
	vector<Trip> trips;
	trips.push_back(newTrip());
	int count = 1;

	// Loops through the menu until you hit '5'
	int m = menu();
	while (m > 0 && m < 6) {
		if (m == 1) {
			cout << "\nEnter New Trip\n";
			trips.push_back(newTrip());
			cout << "Trip added successfully\n\n";
			count++;
		}
		else if (m == 2) {
			allTrips(trips, count);
		}
		else if (m == 3) {
			findTrip(trips, count);
		}
		else if (m == 4) {
			writeToFile(trips, count);
		}
		m = menu();
	}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
