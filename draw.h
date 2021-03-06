#pragma once
#include "stdafx.h"
class draw
{
	int x, y, z;
	
public:
	
	draw() 
	{
		this->x = NULL;
		this->y = NULL;
		this->z = NULL;
	}
	draw(int x, int y)
	{
		this->x = x;
		this->y = y;
		this->z = NULL;
	};

	draw(int x) 
	{
		this->x = x;
		this->y = NULL;
		this->z = NULL;
	};
	draw(int x, int y, int z) 
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
	draw skriv() { //Skriver ut koordinatene dersom de ikke er 0. 
		if (x != NULL) std::cout << " x: " << x;
		if (y != NULL) std::cout << " y: " << y;
		if (z != NULL) std::cout << " z: " << z;
		
		std::cout << std::endl;
		return 0;
	}
	draw(draw a, draw b) { //Setter avstanden mellom punktenes koordinater som en linje.
		this->x = b.x - a.x;
		this->y = b.y - a.y;

		if (b.z != NULL || a.z != NULL) { //Sjekker om det er z-koordinat p� begge. Hvis ikke bruker den bare x og y.
			this->z = b.z - a.z;
		}
		else {
			this->z = NULL;
		}
	}
	~draw();
};

