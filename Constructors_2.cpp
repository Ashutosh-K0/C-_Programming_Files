#include <iostream>
using namespace std;

class Rectangle {
    private:
        int length;
        int width;

    public:
        // Default constructor
        Rectangle() {
            length = 0;
            width = 0;
        }

        // Parameterized constructor
        Rectangle(int l, int w) {
            length = l;
            width = w;
        }

        // Copy constructor
        Rectangle(const Rectangle &rect) {
            length = rect.length;
            width = rect.width;
        }

        // Function to display the dimensions
        void Display() {
            cout << "Length: " << length << ", Width: " << width << endl;
        }

        // Function to calculate the area of the rectangle
        int Area() {
            return length * width;
        }
};

int main() {
    // Using the default constructor
    Rectangle rect1;
    cout << "Rectangle 1 (default constructor): ";
    rect1.Display();

    // Using the parameterized constructor
    Rectangle rect2(10, 5);
    cout << "Rectangle 2 (parameterized constructor): ";
    rect2.Display();
    cout << "Area of Rectangle 2: " << rect2.Area() << endl;

    // Using the copy constructor
    Rectangle rect3(rect2);
    cout << "Rectangle 3 (copy constructor): ";
    rect3.Display();
    cout << "Area of Rectangle 3: " << rect3.Area() << endl;

    return 0;
}
