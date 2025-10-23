#include <iostream>
#include <cmath>
#include <iomanip> 

using namespace std; 

int main()
{

    cout << "BMI Calculator" << endl;
    cout << "--------------------------------------" << endl;

    double weight, height;
    cout << "weight (kg):  ";
    cin >> weight;
    cout << "height (m):   ";
    cin >> height; 
    double bmi = weight / pow(height, 2);

    // Determine category
    string category;
    if (bmi < 18.5) {
        category = "underweight";
    }
    else if (bmi >= 18.5 && bmi <= 22.99) {
        category = "normal";
    }
    else if (bmi >= 23 && bmi <= 24.99) {
        category = "overweight";
    }
    else {  // bmi >= 25
        category = "obesity";
    }


    cout << "Weight: " << weight << " kg" << endl;
    cout << "Height: " << height << " m" << endl;
    cout << "Result:" << endl;
    cout << "- BMI " << bmi << endl;
    cout << "- You are '" << category << "'" << endl;

    return 0;
} 