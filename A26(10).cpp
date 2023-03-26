#include<iostream>
using namespace std;

class StaticCount {
    private:
        static int count;
    
    public:
        void incrementCount() {
            count++;
        }
        
        void displayCount() {
            cout << "Count: " << count << endl;
        }
};

int StaticCount::count = 0;

int main() {
    StaticCount s;
    s.incrementCount();
    s.displayCount();
    s.incrementCount();
    s.displayCount();
    s.incrementCount();
    s.displayCount();
    return 0;
}
