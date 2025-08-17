#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

// Priority Boarding Process
void PriorityBoarding() {
    
    
}

// All Passengers Aboard
void AllPassengersAboard() {
   
}

int main() {
    cout << " Flight Boarding Simulation \n";
    cout << "\n Plane arrived at gate.\n";

    // Priority Boarding (PB)
    PriorityBoarding();

    // All Passengers Aboard (APA)
    AllPassengersAboard();

    // Termination (T)
    cout << "\nTermination: Closing gate.\n";

    cout << " Process Completed. Plane Ready to Depart. \n";
    return 0;
}
