#include <iostream>
#include <cmath>
int main(){

double Mass;
double Gravity;
double Height;
double potentialEnergy;

std::cout << " Input the Mass in KG: ";
std::cin >> Mass;

Gravity = 9.8;

std::cout << "input the Height in M: ";
std::cin >> Height;

potentialEnergy = Mass * Gravity * Height;

std::cout << potentialEnergy << " J";
return 0;
}