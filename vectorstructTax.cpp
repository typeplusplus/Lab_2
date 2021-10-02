// This program demonstrates how to use an array of strucures
#include <iostream>
#include <iomanip>
#include <vector>
#include "printmefirst.h"

using namespace std;

/*
Purpose: This function will declare the new data type taxPayer which will contain the relevant information. In the main function, we declare the vector taxPayerList and call the function print me first. The user is then asked to input information for each of the individual tax payers. The information is stored in the declared vector and then printed out for visibility.
@param - none
@return - none
*/

struct taxPayer //Declare structure
{
  float taxRate; //Rate for individual
  float income; //Income of individual
  float taxes; //How much taxes they pay
};

int main()
{
  vector <taxPayer>taxPayerList; //Declare vector
  printmefirst("Ron Sha", "CS-116 array example"); //Call print me first
  
  cout << fixed << showpoint << setprecision(2); //Keep decimal places at 2 places
  cout << "Please enter the annual income and tax rate for 3 tax payers: " << endl; //Output text
  cout << endl; //Linebreak
  for (int count = 0; count < 3; count++) //Cycle through count to 3
    {
      taxPayer x; //Declare variable for temp taxpayer
      cout << "Enter this year's income for tax payer " << (count + 1) << ": "; //Output text
      cin >> x.income; //Write to variable

      cout << "Enter the tax rate for tax payer # " << (count + 1) << ": "; //Output text
      cin >> x.taxRate; //Write to variable

      x.taxes = x.income * x.taxRate/100; //Evaluate value for taxes

      taxPayerList.push_back(x); //Add information to vector
      cout << endl; //Linebreak
    }
  
  cout << "Taxes due for this year: " << endl << endl; //Output text
  
  for (int index = 0; index < 3; index++) //Cycle through count to 3 
  {
  	//Output text information 
    cout << "Tax Payer # " << (index + 1) << " Income: " << "$ " << taxPayerList[index].income << endl;  
    cout << "Tax Payer # " << (index + 1) << " Tax Rate: " << taxPayerList[index].taxRate << "%" << endl;  
    cout << "Tax Payer # " << (index + 1) << " Taxes: " << "$ " << taxPayerList[index].taxes << endl;
    cout << endl; //Linebreak
  }
return 0;
}
