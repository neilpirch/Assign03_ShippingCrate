// Assign03-ShippingCrate.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	const double PLYWOOD_COST = 0.54;
	const double STRAP_COST = 1.03;
	const double LABOR_COST = 3.37;
	const double MARKUP_RATE = 0.35;

	int length;
	int width;
	int height;

	double edgeLength;
	double surfaceArea;
	double interiorVolume;
	double plywoodCost;
	double strapCost;
	double manufacturingCost;
	double estimatedCost;

	//User inputs

	cout << endl << "== Cost Estimate for Custom Crate ==" << endl;
	cout << endl << "Enter length in inches:  ";
	cin >> length;
	cout << endl << "Enter  width in inches:  ";
	cin >> width;
	cout << endl << "Enter height in inches:  ";
	cin >> height;

	//Calculations

	edgeLength = 4 * (length + width + height) / 12.0;
	surfaceArea = 2 * (length * width + length * height + width * height) / 144.0;
	interiorVolume = (length - 1) * (width - 1) * (height - 1) / 1728.0;
	plywoodCost = surfaceArea * PLYWOOD_COST;
	strapCost = edgeLength * STRAP_COST;
	manufacturingCost = plywoodCost + strapCost + LABOR_COST;
	estimatedCost = manufacturingCost + (manufacturingCost * MARKUP_RATE);

	//Estimate Output

	cout << fixed << setprecision(2) << endl;
	cout << endl << "Interior volume of finished crate: " << setw(8) << interiorVolume << " cubic feet" << endl;
	cout << endl << "Estimated cost  of finished crate: " << setw(8) << estimatedCost << " dollars" << endl;
	
	cout << endl;
	system("pause");
    return 0;
}

