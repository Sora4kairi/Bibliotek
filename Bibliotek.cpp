// Bibliotek.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "draw.h"
#include "Polygon.h"

int main()
{

	draw test = draw(1, 2); //Oppretter 2 punkter og bruker dem til å lage en linje.
	draw test2 = draw(6, 8);
	//test.skriv();
	//test2.skriv();
    //draw linje = draw(test,test2); //Har konstruktoren satt opp sånn at den kan enten ta inn koordinater(int) eller 2 punkter.
	//linje.skriv(); 
	Polygon test3 = Polygon(test, test2);
	test3.pSkriv();
    return 0;
}

