#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
 // Variables
 string firstName, lastName;
 double baseSalary, commissionPercent, totalSales, expenses;
 double commissionAmount, totalPay;

 // Prompt for file name
 string filename;
 cout << "Enter the name of the input file: ";
 cin >> filename;

 // Open file
 ifstream inputFile(filename);
 if (!inputFile) {
 cerr << "Error: Could not open file." << endl;
 return 1;
 }

 // Read and process each employee
 while (inputFile >> firstName >> lastName) {
 inputFile >> baseSalary >> commissionPercent;
 inputFile >> totalSales;
 inputFile >> expenses;

 // Compute commission and total pay
 commissionAmount = (commissionPercent / 100.0) * totalSales;
 totalPay = baseSalary + commissionAmount - expenses;

 // Output formatted results
 cout << fixed << setprecision(2);
 cout << "\nPayroll data for " << firstName << " " << lastName << "\n\n";
 cout << setw(15) << left << "Base Salary:" << setw(10) << right << baseSalary << endl;
 cout << setw(15) << left << "Commission:" << setw(10) << right << commissionAmount;
 cout << " (" << setprecision(1) << commissionPercent << "% of " << setprecision(2) << totalSales << ")" << endl;
 cout << setw(15) << left << "Expenses:" << setw(10) << right << expenses << endl;
 cout << setw(15) << left << "" << "----------" << endl;
 cout << setw(15) << left << "Total:" << setw(10) << right << totalPay << endl;
 }

 inputFile.close();
 return 0;
}
