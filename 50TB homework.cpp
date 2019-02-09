#include<iostream>
#include<ctime>
#include<string>
#include<cstdlib>
#include<limits>
using namespace std;

int main() {
	
	srand(time(NULL));
	unsigned long funNum = 0;
	unsigned long funNum2 = 0;
	unsigned long Arc1 = 263;
	unsigned long Arc2 = 701; // 262529 is the currect number of hentai.
	char Destiny;
	 do{
	 	cout << "Do you want to have fun?(y/n)" << endl;
	 	cin >> Destiny;
	 	if (Destiny == 'Y'|| Destiny =='y'){
	 		funNum = (rand()% Arc1); //0 to 262;
	 		funNum2 = (rand()% Arc2); // 0 - 550.
	 		if(funNum == '0'){
	 			cout <<"";
			 }
	 		cout <<"https://nhentai.net/g/" << funNum << funNum2 << endl;
		 }
	 	else if(Destiny == 'N'|| Destiny == 'n'){
	 		cout << "Sayonara,Weeb." << endl;
	 		return 0;
		 }
		else {
			cout << "Wrong command, you Baka. Try again." << endl;
		}
	
		cin.clear();
		cin.ignore(numeric_limits<char>::max(),'\n');
	 }while(!(Destiny == 'N'|| Destiny == 'n'));
	

	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
