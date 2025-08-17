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
        
    cout << " Priority Boarding Complete \n";
    
}

// All Passengers Aboard
void AllPassengersAboard() {
   cout << "\n--- All Passengers Aboard Check ---\n";

    cout << "5 minutes before gate closes...\n";
    this_thread::sleep_for(chrono::seconds(2)); // simulate waiting

    bool allAboard = false;
    cout << "Are all passengers aboard? (1 = Yes, 0 = No): ";
    cin >> allAboard;

    if (allAboard) {
        cout << "All passengers aboard. Proceeding to Termination.\n";
    } else {
        cout << "Announcement: Final call, please board the plane!\n";
        cout << "Waiting extra 5 minutes...\n";
        this_thread::sleep_for(chrono::seconds(2)); // simulate 5 mins
        cout << "Proceeding to Termination anyway.\n";
    }
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
