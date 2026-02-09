#include <iostream>
using namespace std;

int mpgTown = 23.5;
int mpgHigh = 28.9;
int gasTank = 20;
int disTown = gasTank*mpgTown;
int disHigh = gasTank*mpgHigh;

int main() {
    cout << "You can travel ";
    cout << disTown;
    cout << " miles in town.\n";
    cout << "You can travel "; 
    cout << disHigh; 
    cout << " miles on the highway.";
}
