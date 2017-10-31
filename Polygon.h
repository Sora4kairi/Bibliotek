#pragma once
#include "draw.h"
class Polygon
{
	draw Pa, Pb, Pc;
	
public:
	Polygon(draw a, draw b, draw c) { //Tar inn 3 punkter fra draw. 
		this->Pa = a;
		this->Pb = b;
		this->Pc = c;
	}
	Polygon pSkriv() { //Kaller på skriv fra draw til å skrive ut hvert punkts koordinater. 
		std::cout << "Punkt a: ";
		Pa.skriv();
		std::cout << std::endl << "Punkt b: ";
		Pb.skriv();
		std::cout << std::endl << "Punkt c: ";
		Pc.skriv();
		return 0;
	}
	Polygon(draw a, draw b) { //2 punkter istedetfor 3, setter siste punktet automatiskt til 0. 
		this->Pa = a;
		this->Pb = b;
		this->Pc = NULL;	
	}
	Polygon(int x) { //Bruker bare int som return-verdi så denne trenger ikke gjøre noe. 
	};
	~Polygon();
};

