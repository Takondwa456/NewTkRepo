#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void subscription(){
	int random = time(0); 
	srand(random);
	int daysUntilExpiration = rand() % 12;
	cout << "\nThe number of day(s) until expiration is " << daysUntilExpiration << endl;

	switch(daysUntilExpiration){
		case 0: cout << "\nyour subscription has expired\n";
				break;
		case 1: 
		case 2: 
		case 3: 
		case 4: 
		case 5: cout << "Your subscription expires in " << daysUntilExpiration << " days";
				cout << "Renew now and save 10%! ";
				break;
		case 6: 
		case 7:
		case 8:
		case 9:
		case 10: cout << "Your subscription will expire soon. Renew now!";
				 break;
		default: cout << "You have an active subscription";
	}
}

void stringArray(){
	cout << '\n';
	char letter = 'B';
	string array[] = {"B123", "C234" ,"A345" ,"C15" ,"B177" ,"G3003" ,"C235" ,"B179"}; 
	for(string i : array)
	if (i[0] == letter){
		cout << i << '\t';
	}		
}

void integerAccept(){
	int number; cin >> number;
	

}

int main(){	
	/*subscription();
	stringArray();*/

	return 0;
}
  