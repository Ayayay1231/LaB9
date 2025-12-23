#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
#include<cmath>
using namespace std;

int main(){	

	int i = 1;
	double in , rate , ppy ,interest, total ,Newb,prev;
	
	cout << "Enter initial loan: ";
	cin >> in ;
	cout << "Enter interest rate per year (%): ";
	cin >> rate ;
	cout << "Enter amount you can pay per year: ";
	cin >> ppy ;
	prev = in ;
	interest = (prev*rate)/100 ;
	total = interest+prev ;
	Newb = total - ppy ;
	

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	
		/* code */
	
	
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	
	while(Newb >= 0 || ppy >= total  ){
		
			

	if(ppy >= total){
		ppy = total ;
		Newb = total - ppy ;
	} 


	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	cout << setw(13) << left << prev;
	cout << setw(13) << left << interest;
	cout << setw(13) << left << total;
	cout << setw(13) << left << ppy;
	cout << setw(13) << left << Newb;
	cout << "\n";
	
	if(ppy >= total){
		break;	
	} 


	if(Newb == 0 ){
		 break ;}
	prev = Newb ;
	interest = (prev*rate)/100 ;
	total = interest+prev ;
	Newb = total - ppy ;
		i++;
	
		
		if(total - ppy <= 0 && total <= ppy){
			ppy = total ;
			Newb = total - ppy;
			
		}
		
		 }	 
	
	
	
	return 0;
}
