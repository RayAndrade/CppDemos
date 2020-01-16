//============================================================================
// Name        : functions.cpp
// Author      : Ray Andrade
// Version     :
// Copyright   : Your copyright notice
// Description : C++Tutorial for Beginners 25 - Functions: Using Subroutines in C++
//               C++Tutorial for Beginners 26 - Return Values: Getting Data From Subroutines
//             : C++ for Complete Beginners 27 - Function Parameters: Passing Data to Subroutines

//============================================================================

#include <iostream>
using namespace std;

void showMenu() {
	cout << "Do 1 kina stuff." << endl;
	cout << "Do 2 kina stuff." << endl;
	cout << "Do 3 kina stuff." << endl;
}

int getInpupt() {
	cout << "what kind of stuff do you want to do?" << endl;

	int input1;
	cin >> input1;


	return input1;
}
 void processSelection(int selection){
	 switch (selection) {
	 	case 1:
	 		cout << "Doing 1 kinda stuff" << endl;
	 		break;
	 	case 2:
	 		cout << "Doing 2 kinda stuff" << endl;
	 		break;

	 	case 3:
	 		cout << "Doing 3 kinda stuff" << endl;
	 		break;
	 	default:
	 		cout << "only 1, 2 or 3" << endl;
	 	}
 }

int main() {
	showMenu();
	int selection = getInpupt();
	processSelection(selection);

	return 0;
}
