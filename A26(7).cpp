#include<iostream>
using namespace std;
class Box {
private:
    double length;
    double breadth;
    double height;

public:
    // Constructor to initialize the object
    Box(double l, double b, double h) : length(l), breadth(b), height(h) {}

    // Calculate the volume of the box
    double volume() {
        return length * breadth * height;
    }
};
 int main()
 {
    // Enter length, breadth, and height
double l, b, h;
cout << "Enter length, breadth, and height: ";
cin >> l >> b >> h;

// Create a Box object with the entered values
Box box(l, b, h);

// Calculate and print the volume of the box
std::cout << "Volume of the box: " << box.volume() << std::endl;

 }