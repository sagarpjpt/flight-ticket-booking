#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
void main_Menu();
class Management{
    public : 
        Management(){
            main_Menu();
        }
};
class Details{
    protected: 
        static string name,gender,M_no;
        string address;
        int age;
        static int c_id;
    public :    
        void information(){
            cout<<"\nEnter your Customer Id : ";
            cin>>c_id;
            cout<<"\nEnter your Name : ";
            cin>>name;
            cout<<"\nEnter your Age : ";
            cin>>age;
            cout<<"\nEnter your Address : ";
            cin>>address;
            m:
            int ch;
            cout<<"\nEnter your Gender ";
            cout<<"\n\tPress 1 for MALE";
            cout<<"\n\tPress 2 for FEMALE";
            cout<<"\n\tPress 3 for Other\n\t: ";
            cin>>ch;
            switch(ch){
                case 1:
                    gender="male";
                    break;
                case 2: 
                    gender="female";
                    break;
                case 3:
                    gender="others";
                    break;
                default :
                    cout<<"\nplease Press write key !\n";
                    goto m;
            }
            cout<<"\nEnter your Phone Number : ";
            cin>>M_no;
            cout<<"\n________Done___________\n";
        }
};
int Details::c_id;
string Details::name;
string Details::gender;
string Details::M_no;

