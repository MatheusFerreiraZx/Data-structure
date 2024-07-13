#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
    double A, B, C;
    cin >> A >> B >> C;
    
     if (A + B > C && A + C > B && B + C > A) {
        double perimeter = A + B + C;
        cout << fixed << setprecision(1) << "Perimetro = " << perimeter << endl;
    } else {
        double area = ((A + B) * C) / 2.0;
        cout << fixed << setprecision(1) << "Area = " << area << endl;
    }
 
    return 0;
}