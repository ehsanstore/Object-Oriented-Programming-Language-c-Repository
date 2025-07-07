/*2. Create a TaxCalculator class that implements a function calculateTax(). If one
parameter (income) is provided, it applies a default tax rate of 15%. If two
parameters (income, taxRate) are provided, it applies the given tax rate.*/

#include <iostream>
using namespace std;

class TaxCalculator
{
private:
    double defaultTaxRate;

public:
    TaxCalculator()
    {
        defaultTaxRate = 15.0;
    }
    double calculateTax(double income)
    {
        return (income * defaultTaxRate) / 100;
    }
    double calculateTax(double income, double taxRate)
    {
        return (income * taxRate) / 100;
    }
};

int main()
{
    TaxCalculator calculator;
    double I,T;
    cout<<"Enter income : ";
    cin>>I;
    cout<<"Enter Taxrate : ";
    cin>>T;
    double tax1 = calculator.calculateTax(I);
    cout << "Tax on " << I << " (default rate): " << tax1 << endl;
    double tax2 = calculator.calculateTax(I, T);
    cout << "Tax on " << I << " (custom rate " << T << "%): " << tax2 << endl;
}
