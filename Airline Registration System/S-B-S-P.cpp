#include<iostream>
#include<fstream>

using namespace std ;

class shopping{
	private:
		m;
		int pcode;
		float price;
		float dis;
		string pname;
		
		public:
			void menu();
			void administrator();
			void buyer();
			void add();
			void edit();
			void rem();
			void list();
			void receipt();
};
void shopping :: menu(){
	int choice;
	string email;
	string password;
	
	cout<<"\t\t\t\t_____________________________________________________\n";
	cout<<"\t\t\t\t                                                     \n";
	cout<<"\t\t\t\t             Supermarket main menu                   \n";
	cout<<"\t\t\t\t                                                     \n";
	cout<<"\t\t\t\t_____________________________________________________\n";
	cout<<"\t\t\t\t                                                     \n";
	cout<<"\t\t\t\t|  1)  Administrator    |\n";
	cout<<"\t\t\t\t|                       |\n";
	cout<<"\t\t\t\t|  1)  Buyer            |\n";
	cout<<"\t\t\t\t|                       |\n";
	cout<<"\t\t\t\t|  3)  Exit             |\n";
	cout<<"\t\t\t\t|                       |\n";
	cout<<"\n\t\t\t   Please Select : ";
	cin>>choice;
	
	switch(choice){
		case 1 :
		    cout<<"\t\t\t Please Login  \n";
		    cout<<"\t\t\t Enter Email   \n";
		    cin>>email;
		    cout<<"\t\t\t Password      \n";
		    cin>>password;
		    
		    if(email= "Alleygautam308@gmail.com" && password = "alley@123"){
		    	Administrator();
			}else{
				cout<<"Invalid email/password";
			}
			break;
	}
	case 2 :{
		
		buyer();
	}
	case 3 :{
		
		exit(0);
	}
	default :
		{
			cout<< "Please select from the given options";
		}
}
goto m;
}
void shopping :: administrator(){
	int choice;
	cout<<"\n\n\n\t\t\t Administrator menu";
	cout<<"\n\t\t\t |__________ 1) Add the product______|";
	cout<<"\n\t\t\t |                                   |";
	cout<<"\n\t\t\t |__________ 2) Modify the product___|";
	cout<<"\n\t\t\t |                                   |";
	cout<<"\n\t\t\t |__________ 3) Delete the product___|";
	cout<<"\n\t\t\t |                                   |";
	cout<<"\n\t\t\t |__________ 4) Bact to main menu____|";
	cout<<"\n\n\t  Please enter your choice ";
	cin>>choice;
	
	switch(choice){
		case 1 :
			add();
			break;
		case 2 :
			edit();
			break;
		case 3 :
			rem();
			break;
	}
}


























