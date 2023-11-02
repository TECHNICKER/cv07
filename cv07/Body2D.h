#pragma once

#include <iostream>

int indexNejblizsi(int velikost, int(*poleBodu)[2], int referencniX, int referencniY);
double prumernaVzdalenost(int velikost, int(*poleBodu)[2], int referencniX, int referencniY);
void vzajemneVzdalenosti(int velikost, int(*poleBodu)[2], double vysledna[10][10]);