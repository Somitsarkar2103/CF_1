#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, breadth;

public:
    // Constructor to initialize values
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    // Function to calculate area
    int area() {
        return length * breadth;
    }

    // Function to change length
    void changeLength(int l) {
        length = l;
    }

    // Getter for length
    int getLength() {
        return length;
    }
};

int main() {
    // Create object and initialize values
    Rectangle r(10, 5);

    cout << "Area: " << r.area() << endl;

    r.changeLength(20);

    cout << "New length: " << r.getLength() << endl;
    cout << "New Area: " << r.area() << endl;

    return 0;
}
