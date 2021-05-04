#include <iostream>
using namespace std;

int main() {

    double weight;
    int x;

    cout << "Please, enter your current earth weight: ";
    cin >> weight;

    cout << "Here we have some information about the following planets: \n";
    cout << "1. Mercury   2. Venus   3. Mars   4. Jupiter \n";
    cout << "5. Saturn   6. Uranus   7. Neptune";

    cout << "\nWhich planet are you visiting? \n";
    cin >> x;

    switch(x){
    case 1:
        weight = weight * 0.38;
        break;
    case 2:
        weight = weight * 0.91;
        break;
    case 3:
        weight = weight * 0.38;
        break;
    case 4:
        weight = weight * 2.34;
        break;
    case 5:
        weight = weight * 1.06;
        break;
    case 6:
        weight = weight * 0.92;
        break;
    case 7:
        weight = weight * 1.19;
        break;
    default:
        cout << "O valor inserido é inválido";
        break;

    }

cout << "Your weight: " << weight <<"\n";




}
