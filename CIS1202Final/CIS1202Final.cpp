// Christopher Dickerson
// CIS 1202
// 12/11/2020

// Main method for the trip expenses calculator. 
// It calculates the total price it will cost for 
// the trip based on entered values.

#include <iostream>

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
}

// Main Method
int main() {


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
