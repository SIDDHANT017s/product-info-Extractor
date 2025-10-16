#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Simulated product data
    string productNames[5] = {"Laptop", "Smartphone", "Headphones", "Smartwatch", "Camera"};
    string productPrices[5] = {"55000", "25000", "3000", "7000", "40000"};
    string productRatings[5] = {"4.5", "4.3", "4.0", "4.2", "4.6"};

    // Create a CSV file
    ofstream file("products.csv");

    if (!file) {
        cout << "Error creating file!" << endl;
        return 1;
    }

    // Write headers
    file << "Product Name,Price,Rating\n";

    // Write product data
    for (int i = 0; i < 5; i++) {
        file << productNames[i] << "," << productPrices[i] << "," << productRatings[i] << "\n";
    }

    file.close();

    cout << "✅ Product information saved successfully in products.csv" << endl;
    return 0;
}

