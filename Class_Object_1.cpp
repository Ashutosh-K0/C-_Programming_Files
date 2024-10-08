#include <iostream>
#include <string>
using namespace std;

class Car {
    private:
        string Company;
        int Top_Speed;

    public:
        // Function to set data members with user input
        void SetData() {
            cout << "Enter Company Name: ";
            cin >> Company;
            cout << "Enter Top Speed (km/h): ";
            cin >> Top_Speed;
        }

        // Function to display data members
        void DisplayData() {
            cout << "Company: " << Company << endl;
            cout << "Top Speed: " << Top_Speed << " km/h" << endl;
        }
};

int main() {
    // Creating two objects of the class Car
    Car car1, car2;

    // Taking input from user for the first car
    cout << "Enter details for Car 1:" << endl;
    car1.SetData();
    
    cout << endl;

    // Taking input from user for the second car
    cout << "Enter details for Car 2:" << endl;
    car2.SetData();

    cout << endl;

    // Displaying data for the first car
    cout << "Car 1 details: " << endl;
    car1.DisplayData();
    
    cout << endl;

    // Displaying data for the second car
    cout << "Car 2 details: " << endl;
    car2.DisplayData();

    return 0;
}
