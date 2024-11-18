#include <iostream>
using namespace std;

class TriangleNumberCalculator {
public:
    int value(int n) {
        if (n == 1) { 
            return 1; 
        }
        return n + value(n - 1); 
    }

    int add(int n, int m) {
        return value(n) + value(m);
    }

    int subtract(int n, int m) {
        return value(n) - value(m);
    }
};

int main() {
    TriangleNumberCalculator calculator;

    cout << "T(1): " << calculator.value(1) << endl; 
    cout << "T(2): " << calculator.value(2) << endl; 
    cout << "T(4): " << calculator.value(4) << endl;

    
    cout << "Add T(1) and T(1): " << calculator.add(1, 1) << endl; 
    cout << "Add T(2) and T(3): " << calculator.add(2, 3) << endl; 
    cout << "Add T(4) and T(2): " << calculator.add(4, 2) << endl; 

    cout << "Subtract T(1) from T(1): " << calculator.subtract(1, 1) << endl;  
    cout << "Subtract T(3) from T(2): " << calculator.subtract(2, 3) << endl;  
    cout << "Subtract T(2) from T(4): " << calculator.subtract(4, 2) << endl; 

    return 0;
}
