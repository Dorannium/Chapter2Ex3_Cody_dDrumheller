/*
Title: Chapter 2 Exercise 7 - Ocean Levels
File Name: Chapter2Ex7_Cody_Drumheller
Programmer: Cody Drumheller
Date: 20240830
Requirements: Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write a program that displays:

• The number of millimeters higher than the current level that the ocean’s level will be in 5 years.

• The number of millimeters higher than the current level that the ocean’s level will be in 7 years.

• The number of millimeters higher than the current level that the ocean’s level will be in 10 years.




*/

#include <iostream>
using namespace std;
//const double levelRise = 1.5;

int main()
{
	
	double YearLevel5;
	double YearLevel7;
	double YearLevel10;
	double levelRise;
	cout << " Please enter the amount of level rise";
	cin >> levelRise;
	YearLevel5 = levelRise * 5; 
	YearLevel7 = levelRise * 7;
	YearLevel10 = levelRise * 10;

	cout << " After 5 years the Ocean will have risen " << YearLevel5 << " millimeters" << endl;
	cout << " After 7 years the Ocean will have risen " << YearLevel7 << " millimeters" << endl;
	cout << " After 10 years the Ocean will have risen " << YearLevel10 << " millimeters" << endl;
	return 0;


}


