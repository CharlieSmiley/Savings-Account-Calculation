//
// Program Title: Savings account balance calculations
// Program File: Project_03.cpp
// Name: Charlie Smiley
// Course Section: CPE-211-02
// Lab Section: 1
// Due Date: 09/03/21
// Program Description: Compute savings account balance using
// different interest computing methods. 

#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //Declaring Varibles
    float P; //Starting Value
    cout << "\nEnter Starting Balance: ";
    cin >> P;
    cout << P << endl; 

    float R; //Simple Interest Rate
    cout << "Enter Interest Rate: ";
    cin >> R;
    cout << R << endl;

    float T; //Number of Years
    cout << "Enter Number of Years: ";
    cin >> T;
    cout << T << endl << endl;

    float N= 12.0; //Montthly Compound Rate
    float D= 365.0; //Daily Compound Rate

    //Simple Interest Calc
    float SI = P*(1+T*(R/100)); //Final Balance

    //Monthly Compound Interest Calc
    float MCI = P*pow(1+(R/100)/N,(N*T));

    //Effect Conti. Monthly Interest Rate Calc
    float ECMR = (pow(1+(R/100)/N,(N*T))-1)/T;

    //Monthly Interest w/ Effect Rate
    float MIER = P*pow(1+(ECMR/N),(N*T));

    //Daily Compound Interest Calc
    float DCI = P*pow(1+(R/100)/D,(D*T));

    //Effect Conti. Daily Interest Rate Calc
    float ECDR = (pow(1+(R/100)/D,(D*T))-1)/T;

    //Daily Interest w/ Effect Rate
    float DIER = P*pow(1+(ECDR/D),(D*T));

    //Conti. Compound Interest Calc
    float CCI = P*exp((R/100)*T);

    //Effect Conti. Interest Rate Calc
    float ECIR = (exp((R/100)*T)-1)/T;

    //Conti Interest w/ Effect Rate
    float CIER = P*exp(ECIR*T);

    //Output
    cout << "\nStarting Balance is $" << setprecision(2) << fixed << P << endl;
    cout << "Interest rate is " << R << "%" << endl;
    cout << "Number of years is " << T << endl;
    cout << "Final account balance is: " << endl;

    cout << "\nSimple Interest:" << endl;
    cout << "\tBalance = $" << SI << endl;

    cout << "\nCompound Monthly:" << endl;
    cout << "\tBalance is $" << MCI << endl;
    cout << "\tEffective simple interest rate is " << ECMR*100 << "%" << endl;
    cout << "\tBalance with simple interest rate at the effective rate is $" << MIER << endl;

    cout << "\nCompound Daily:" << endl;
    cout << "\tBalance is $" << DCI << endl;
    cout << "\tEffective simple interest rate is " << ECDR*100 << "%" << endl;
    cout << "\tBalance with simple interest rate at the effective rate is $" << DIER << endl;

    cout << "\nCompounded Continuously:" << endl;
    cout << "\tBalance is $" << CCI << endl;
    cout << "\tEffective simple interest rate is " << ECIR*100 << "%" << endl;
    cout << "\tBalance with simple interest rate at the effective rate is $" << CIER << endl;
    return 0;
}
