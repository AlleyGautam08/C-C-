#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

void mainMenu();

class Management{
	public:
		Management(){
			mainMenu();
		}
};

class Details{
	public:
		static string name, gender;
		int Phone;
		int age;
		string add;
		static int cID;
		char arr[100];
		
		void information(){
			cout<<"\n Enter the customer ID: ";
			cin>>cID;
			cout<<"\n Enter the name :";
			cin>>name;
			cout<<"\n Enter the age :";
			cin>>age;
			cout<<"\n Address :";
			cin>>add;
			cout<<"\n Gender :";
			cin>>gender;
			cout<<"Your details are saved with us \n"<<endl;
		}
};

int Details::cID;
string Details::name;
string Details::gender;

class registration{
	public:
		static int choice ;
		int choice1;
		int back;
		static float charges;
		
		void flights(){
			string flight[]={"Dubai","Canada","UK","USA","Australia","Europe"};
			for(int a=0; a<6; a++){
				cout<<(a+1)<<".filght to"<<flight[a]<<endl;
			}
			cout<<"\ Welcom to the Airline!"<<endl;
			cout<<"Press the number of the country of which you want to book the flight:";
			cin>>choice;
			
			switch(choice){
				case 1:{
					cout<<"______________________Welcome to Dubai________________________\n "<<endl;
					
					cout<<"Your Comfort is our priority. Enjoy the journey!"<<endl;
					
					cout<<"Following are the flights \n"<<endl;
					
					cout<<"1. DUB - 493"<<endl;
					cout<<"\t 04-01-2022 8:00AM 10hrs Rs: 14000"<<endl;
					
					cout<<"1. DUB - 593"<<endl;
					cout<<"\t 05-01-2022 7:00AM 18hrs Rs: 12000"<<endl;
					
					cout<<"1. DUB - 993"<<endl;
					cout<<"\t 06-01-2022 6:00AM 14hrs Rs: 16000"<<endl;
					
					cout<<"\n Select the flight you want to book :";
					cin>>choice1;
					
					if(choice1==1){
						charges=14000;
						cout<<"\n You have successfully booked the flight DUB - 493"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}else if(choice1==2){
						charges=12000;
						cout<<"\n You have successfully booked the flight DUB - 593"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else if(choice1==3){
						charges=16000;
						cout<<"\n You have successfully booked the flight DUB - 993"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else{
						cout<<"Invalid input , shifting to the previous menu"<<endl;
						flights();
					}
					cout<<"Press any key to go back to the menu"<<endl;
					cin>>back;
					if(back==1){
						mainMenu();
					}else{
						mainMenu();
					}
					break;
				}
				case 2:{
						cout<<"______________________Welcome to Canadian Airlines________________________\n "<<endl;
					
					cout<<"Your Comfort is our priority. Enjoy the journey!"<<endl;
					
					cout<<"Following are the flights \n"<<endl;
					
					cout<<"1. DUB - 393"<<endl;
					cout<<"\t 04-01-2022 9:00AM 10hrs Rs: 14000"<<endl;
					
					cout<<"1. DUB - 293"<<endl;
					cout<<"\t 05-01-2022 10:00AM 18hrs Rs: 12000"<<endl;
					
					cout<<"1. DUB - 193"<<endl;
					cout<<"\t 06-01-2022 11:00AM 14hrs Rs: 16000"<<endl;
					
					cout<<"\n Select the flight you want to book :";
					cin>>choice1;
					
					if(choice1==1){
						charges=14000;
						cout<<"\n You have successfully booked the flight CAN - 393"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}else if(choice1==2){
						charges=12000;
						cout<<"\n You have successfully booked the flight CAN - 293"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else if(choice1==3){
						charges=16000;
						cout<<"\n You have successfully booked the flight CAN - 193"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else{
						cout<<"Invalid input , shifting to the previous menu"<<endl;
						flights();
					}
					cout<<"Press any key to go back to the menu"<<endl;
					cin>>back;
					if(back==1){
						mainMenu();
					}else{
						mainMenu();
					}
					break;
				}
				case 3 :{
						cout<<"______________________Welcome to UK Airlines________________________\n "<<endl;
					
					cout<<"Your Comfort is our priority. Enjoy the journey!"<<endl;
					
					cout<<"Following are the flights \n"<<endl;
					
					cout<<"1. UK - 943"<<endl;
					cout<<"\t 04-02-2022 8:00PM 10hrs Rs: 19000"<<endl;
					
					cout<<"\n Select the flight you want to book :";
					cin>>choice1;
					
					if(choice1==1){
						charges=19000;
						cout<<"\n You have successfully booked the flight UK - 943"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else{
						cout<<"Invalid input , shifting to the previous menu"<<endl;
						flights();
					}
					cout<<"Press any key to go back to the menu"<<endl;
					cin>>back;
					if(back==1){
						mainMenu();
					}else{
						mainMenu();
					}
					break;
				}
				case 4 : {
						cout<<"______________________Welcome to USA ________________________\n "<<endl;
					
					cout<<"Your Comfort is our priority. Enjoy the journey!"<<endl;
					
					cout<<"Following are the flights \n"<<endl;
					
					cout<<"1. UK - 1493"<<endl;
					cout<<"\t 04-03-2022 8:00AM 10hrs Rs: 14000"<<endl;
					
					cout<<"1. UK - 1593"<<endl;
					cout<<"\t 05-03-2022 3:00AM 18hrs Rs: 12000"<<endl;
					
					cout<<"1. UK - 1993"<<endl;
					cout<<"\t 06-03-2022 6:00AM 14hrs Rs: 16000"<<endl;
					
					cout<<"\n Select the flight you want to book :";
					cin>>choice1;
					
					if(choice1==1){
						charges=14000;
						cout<<"\n You have successfully booked the flight UK - 1493"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}else if(choice1==2){
						charges=12000;
						cout<<"\n You have successfully booked the flight UK - 1593"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else if(choice1==3){
						charges=16000;
						cout<<"\n You have successfully booked the flight UK - 1993"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else{
						cout<<"Invalid input , shifting to the previous menu"<<endl;
						flights();
					}
					cout<<"Press any key to go back to the menu"<<endl;
					cin>>back;
					if(back==1){
						mainMenu();
					}else{
						mainMenu();
					}
					break;
				}
				case 5 :{
						cout<<"______________________Welcome to Australia________________________\n "<<endl;
					
					cout<<"Your Comfort is our priority. Enjoy the journey!"<<endl;
					
					cout<<"Following are the flights \n"<<endl;
					
					cout<<"1. AUS- 2493"<<endl;
					cout<<"\t 04-01-2022 8:00AM 10hrs Rs: 14000"<<endl;
					
					cout<<"1. AUS - 2593"<<endl;
					cout<<"\t 05-01-2022 7:00AM 18hrs Rs: 12000"<<endl;
					
					cout<<"1. AUS - 2993"<<endl;
					cout<<"\t 06-01-2022 6:00AM 14hrs Rs: 16000"<<endl;
					
					cout<<"\n Select the flight you want to book :";
					cin>>choice1;
					
					if(choice1==1){
						charges=14000;
						cout<<"\n You have successfully booked the flight DUB - 2493"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}else if(choice1==2){
						charges=12000;
						cout<<"\n You have successfully booked the flight DUB - 2593"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else if(choice1==3){
						charges=16000;
						cout<<"\n You have successfully booked the flight DUB - 2993"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else{
						cout<<"Invalid input , shifting to the previous menu"<<endl;
						flights();
					}
					cout<<"Press any key to go back to the menu"<<endl;
					cin>>back;
					if(back==1){
						mainMenu();
					}else{
						mainMenu();
					}
					break;
					break;
				}
				case 6 :{
						cout<<"______________________Welcome to Europe ________________________\n "<<endl;
					
					cout<<"Your Comfort is our priority. Enjoy the journey!"<<endl;
					
					cout<<"Following are the flights \n"<<endl;
					
					cout<<"1. EU - 3493"<<endl;
					cout<<"\t 04-01-2022 8:00AM 10hrs Rs: 14000"<<endl;
					
					cout<<"1. EU - 3593"<<endl;
					cout<<"\t 05-01-2022 7:00AM 18hrs Rs: 12000"<<endl;
					
					cout<<"1. EU - 3993"<<endl;
					cout<<"\t 06-01-2022 6:00AM 14hrs Rs: 16000"<<endl;
					
					cout<<"\n Select the flight you want to book :";
					cin>>choice1;
					
					if(choice1==1){
						charges=14000;
						cout<<"\n You have successfully booked the flight DUB - 3493"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}else if(choice1==2){
						charges=12000;
						cout<<"\n You have successfully booked the flight DUB - 3593"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else if(choice1==3){
						charges=16000;
						cout<<"\n You have successfully booked the flight DUB - 3993"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else{
						cout<<"Invalid input , shifting to the previous menu"<<endl;
						flights();
					}
					cout<<"Press any key to go back to the menu"<<endl;
					cin>>back;
					if(back==1){
						mainMenu();
					}else{
						mainMenu();
					}
					break;
				}
				default : {
					cout<<"Invalid input, shifting you to the main menu !"<<endl;
					mainMenu();
					break;
				}	
			}
		}
	
};

float registration::charges;
int registration::choice;

class ticket : public registration, Details{
	public:
		void bill(){
			string destination::" ";
			ofstream outf("record.txt");
			{
				outf<<"______________________XYZ Airlines_____________________"<<endl;
				outf<<"______________________Ticket___________________________"<<endl;
				outf<<"_______________________________________________________"<<endl;
				
				outf<<"Customer ID:"<<Details<<cID<<endl;
				outf<<"Customer Name:"<<Details<<name<<endl;
				outf<<"Customer Gender:"<<Details<<gender<<endl;
				outf<<"\t Description"<<endl<<endl;
				
				if(registrstion::choice==1){
					destination*"Dubai";
				}
				else if(registrstion::choice==2){
					destination*"Canada";
				}
				else if(registrstion::choice==3){
					destination*"UK";
				}
			    else if(registrstion::choice==4){
					destination*"USA";
				}
				else if(registrstion::choice==5){
					destination*"Australia";
				}
				else if(registrstion::choice==6){
					destination*"Europe";
				}
				cout<<"Destination\t\t"<<destination<<endl;
				cout<<"flight cost :\t\t"<<registration::charges<<endl;
			}
			outf.close();
		}
		void disbill(){
			ifstream ifs("record.txt");
			{
				if(!ifs){
					cout<<"file error"<<endl;
				}
				while(!ifs.eof){
					ifs.getline(arr,100);
					cout<<arr<<endl;
				}
			}
			ifs.close();
		}
};

void mainMenu(){
	int Ichoice;
	int schoice;
	int back;
	
	cout<<"\t                 XYZ Airline \n"<<endl;
	cout<<"\t_________________Main Menu______________"<<endl;
	
	cout<<"__________________________________________"<<endl;
	cout<<"|\t\t\t\t\t\t|"<<endl;
	
	cout<<"\t|\t  Press 1 to add the Customer Details    \t|"<<endl;
	cout<<"\t|\t  Press 2 for flight Resgistration       \t|"<<endl;
	cout<<"\t|\t  Press 3 for Tickets and charges        \t|"<<endl;
	cout<<"\t|\t  Press 4 to Exit                        \t|"<<endl;
	cout<<"|\t\t\t\t\t\t|"<<endl;
	cout<<"_________________________________________________"<<endl;
	
	cout<<"Enter the choice : ";
	cin>>Ichoice;
	
	Details d;
	registration r;
	ticket t;
	
	switch(Ichoice){
		case 1: {
			cout<<"________________Customer_________________\n"<<endl;
			d.information();
			cout<<"Press any key to go back main menu";
			cin>>back;
			
			if(back==1){
				mainMenu();
			}else{
				mainMenu();	
			}
			break;
		}
		case 2:{
			cout<<"_________Book a flight using this system________________\n"<<endl;
			r.flights();
			break;
		}
		case 3: {
			cout<<"________GET YOUR TICKET___________\n"<<endl;
			t.bill();
			cout<<"Your ticket is printed , you can collect it \n"<<endl;
			cout<<"Press 1 to display your ticket";
			cin>>back;
			if(back==1){
				t.display();
				cout<<"Press any key to go back main menu";
				cin>>back;
				if(back==1){
				mainMenu();
			}else{
				mainMenu();	
			}
			}
			else{
				mainMenu();
			}
			break;
		}
		case 4:{
			cout<<"\n\n\t____________Thank You !____________"<<endl;
			break;
		}
		default:{
			cout<<"Invalid input, Please try again!\n"<<endl;
			mainMenu();
			break;
		}
	}
}

int main(){
	Management Mobj;
	return 0;
}
