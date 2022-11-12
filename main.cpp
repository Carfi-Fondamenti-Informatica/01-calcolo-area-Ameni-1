#include <iostream>

using namespace std;

int main()  {
    float a, b, c;
    float atriangolo;
    float aquadrato;
    float arettangolo;
    float atrapezio;
    cout << "inserire un numero reale\n";
    cin >> a >>b >>c;
    atriangolo= (a*b)/2;
    cout << atriangolo <<endl;
    aquadrato= a*a;
    cout << aquadrato<< endl;
    arettangolo= a*b;
    cout <<arettangolo<< endl;
    atrapezio= ((a+b)*c)/2;
    cout <<atrapezio<< endl;
}
