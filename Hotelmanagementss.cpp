#include <iostream>
#include <string>
using namespace std;

string username;
string password;
string ownername = "owner";
string ownerpass = "ownerpass";
string managername = "manager";
string managerpass = "managerpass";
int choice;
int ID = 0; 
const int Arooms = 1000;
const int Brooms = 333;
const int Crooms = 455;
const int Frooms = 212;
int i;
const int j = 100000;
int n;
int paym;
string oname;
string upi;
string card;
string cde;
int ds;
int id = 0 ;
int Id = 0;
int pr = 0;
int previousService = 0; 
int lastService = 0;     
int currentService = 0; 


class MainOffice 
{
public:
    void ownerDesktop() {
        cout << "Owner's Desktop" << endl;
        cout << "1. Rooms " << endl;
        cout << "2. Management Services" << endl;
        cout << "3. Change Credentials " << endl;
        cout << "4. Logout " << endl;
        cout << "5. Quit" << endl;

        ownerChoice();
    }

    void managerDesktop() {
        cout << "Manager's Desktop" << endl;
        cout << "1. Rooms " << endl;
        cout << "2. Change Credentials " << endl;
        cout << "3. Logout " << endl;
        cout << "4. Quit" << endl;

        managerChoice();
    }

    void managementSystem() {
       cout << "Enter username: "<<endl;
        cin >> username;
        if(username == ownername )
		{
			ID = 1;
		 } 
		 else
		 {
		 	if(username == managername)
		 	
		 	{
		 		ID = 2;
			 }
			 else
			 {
			 	if(username!= ownername || username != managername )
                {
                	while(i<j)
                	{
                			cout<<"Invalid username " << endl;
      	cout<<"Enter the username"<<endl;
      	cin>>username;
      	
      	if(username == ownername || username == managername)
      	{
      		break;
		  }
		  i++;
					}
				}
			 }
		 }
		 

        cout << "Enter password: " <<endl;
        cin >> password;
        if(password == ownerpass)
		{
			ID = 1;
		 } 
		 else
		 {
		 	if(password == managerpass)
		 	
		 	{
		 		ID = 2;
			 }
			 else
			 {
			 	if(password != ownerpass || password != managerpass)
                {
				
                	while(i<j)
                	{
                			cout<<"Invalid password " << endl;
      	cout<<"Enter the password"<<endl;
      	cin>>password;
       if(password == ownerpass || password == managerpass)
       {
       	break;
	   }
  i++;
  }
  }
  }
}

  if(username == ownername && password == managerpass)
      	{
      		while(i<j)
                	{
        cout<<"Invalid password " << endl;
      	cout<<"Enter the password"<<endl;
      	cin>>password;
      	if(password == ownerpass)
      	{
      		break;
		  }
		  i++;
		  }
	}
		  else
		  {
		  	if(username == managername && password == ownerpass)
		  	{
		  		while(i<j)
                	{
        cout<<"Invalid password " << endl;
      	cout<<"Enter the password"<<endl;
      	cin>>password;
      	if(password == managerpass)
      	{
      		break;
		  }
		  i++;
			  }
		  }
	}

     
	  
	  if (username == ownername && password == ownerpass) {
            ID = 1;
            ownerDesktop();
        } else if (username == managername && password == managerpass) {
            ID = 2;
            managerDesktop();
        } 
    }

    void ownerChoice() {
        cin >> choice;
        switch (choice) {
            case 1:
                displayRooms();
                break;
            case 2:
               managementservices();
                break;
            case 3:
                changeCredentials();
                break;
            case 4:
                logout();
                break;
            case 5:
               quit();
                break;
            default:
                cout << "Invalid choice" << endl;
                ownerChoice();
        }
    }

    void managerChoice() {
        cin >> choice;
        switch (choice) {
            case 1:
                 displayRooms();
                break;
            case 2:
                changeCredentials();
                break;
            case 3 :
                logout();
                break;
            case 4:
               quit();
                break;
            default:
                cout << "Invalid choice" << endl;
                managerChoice();
        }
    }

