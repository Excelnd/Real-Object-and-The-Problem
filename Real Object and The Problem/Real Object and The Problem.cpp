// Real Object and The Problem.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

// a function prototype
int area(int rectangle_height, int rectangle_width);

struct rectangle
{
	int height;
	int width;
};

struct pole
{
	int length;
	int depth;
};

// rectangle area
int surface_area(int rectangle_height, int rectangle_width)
{
	return (rectangle_height * rectangle_width);
}

int main()
{
	rectangle wall, square;
	pole lamp_pole;

	wall.height = 12;
	wall.width = 10;
	square.height = square.width = 8;

	lamp_pole.length = 50;
	lamp_pole.depth = 6;

	cout << "Area of wall = height x width, OK!" << "\n";
	cout << "-------------------------------------" << "\n";
	cout << "----> Area of the wall is " << surface_area(wall.height, wall.width) << "\n\n";
	cout << "Area of square = height x width, OK!" << "\n";
	cout << "-------------------------------------" << "\n";
	cout << "----> Area of square is " << surface_area(square.height, square.width) << "\n\n";
		cout << "Non related area?" << "\n = height of square x width of the wall?" << "\n";
		cout << "-------------------------------------" << "\n";
		cout << "----> Non related surface area is " << surface_area(square.height, wall.width) << "\n\n";
		cout << "Wrong surface area =  height of square" << "\nx depth of lamp pole?" << "\n";
		cout << "-------------------------------------" << "\n";
		cout << "---->Wrong surface area is " << surface_area(square.height, lamp_pole.depth) << "\n";

		return 0;
}

