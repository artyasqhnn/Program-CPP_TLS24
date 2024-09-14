#include <iostream>  // Library untuk input dan output
#include <iomanip>   // Library untuk format output
int main ();
using namespace std;

// Fungsi untuk konversi Reamur ke Celsius
double reamurToCelsius(double reamur) {
    return reamur * 5.0 / 4.0;
}

// Fungsi untuk konversi Celsius ke Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

// Fungsi untuk konversi Kelvin ke Reamur
double kelvinToReamur(double kelvin) {
    return (kelvin - 273.15) * 4.0 / 5.0;
}

int main() {
    // Deklarasi variabel untuk suhu
    double reamur, celsius, kelvin;

    // Input suhu dalam Reamur
    cout<<"Masukkan suhu dalam Reamur: ";
    cin>>reamur;

    // Konversi Reamur ke Celsius
    celsius = reamurToCelsius(reamur);
    cout<< fixed << setprecision(2);
    cout<<"Suhu dalam Celsius: "<<celsius<< " °C"<< endl;

    // Konversi Celsius ke Fahrenheit
    double fahrenheit = celsiusToFahrenheit(celsius);
    cout<< "Suhu dalam Fahrenheit: "<<fahrenheit<<" °F"<< endl;

    // Input suhu dalam Kelvin;
    cout<< 17;
    cout<<"Masukkan suhu dalam Kelvin: ";
    cin>>kelvin;

    // Konversi Kelvin ke Reamur
    double reamurFromKelvin = kelvinToReamur(kelvin);
    cout<<"Suhu dalam Reamur: "<<reamurFromKelvin<<" °Re"<<endl;

    return 0;
}
