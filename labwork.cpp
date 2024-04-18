#include <iostream>
using namespace std;

//add a new function to use in the body later
double celciusToFahrenheit(double celcius);
double fahrenheitToCelcius(double fahrenheit);

int main()
{
	double temperature, convertedTemp; //Declare convertedTemp outside of if-else body
	char scale;
	
	cout << "Enter Temperature: ";
	//Must contain ';' at the end of the line
	cin >> temperature;
	
	cout << "Enter scale (C for Celcius, F for Fahrenheit): ";
	cin >> scale;
	
	if (scale == 'C' || scale == 'c') 
	{
		//change the scale to temperature arguement
		convertedTemp = celciusToFahrenheit(temperature);
		cout << "Converted temperature: " << convertedTemp << "F" << endl;
	} 
	else if (scale == 'F' || scale == 'f')
	{
		double convertedTemp = fahrenheitToCelcius (temperature);
		cout << "Converted temperature: " << convertedTemp << "C" << endl;	
	} 
	//Tell the user they put an invalid scale
	else 
	{
		cout << "The scale you entered is invalid." << endl; 
	} 	
	

	return 0;
	
}

//Function to convert Celcius to Fahrenheit
//need to declare double for celcius
double celciusToFahrenheit(double celcius)
{
	return (celcius * 9/5) + 32;
}

//Function to convert Fahrenheit to Celcius
double fahrenheitToCelcius(double fahrenheit)
{
	return (fahrenheit - 32) * 5/9;
}