    void changeCredentials() 
	{
        string oldname, oldpass, newname, newpass;
        cout<<"Enter the old username"<<endl;
			cin>>oldname;
			if(oldname == username)
			{
				while(oldname == username)
				{
					break;
				}
			}else
			{
				while(i<=j) 
	    	{
			cout<<"Invalid"<<endl;
	    	cout<<"Enter the correct old username"<<endl;
	    	cin>>oldname;
	    		if(oldname == username)
			{
				break;
			}
		}
	}
			
		if(oldname == username)
		{
			cout<<"Enter the new username"<<endl;
			cin>>newname;
			cout<<"Username "<< username <<" has been changed to "<<"Username "<<newname<<endl;
			cout<<""<<endl;
		}
		cout<<"Enter the old password"<<endl;
			cin>>oldpass;
			if(oldpass == password)
			{
				while(oldpass == password)
				{
					break; 
				}
			}  
			 else
			{
				while(i<=j) 
	    	{
			cout<<"Invalid"<<endl;
	    	cout<<"Enter the correct old password"<<endl;
	    	cin>>oldpass;
	    		if(oldpass == password)
			{
				break;
			}
		}
	}
			
		if(oldpass == password)
		{
			cout<<"Enter the new password"<<endl;
			cin>>newpass;
			cout<<"Password "<< password <<" has been changed to "<<" Username "<<newpass<<endl;
			cout<<""<<endl;
		}
	  cout<<"Username"<<endl;
   	cin>>username;
   		if(username == newname)
   		{
   			while(username == newname)
   			{
			   
			   break;
   	}
   }
   			else{
   		if(username != newname)
   		{
   			while(i<=j) 
	    	{
			cout<<"Invalid Username"<<endl;
	    	cout<<"Enter the correct username"<<endl;
	    	cin>>username;
	    	if(username == newname)
	    	{
	    		break;
			}
	    	i++;
		   }

}
}
        cout<<"Password "<<endl;
        cin>>password;
        if(password == newpass)
   		{
   			while(password == newpass)
   			{
			   break;
   	}
   }
   	else
    {  
   			while(i<=j)
	    	{
			cout<<"Incorrect password"<<endl;
	    	cout<<"Enter the correct password"<<endl;
	    	cin>>password;
	    	if(password == newpass)
	    	{
	    		break;
			}
	    	i++;
		   }
	}


        if (ID == 1) 
        {
            ownername = newname;
            ownerpass = newpass;
        } 
        else if (ID == 2)
         {
            managername = newname;
            managerpass = newpass;
        }

        username = newname;
        password = newpass;

        cout << "Credentials updated successfully." << endl;

        if (ID == 1) {
            ownerDesktop();
        } else if (ID == 2) {
            managerDesktop();
        }
    }

    void logout() {
        cout << "Logged out successfully." << endl;
        username = "";
        password = "";
        ID = 0;
        login(); 
    }

    void displayRooms() {
        cout << "Welcome to the Parmeet Services " << endl;
        cout << "The services are Idovided in the following hotels" << endl;
        cout << "Hyatt Residency " << endl;
        cout << "Radison Blue " << endl;
        cout << "Hotel Sunshine " << endl;
        cout << "Gulmohar Hotel " << endl;
        cout << "Hotel Honeysweet " << endl;
        cout << "Kalyani Hotel " << endl;
        cout << "Hotel Parth " << endl;
        cout << "In total there are about " << Arooms << " which are further categorized according to budget" << endl;
        cout << "Out of " << Arooms << ", " << Brooms << " are booked" << endl;
        cout << "Whereas " << Crooms << " are left for cleaning yet" << endl;
        cout << Frooms << " are free (not booked)" << endl; 
        cout<<""<<endl;
        select();
}
void select()
{

    cout<<"Choose a number from the following to choose the required package"<<endl;
  	cout<<"1 . luxurious package"<<endl;
  	cout<<"2 . normal  package"<<endl;
  	cout<<"3 . budget friendly package"<<endl;
  	cout<<"4 . Idivate villa"<< endl;
  	cout<<"5 . exit"<<endl;
  	cout<<"6 . Previous "<<endl;
  	chooserooms();
    }

