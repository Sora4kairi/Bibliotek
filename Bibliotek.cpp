// Bibliotek.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "draw.h"
#include "Polygon.h"

int main()
{

	draw test = draw(1, 2); //Oppretter 2 punkter og bruker dem til � lage en linje.
	draw test2 = draw(6, 8);
	test.skriv();
	test2.skriv();
    draw linje = draw(test,test2); //Har konstruktoren satt opp s�nn at den kan enten ta inn koordinater(int) eller 2 punkter.
	linje.skriv(); 
    return 0;
}

