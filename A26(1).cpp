#include<iostream>
using namespace std;


class Complex {
private:
    int a; // real part
    int b; // imaginary part

public:
    // Constructor with default values
    Complex(int real = 0, int imag = 0) : a(real), b(imag) {}

    // Set the values of the real and imaginary parts
    void setData(int real, int imag) {
        a = real;
        b = imag;
    }

    // Print the values of the real and imaginary parts
    void showData() {
        cout << a << " + " << b << "i" << std::endl;
    }

    // Add two complex numbers and return the result as a new Complex object
    Complex add(Complex other) {
        int realSum = a + other.a;
        int imagSum = b + other.b;
        return Complex(realSum, imagSum);
    }
};