class Registration {
    public :
        static int choice;
        static float charges;
        void flights(){
            int choice1;
            string flight_N[]={"DUBAI","CANADA","UK","USA"};
            
            for(int i=0;i<4;i++){
                cout<<"__________________________________\n";
                cout<<i+1<<" flights to    "<<flight_N[i]<<endl;
            }

            cout<<"\n\t_____Welcome to the Airlines_______\n\n";
            cout<<"\n Press the Number of the country of which you want to book a flight of : ";
            cin>>choice;
            
            switch(choice){
                case 1:
                    cout<<"\n____________Welcome to DUBAI EMIRATES__________\n\n";
                    cout<<"\nFollowing are the flights Choose from the list\n";
                    cout<<"\n1. DUB-123\n";
                    cout<<"\t31-12-22  9:00AM  10hrs  RS. 10000\n";
                    cout<<"\n2. DUB-456\n";
                    cout<<"\t31-12-22  11:00AM  9hrs  RS. 12000\n";
                    cout<<"\n3. DUB-789\n";
                    cout<<"\t31-12-22  1:00PM  8hrs  RS. 14000\n";
                    cout<<"\n: ";
                    cin>>choice1;
                    if(choice1==1){
                        charges=10000;
                        cout<<"\nYou have successfully booked your flight DUB-123\n";
                        cout<<"\nYou can go back to menu and take your ticket\n";
                    }
                    else if(choice==2){
                        charges=12000;
                        cout<<"\nYou have successfully booked your flight DUB-456\n";
                        cout<<"\nYou can go back to menu and take your ticket\n";
                    }
                    else if(choice==3){
                        charges=14000;
                        cout<<"\nYou have successfully booked your flight DUB-789\n";
                        cout<<"\nYou can go back to menu and take your ticket\n";
                    }
                    else{
                        cout<<"\nInvalid input shifting to the previous menu !\n";
                        flights();
                    }
                    break;
                case 2:
                    cout<<"\n____________Welcome to CANDIAN AIRWAYS__________\n\n";
                    cout<<"\nFollowing are the flights Choose from the list\n";
                    cout<<"\n1. CAN-123\n";
                    cout<<"\t31-12-22  9:00AM  10hrs  RS. 30000\n";
                    cout<<"\n2. CAN-456\n";
                    cout<<"\t31-12-22  11:00AM  9hrs  RS. 28000\n";
                    cout<<"\n3. CAN-789\n";
                    cout<<"\t31-12-22  1:00PM  8hrs  RS. 25000\n";
                    cout<<"\n: ";
                    cin>>choice1;
                    if(choice1==1){
                        charges=30000;
                        cout<<"\nYou have successfully booked your flight CAN-123\n";
                        cout<<"\nYou can go back to menu and take your ticket\n";
                    }
                    else if(choice==2){
                        charges=28000;
                        cout<<"\nYou have successfully booked your flight CAN-456\n";
                        cout<<"\nYou can go back to menu and take your ticket\n";
                    }
                    else if(choice==3){
                        charges=25000;
                        cout<<"\nYou have successfully booked your flight CAN-789\n";
                        cout<<"\nYou can go back to menu and take your ticket\n";
                    }
                    else{
                        cout<<"\nInvalid input shifting to the previous menu !\n";
                        flights();
                    }
                    break;
                case 3:
                    cout<<"\n____________Welcome to UK AIRLINES__________\n\n";
                    cout<<"\nFollowing are the flights Choose from the list\n";
                    cout<<"\n1. UK-123\n";
                    cout<<"\t31-12-22  9:00AM  10hrs  RS. 10000\n";
                    cout<<"\n2. UK-456\n";
                    cout<<"\t31-12-22  11:00AM  9hrs  RS. 12000\n";
                    cout<<"\n: ";
                    cin>>choice1;
                    if(choice1==1){
                        charges=10000;
                        cout<<"\nYou have successfully booked your flight UK-123\n";
                        cout<<"\nYou can go back to menu and take your ticket\n";
                    }
                    else if(choice==2){
                        charges=12000;
                        cout<<"\nYou have successfully booked your flight UK-456\n";
                        cout<<"\nYou can go back to menu and take your ticket\n";
                    }
                    else{
                        cout<<"\nInvalid input shifting to the previous menu !\n";
                        flights();
                    }
                    break;
                case 4:
                    cout<<"\n____________Welcome to UK AIRLINES__________\n\n";
                    cout<<"\nFollowing are the flights Choose from the list\n";
                    cout<<"\n1. USA-231\n";
                    cout<<"\t31-12-22  9:00AM  10hrs  RS. 10000\n";
                    cout<<"\n: ";
                    cin>>choice1;
                    if(choice1==1){
                        charges=10000;
                        cout<<"\nYou have successfully booked your flight USA-231\n";
                        cout<<"\nYou can go back to menu and take your ticket\n";
                    }
                    else{
                        cout<<"\nInvalid input shifting to the previous menu !\n";
                        flights();
                    }
                    break;
                default :
                    cout<<"\nInvalid choice shifting you to main menu \n";
                    main_Menu();
            }
        }
};
float Registration::charges;
int Registration::choice;
class Ticket : public Registration, Details{
    public : 
        void bill(){
            string destination="";
            ofstream obj("record.txt");
            {
                obj<<"_________XYZ Airlines_________\n";
                obj<<"_____________TICKET___________\n";
                obj<<"______________________________\n";
                obj<<"Customer ID : "<<Details::c_id<<endl;
                obj<<"Customer NAME : "<<Details::name<<endl;
                obj<<"Customer Gender : "<<Details::gender<<endl;
                obj<<"Customer Mobile No : "<<Details::M_no<<endl;
                obj<<"\tDescription"<<endl<<endl;

                if(Registration::choice==1){
                    destination="DUBAI";
                }
                else if(Registration::choice==2){
                    destination="CANADA";
                }
                else if(Registration::choice==3){
                    destination="UK";
                }
                else if(Registration::choice==4){
                    destination="USA";
                }
                obj<<"Destination\t\t"<<destination<<endl;
                obj<<"Flight cost : \t\t"<<Registration::charges<<endl;
            }
            obj.close();
        }
        void display(){
            ifstream iobj("record.txt");
            {
                if(!iobj){
                    cout<<"file error"<<endl;
                }
                else{
                    char c;
                    while(!iobj.eof()){
                        c=iobj.get();
                        cout<<c;
                    }
                    
                }
            }
            iobj.close();
        }
};
void main_Menu(){
    int choice; 
    int back ;
    cout<<"\t\t       ANY Airlines         \t\n\n";
    cout<<"\t_________Main Menu___________\n";

    cout<<"\t_____________________________\n";
    cout<<"\t|                            |\n";

    cout<<"\t|\t Press 1 to ADD the Passanger details     \t|\n";
    cout<<"\t|\t Press 2 for Flight Booking               \t|\n";//register for a flight
    cout<<"\t|\t Press 3 for TICKET and charges           \t|\n";
    cout<<"\t|\t Press 4 to EXIT                          \t|\n";
    cout<<"\t_____________________________\n";
    cout<<"\nEnter Choice : ";
    cin>>choice;

    //now we will make class for each choices above 

    Details D;
    Registration R;
    Ticket T;

    //switch for choices 
    switch(choice){
        case 1: 
            cout<<"\n____________Passengers details__________\n";
            D.information();
            cout<<"\nPress any Key to go back to main menu : ";
            cin>>back;
            if(back==1){
                main_Menu();
            }
            else{
                main_Menu();
            }
            break;
        case 2: 
            cout<<"\n____________Book a flight using this system__________\n";
            R.flights();
            cout<<"\nPress any Key to go back to main menu : ";
            cin>>back;
            if(back==1){
                main_Menu();
            }
            else{
                main_Menu();
            }
            break;
        case 3: 
            cout<<"\n____________GET YOUR TICKET__________\n";
            T.bill();
            cout<<"Your ticket is printed , you can collect it \n";
            cout<<"\nPress 1 to display your ticket : ";
            cin>>back;
            if(back==1){
                T.display();
                cout<<"Press any Key to go back to main menu";
                cin>>back;
                if(back==0){
                    main_Menu();
                }
                else{
                    main_Menu();
                }
            }
            else{
                main_Menu();
            }
            break;
        case 4:
            cout<<"\n\n\t__________Thank you__________\n";
            break;
        default :   
            cout<<"\nInvalid input , Please choose wisely";
            main_Menu();
    }
}
int main(){
    Management M_object;
}