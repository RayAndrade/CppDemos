//============================================================================
// Name        : StringStreams.cpp
// Author      : Ray Andrade
// Version     :
// Copyright   : Your copyright notice
// Description : C++Tutorial for Beginners 33 - String Streams; Adding Number to Strings
//============================================================================

#include <iostream>
#include <sstream>

using namespace std;

int main() {

	string name = "Bob";
	int age = 32;

	stringstream ss;

	ss << "Name is: " << name << " Age is:" << age;

	//string info = "Name: " + name + " age: ";

	//cout << info << endl;

	cout << ss.str() << endl;

	return 0;
}