    void login() {
       
        managementSystem();
    }
    void quit()
    {
    	while(i<j)
    	{
    		break;
		}
	}
	void chooserooms()
	{
		cin>>n;
		switch(n)
		{
			case 1:
				{
				luxurious();
				select();
				
				break;	
				}
			case 2:
				{
				normal();
				select();
					
					
				break;
				}
			case 3 :
				
				{
				budgetfriendly();
				select();
				break;	
				}
		    case 4 :
		    	{
		    		villa();
		    		select();
							    		
		    	break;	
				}
			case 5:
				{
					quit();
					break;
				}
			case 6 :
				{
					Previousmenu();
					break;
				}
			default :
				{
					cout<<"Invalid Choice"<<endl;
					chooserooms();
				}
		
		
		}
	}
void luxurious()
		{ 
	const	 int expense = 9000;
	string pay;
		  cout<<"Enter your name"<<endl; 	
		 cin>>oname;
		 cout<<"Luxury hotel services include a bedroom with Idoper furnished furniture with attached balcony and some cutlary inside with some food and beverages"<<endl;
		 cout<<"This bedroom also has an attached washroom with a bathtub , two bathrobs and two pairs of slippers "<<endl;
		 cout<<"Per day expense of the room is "<<expense<<endl;
		 method();
	}
	void method()
	{
		 cout<<"Payment method"<<endl;
	    cout<<"Press 1 to pay through cash"<<endl;
		cout<<"Pres 2 to pay via UPI"<<endl;
		cout<<"Press 3 to pay via credit/debit card "<<endl;
		deposit();	
	}
void normal()
{
	const int exp = 5000;
		string nam ;
		  cout<<"Enter your name"<<endl; 	
		 cin>>nam;
		 cout<<"Normal hotel includes one bedroom with attached washroom and balcony"<<endl;
		 cout<<"Only breakfast is included in this package"<<endl;
		 cout<<"Per day expense of this hotel is "<< exp<<endl;
	method();
}
void budgetfriendly()
{
	const   int expe = 3000;
	   	string na ;
		  cout<<"Enter your name"<<endl; 	
		  cin>>na;
		  cout<<"Budget friendly hotel includes a bedroom with attached washroom"<<endl;
		  cout<<"No breakfast , Lunch or Dinner is included in this package"<<endl;
		  cout<<"Per day expense of this hotel is"<<expe<<endl;
 method();
	
}

void villa()
{
            	string perm ;
				string Number;
				string Budget;
		  cout<<"Enter your name"<<endl; 	
		        cin>>perm;
		  cout<<"Please fill the required information below"<<endl;
		 cout<<"Number of persons "<<endl;
		 cin>>Number;
		cout<<"Enter the apIdoximate budget for villa "<<endl;
		cin>>Budget;
	 
	 
	 string val = "40000";
	 string lac = "100000";
		if(Budget <=val)
{
	cout<<"Booking not available";
			  }
			  else{
			  	if(Budget> val && Budget<=lac)
			  	{
			  	cout<<"According to this budget you will get the following features in your villa"<<endl;
				  cout<<"The villa will have 4 bedrooms with attached bathrooms and 2 bedrooms without bathroom"<<endl;
				  cout<<"One common swimming pool with swimming accessories is also available which can be used by 17 people at a time"<<endl;
				  cout<<"Breakfast is also available in this package whereas Lunch, Snackes and Dinner are optional and has their own stringges"<<endl;
	  }
	  else
	  {
	  	if(Budget >lac)
	  	{
	  		cout<<"According to this budget you will get the following features in your villa"<<endl;
	  		cout<<"The villa will have 8 bedrooms with attached bathrooms and 4 bedrooms without bathroom"<<endl;
	  		cout<<"2 swimming pools are also available with swimming accessories and each swimming pool can be used by 25 people at a time"<<endl;
		    cout<<"Breakfast, lunch and dinner are available in this package whereas snacks are optional and has its own stringges"<<endl;
		  }
	  }
			  }	
		
		cout<<"Note : "<<Budget<<" is one day costing for a villa"<<endl;
	
	
	method();
}
	void deposit()
	{
	
		cin>>paym;
		switch(paym)
		{
			case 1 :
				{
				cout<<"Deposit the cash to manager at the main counter"<<endl;
				cout<<"THANK YOU FOR CHOOSING PARMEET SERVICES"<<endl;
				cout<<""<<endl;
				break;
		}
		case 2 :
		{
			
			cout<<"Enter your UPI ID or VPA"<<endl;
			cin>>upi;
			cout<<"Your transacrtion is completed "<<endl;
			               	cout<<"Your Payment has been Received"<<endl;
		  		  cout<<"Luxury hotel for "<<oname<<" has been booked"<<endl;
		  		  cout<<""<<endl;
			cout<<"THANK YOU FOR CHOOSING PARMEET SERVICES"<<endl;
			cout<<""<<endl;
				break;
			}
		case 3 :
		{
			cout<<"Enter 12 digit credit/debit number"<<endl;
			cin>>card;
			cout<<"Enter month and year of expire"<<endl;
			cin>>cde;
			               	cout<<"Your Payment has been Received"<<endl;
		  		  cout<<"Luxury hotel for "<<oname<<" has been booked"<<endl;
		  		  cout<<""<<endl;
			cout<<"THANK YOU FOR CHOOSING PARMEET SERVICES"<<endl;
			cout<<""<<endl;	
				break;
			
			}
		 default :
		 	{
		 		cout<<"invalid choice";
		 		deposit();
			 }
		}
	}

void FDO()
{   pr = Id;
    id=1;
	const int in = 11;
	const int out= 32;
	const int booked = 28;
	const int pend = 16;
	cout<<in<<" rooms have been checked in from last night "<<endl;
	cout<<out<<" rooms have been checked out from last night "<<endl;
	cout<<"Out of "<< out<<"," << pend <<" are left for cleaning" << endl;
	cout<<booked <<" rooms are booked for tomorrow"<<endl;
	cout<<"Natasha and Isha are available at the main counter till 8 pm "<<endl;
	cout<<"Shweta and Aditya will be available for next 16 hours at the main counter"<<endl;
    
   
    
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    managementservices();

}
void HAM()
{
	
	pr = Id; 
	id=2;
	cout<<"Basic General Instructions for house keeping staff"<<endl;
	cout<<"If possible, open the windows and air out the room"<< endl;

    cout<<"Check the thermostat, air conditioner, and lights to ensure they work Idoperly"<<endl;

    cout<<"Replace any flickering or burnt out bulbs"<<endl;

    cout<<"Test the drapes to make sure they slide easily"<<endl;

    cout<<"Look over the walls and ceilings for dust or cobwebs"<<endl;

   cout<<"Dust all appliances, fixtures, and furniture"<<endl;

   cout<<"Clean the coffee maker"<<endl;

   cout<<"Remove any dirty dishes and bowls from room service"<<endl;

   cout<<"Check the refrigerator for any items left behind by Idevious guests"<<endl;

   cout<<"Clean the microwave"<<endl;

   cout<<"Clean mirrors and glass surfaces"<<endl;

   cout<<"Wipe down the telephone"<<endl;

   cout<<"Ensure closet is stocked with hangers and luggage racks"<<endl;

   cout<<"Remove trash from trash cans and fit with new liners"<<endl;

   cout<<"Vacuum the room"<<endl;

   cout<<"Deodorize the room"<<endl;
  
   
   
const int team = 13;
cout<<"The team of "<< team << " members is cleaning the rooms from last 3 hours"<<endl;
cout<<""<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
managementservices();
}
void RM()
{
	pr = Id;
	id=3;
	const int cash = 1000000;
	const int ref = 50000;
	cout<<"Total cash available in the hotel is "<< cash << endl;
	cout<<"If anyone  of the advanced bookings is cancelled , then the refundable amount is "<< ref<< endl; 
    cout<<"Total revenue from the cash available ( " <<cash <<" ) is 700000"<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
   
    managementservices();
    
}
void MS()
{
	pr = Id;
	id=4;
	
	cout<<"Marketing includes :- "<<endl;
	cout<<"1. Brand Advertising/Marketing"<<endl;
	cout<<"2. Id and Communications"<<endl;
	cout<<"3. E-commerce"<<endl;
	cout<<"4. Activations and Events"<<endl;
	cout<<""<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
 
	
	cout<<""<<endl;
	
	cout<<"Job Roles"<<endl;
	cout<<"Entry level :- "<<endl;
	cout<<"Online Marketing Executive"<<endl;
	cout<<"Brand Executive"<<endl;
	cout<<"Content or Id Executive"<<endl;
	cout<<"Activations Executive"<<endl;
	
	cout<<""<<endl;
	
	cout<<"Supervisory Level"<<endl;
	cout<<"Head of Id"<<endl;
	cout<<"Head of Brand"<<endl;
	cout<<"Head of Activations"<<endl;
	cout<<"Head of Digital Marketing"<<endl;
	cout<<"Head of Sales"<<endl;
	
	cout<<""<<endl;
	
	cout<<"Managerial Level"<<endl;
	cout<<"Chief Marketing Officer"<<endl;
	cout<<"Chief Commercial Officer"<<endl;
	cout<<""<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
managementservices();
	}
void HRS()
{   
    pr = Id;
	id=5;
	cout<<"Staffing includes Specialized Activities"<<endl;
	cout<<"Recruitment i.e, search for qualified people"<<endl;
	cout<<"Analyzing jobs, collecting information about jobs to prepare job descriptions"<<endl;
	cout<<"Developing compensation & incentive plans"<<endl;
	cout<<"Training & development of employees for efficient performance & career growth."<<endl;
	cout<<"Maintaining labour relations & union management relations"<<endl;
	cout<<"Providing for social security & welfare of employees"<<endl;
	cout<<""<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
managementservices();
	
	
}
void FBO()
{
 pr = Id;
 id=6;
	cout<<"Food and Beverage Services - Operations :-"<<endl;
	cout<<"Food and Beverage Standards"<<endl;
	cout<<"Managing Buffets, Banquets, and Catered Events"<<endl;
	cout<<"Decors"<<endl;
	cout<<"Menu"<<endl;
	cout<<"Serving Equipment"<<endl;
	cout<<"Serving Norms"<<endl;
	cout<<""<<endl;
    cout<<""<<endl;
    cout<<""<<endl;   
	managementservices();              
	}


void managementservices()
{
    cout << "Press the respective button to know about the service" << endl;
    cout << "1. Front desk operations." << endl;
    cout << "2. Housekeeping and maintenance." << endl;
    cout << "3. Revenue management." << endl;
    cout << "4. Marketing and sales." << endl;
    cout << "5. Human resources and staffing." << endl;
    cout << "6. Food and beverage operations." << endl;
    cout << "7. Quit" << endl;
    cout << "8. Previous menu" << endl;

    detailedservices();
}

void detailedservices()
{
    cin >> ds;

    if (ds != 8) {
        previousService = lastService; 
        lastService = currentService;   
        currentService = ds;            
    }

    switch(ds)
    {
        case 1:
          
            FDO();
            break;
        case 2:
           
            HAM();
            break;
        case 3:
           
            RM();
            break;
        case 4:
           
            MS();
            break;
        case 5:
            HRS();
            break;
        case 6:
           
            FBO();
            break;
        case 7:
            quit();
            break;
        case 8:
            Previousmenu();
            break;
        default:
            cout << "Invalid" << endl;
            detailedservices();
            break;
    }    
}

void Previousmenu()  
{
    if (previousService != 0) {
      
        currentService = lastService;
        lastService = previousService;
        previousService = 0; 
    } else {
        
        currentService = lastService;
        lastService = 0;
        if(ID==1)
        {
        	 ownerDesktop();
		}
		else
		{
			if(ID == 2)
			{
				 managerDesktop();
			}
		}
    }

    switch(currentService)
    {
        case 1:
            FDO();
            break;
        case 2:
            HAM();
            break;
        case 3:
            RM();
            break;
        case 4:
            MS();
            break;
        case 5:
            HRS();
            break;
        case 6:
            FBO();
            break;
        default:
            managementservices();
            break;
    }
}

};
int main() {
    MainOffice office;
    office.login();
    return 0;
}
