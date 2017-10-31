#pragma once
#include <iostream>
class draw
{
	int x, y, z;
public:

	draw(int x, int y)
	{
		this->x = x;
		this->y = y;
		this->z = NULL;
	};

	draw(int x) {
		this->x = x;
	};
	draw(int x, int y, int z) 
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
	draw skriv() {
		if (x != NULL) std::cout << " x: " << x;
		if (y != NULL) std::cout << " y: " << y;
		if (z != NULL) std::cout << " z: " << z;
		
		std::cout << std::endl;
		return 0;
	}
	draw(draw a, draw b) {
		this->x = b.x - a.x;
		this->y = b.y - a.y;

		if (b.z != NULL || a.z != NULL) { //Sjekker om det er z-koordinat på begge. Hvis ikke bruker den bare x og y.
			this->z = b.z - a.z;
		}
		else {
			this->z = NULL;
		}
	}
	~draw();
};

