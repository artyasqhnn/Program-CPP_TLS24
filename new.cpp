#include <iostream> // Library untuk input dan output
#include <cmath>    // Library untuk fungsi matematika (walaupun tidak digunakan langsung di sini)

using namespace std;

int main() {
    // Deklarasi variabel
    double kelvin, celsius;

    // Input suhu dalam Kelvin
    cout << "Masukkan suhu dalam Kelvin: ";
    cin >> kelvin;

    // Konversi Kelvin ke Celsius
    celsius = kelvin - 273.15;

    // Output suhu dalam Celsius
    cout << "Suhu dalam Celsius: " << celsius << "°C" << endl;

    return 0;
}
