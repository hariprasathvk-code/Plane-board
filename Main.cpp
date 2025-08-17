#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

// Priority Boarding Process
void PriorityBoarding() {
    cout << "\n Priority Boarding Started \n";

    while (true) {
        bool firstClass = false;
        cout << "Is there a First Class passenger? (1 = Yes, 0 = No): ";
        cin >> firstClass;

        if (firstClass) {
            cout << "First class passenger boards the plane.\n";
            cout << "Returning from Priority Boarding\n";
            break; // return
        } else {
            bool halfFirstClass = false;
            cout << "Has half of first class boarded? (1 = Yes, 0 = No): ";
            cin >> halfFirstClass;

            if (halfFirstClass) {
                cout << "All passengers board the plane.\n";
                cout << "Returning from Priority Boarding...\n";
                break; // return
            } else {
                cout << "Restarting Priority Boarding process...\n";
            }
        }
    
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
