#include <iostream>
using namespace std;

// Global vars
int mpgTown = 23.5;
int mpgHigh = 28.9;
int gasTank = 20;
int disTown = gasTank*mpgTown; // Distance in town equation
int disHigh = gasTank*mpgHigh; // Distance on the highway equation

// Code
int main() {
    cout << "You can travel " << disTown << " miles in town.\n"; // Outputs the travel distance in town
    cout << "You can travel " << disHigh << " miles on the highway"; // Outputs the travel distance on the highway
}
