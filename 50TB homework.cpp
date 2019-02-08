#include<iostream>
#include<ctime>
#include<string>
#include<cstdlib>
#include<limits>
using namespace std;

int main() {
	
	srand(time(NULL));
	int funNum;
	char Destiny;
	 do{
	 	cout << "Do you want to have fun?(y/n)" << endl;
	 	cin >> Destiny;
	 	if (Destiny == 'Y'|| Destiny =='y'){
	 		funNum = (rand() % 262460) + 1; 
	 		cout <<"https://nhentai.net/g/" << funNum << endl;
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
