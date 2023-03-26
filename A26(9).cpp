#include<iostream>
using namespace std;

class Bill {
    private:
        string customerName;
        int unitsConsumed;
        double totalBill;
    
    public:
        void get() {
            cout << "Enter customer name: ";
            cin >> customerName;
            cout << "Enter units consumed: ";
            cin >> unitsConsumed;
        }
        
        void calculateBill() {
            if (unitsConsumed <= 100) {
                totalBill = unitsConsumed * 1.20;
            } else if (unitsConsumed <= 200) {
                totalBill = 100 * 1.20 + (unitsConsumed - 100) * 2;
            } else {
                totalBill = 100 * 1.20 + 100 * 2 + (unitsConsumed - 200) * 3;
            }
            cout << "Total bill for customer " << customerName << " is: " << totalBill << endl;
        }
};

int main() {
    Bill b;
    b.get();
    b.calculateBill();
    return 0;
}
 