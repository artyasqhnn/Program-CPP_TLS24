#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9 + 273.15;
}

double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

double kelvinToFahrenheit(double kelvin) {
    return (kelvin - 273.15) * 9 / 5 + 32;
}

int main() {
    int pilihan;
    double suhu, hasil;
    
    cout<<"Pilih konversi suhu: \n";
    cout<<"1. Celcius ke Fahrenheit\n";
    cout<<"2. Celcius ke Kelvin\n";
    cout<<"3. Fahrenheit ke Celcius\n";
    cout<<"4. Fahrenheit ke Kelvin\n";
    cout<<"5. Kelvin ke Celcius\n";
    cout<<"6. Kelvin ke Fahrenheit\n";
    
    cout<<"Masukkan pilihan (1-6): ";
    cin>>pilihan;
    
    cout<<"Masukkan suhu yang ingin dikonversi: ";
    cin>>suhu;
    
    switch (pilihan) {
        case 1:
            hasil=celsiusToFahrenheit(suhu);
            cout<<"Hasil: "<<hasil<<" Fahrenheit\n";
            break;
        case 2:
            hasil=celsiusToKelvin(suhu);
            cout<<"Hasil: "<<hasil<<" Kelvin\n";
            break;
        case 3:
            hasil=fahrenheitToCelsius(suhu);
            cout<<"Hasil: "<<hasil<<" Celcius\n";
            break;
        case 4:
            hasil=fahrenheitToKelvin(suhu);
            cout<<"Hasil: "<<hasil<<" Kelvin\n";
            break;
        case 5:
            hasil=kelvinToCelsius(suhu);
            cout<<"Hasil: "<<hasil<<" Celcius\n";
            break;
        case 6:
            hasil=kelvinToFahrenheit(suhu);
            cout<<"Hasil: "<<hasil<<" Fahrenheit\n";
            break;
        default:
            cout<<"Pilihan tidak valid.\n";
    }
}

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
