//============================================================================
// Name        : Lesson4.cpp
// Author      : Ing. Emiliano Borghi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <cstdlib>		// atoi()
#include <string>
#include "Donation.h"

using namespace std;

int main() {

	// Open "donation_total.txt" and read the LAST value (current_running_total)

	const string File = "donation_total.txt";
	// Open file for I/O operations
	fstream iofile(File.c_str(), ios_base::app);
	int current_running_total = 0;
	int amount;
	string name;

	if(iofile.is_open()) {
		while( !iofile.eof() ) {

			getline(iofile, name);

			current_running_total = std::atoi(name.c_str());
		}

	} else {
		cerr << "> Error opening the donation file" << endl;
	}
	cout << "Total: " << current_running_total << endl;

	// The program will accept user-entered "donations" in the format "<name> <donation_amount>" from the console
	std::stringstream stream(str);	// a string with the format "[Name] [Amount]"
	stream >> name >> amount;

	Donation *pDonation = new Donation(name, amount);
	pDonation->showData();
	// std::getline() & stringstream objects

	// Extract the name field and add to current_running_total and update to donation_total.txt

	// stoi()

	iofile.close();

	return 0;
}
