#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
double A,rate,pay,C,Total;
    int i = 1;
	cout << "Enter initial loan: ";
	    cin >> A;
	cout << "Enter interest rate per year (%): ";
	    cin >> rate;
	cout << "Enter amount you can pay per year: ";
	    cin >> pay;
	

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect

while(A > 0)	{
	C = A*rate/100.0;
    Total = A+C;
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	cout << setw(13) << left << A;
	cout << setw(13) << left << C;
	cout << setw(13) << left << Total;
	if (Total <= pay)
		{
	        pay = Total;
			A = Total - Total;
			cout << setw(13) << left << pay;
			cout << setw(13) << left << A;
			break;
		}
	cout << setw(13) << left << pay;
		A = Total - pay;
		cout << setw(13) << left << A;
		cout << "\n";
		i++;
	}
	return 0;
}
