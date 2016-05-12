#include <iostream>

#include "TemperaturMeasurement.h"

using namespace std;

int main() {
    double temp;
    char selection;

    cout << "Aktuelle Raumtemperatur in Celsius (C): ";
    cin >> temp;

    TemperaturMeasurement myTM1(temp + TemperaturMeasurement::k_cons);

    cout << "a) Kelvin" << endl;
    cout << "b) Fahrenheit" << endl;
    cout << "c) Celsius" << endl;
    cout << "Wählen Sie ein Ausgabeformat aus: ";

    cin >> selection;

    switch (selection) {
        case 'a':
            cout << TemperaturMeasurement::toKelvin(myTM1) << endl;
            break;
        case 'b':
            cout << TemperaturMeasurement::toFahrenheit(myTM1) << endl;
            break;
        case 'c':
            cout << TemperaturMeasurement::toCelsius(myTM1) << endl;
            break;
        default:
            cout << "Ungültige Eingabe" << endl;
            break;
    }

    return 0;
}
