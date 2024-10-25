
#include<iostream>
#include<fstream>               //to work with floating points
#include<iomanip>               //for file handling

using namespace std;

void mainMenu();

class Management
{
    public :

        Management()
        {
            mainMenu();
        }
};


class Details                   //to store customer information


{
    public :

        static string name , gender;
        int age;
        string add;
        static int custId;
        char arr[100];

        void information()
        {
            cout<<"\nEnter the customer id : ";
            cin>>custId;
            cout<<"\nEnter the name : ";
            cin>>name;
            cout<<"\nEnter the age : ";
            cin>>age;
            cout<<"\nEnter the address : ";
            cin>>add;
            cout<<"\nGender : ";
            cin>>gender;


            cout<<"Your details have been save with us\n"<<endl;
        }
};

//to access variables of details class
int Details::custId;
string Details::name;
string Details::gender; 


class registration                  //flight registration
{
    public :
        static int choice;
        int choice1;
        static float charges;
        int back;

        void flight()
        {
            string flightN[] = {"Dubai" , "Canada" , "UK" , "USA" , "Australia" , "Switzerland" };

            for(int i=0 ; i<6 ; i++){
                cout<<(i+1)<<".flight to "<<flightN[i]<<endl;
            }

            cout<<"\n Welcome to Aman Airlines!"<<endl;
            cout<<"\nPress the number corresponding to the Country for which the flight has to be booked ";
            cin>>choice;


            switch(choice)
            {
                case 1:     //for first flight
                {
                    cout<<"______________________Welcome to Dubai Emirates______________________\n"<<endl;

                    cout<<"Your comfort is our priority. Enjoy the journey"<<endl;

                    cout<<"Following are the flights \n"<<endl;

                    cout<<"1.DUB - 498"<<endl;
                    cout<<"\t03-09-2024 11:00 AM 13hrs Rs.14000"<<endl;

                    cout<<"1.DUB - 754"<<endl;
                    cout<<"\t06-09-2024 09:00 AM 12hrs Rs.16500"<<endl;

                    cout<<"1.DUB - 965"<<endl;
                    cout<<"\t02-09-2024 06:00 PM 12hrs Rs.23750"<<endl;

                    cout<<"\nSelect the flight : ";
                    cin>>choice1;

                    if(choice1==1)
                    {
                        charges = 14000;
                        cout<<"\nFlight 1.DUB - 498 successfuly booked"<<endl;
                        cout<<"\nYou can go back to main menu and collect the ticket"<<endl;
                    }

                    else if(choice1==2)
                    {
                        charges = 16500;
                        cout<<"\n1.DUB - 754 successfuly booked"<<endl;
                        cout<<"\nYou can go back to main menu and collect the ticket"<<endl;
                    }

                    else if(choice1==3)
                    {
                        charges = 23750;
                        cout<<"\n1.DUB - 965 successfuly booked"<<endl;
                        cout<<"\nYou can go back to main menu and collect the ticket"<<endl;
                    }

                    else
                    {
                        cout<<"Invalid Input , shifting to the previous menu"<<endl;
                        flight();
                    }

                    cout<<"Press any number to go back to main menu : ";
                    cin>>back;

                    if(back==1){
                        mainMenu();
                    }

                    else{
                    mainMenu();
                    }
                    break;
                }

                case 2 :    //for second flight
                {
                    cout<<"______________________Welcome to Canadian Airlines______________________\n"<<endl;

                    cout<<"Your comfort is our priority. Enjoy the journey"<<endl;

                    cout<<"Following are the flights \n"<<endl;

                    cout<<"2.CA - 154"<<endl;
                    cout<<"\t11-08-2024 06:30 AM 13hrs Rs.11000"<<endl;

                    cout<<"2.CA - 814"<<endl;
                    cout<<"\t09-08-2024 07:00 AM 14hrs Rs.19000"<<endl;

                    cout<<"2.CA - 775"<<endl;
                    cout<<"\t15-08-2024 10:00 PM 14hrs Rs.22000"<<endl;

                    cout<<"\nSelect the flight : ";
                    cin>>choice1;

                    if(choice1==1)
                    {
                        charges = 11000;
                        cout<<"\nFlight 2.CA - 154 successfuly booked"<<endl;
                        cout<<"\nYou can go back to main menu and collect the ticket"<<endl;
                    }

                    else if(choice1==2)
                    {
                        charges = 19000;
                        cout<<"\n2.CA - 814 successfuly booked"<<endl;
                        cout<<"\nYou can go back to main menu and collect the ticket"<<endl;
                    }

                    else if(choice1==3)
                    {
                        charges = 22000;
                        cout<<"\n2.CA - 775 successfuly booked"<<endl;
                        cout<<"\nYou can go back to main menu and collect the ticket"<<endl;
                    }

                    else
                    {
                        cout<<"Invalid Input , shifting to the previous menu"<<endl;
                        flight();
                    }

                    cout<<"Press any number to go back to main menu : ";
                    cin>>back;

                    if(back==1){
                        mainMenu();
                    }

                    else{
                    mainMenu();
                    }
                    break;
                }

                case 3 :    //for third flight
                {
                    cout<<"______________________Welcome to British Airways______________________\n"<<endl;

                    cout<<"Your comfort is our priority. Enjoy the journey"<<endl;

                    cout<<"Following are the flights \n"<<endl;

                    cout<<"3.UK - 094"<<endl;
                    cout<<"\t05-08-2024 04:30 AM 9hrs 30min Rs.24000"<<endl;

                    cout<<"3.UK - 206"<<endl;
                    cout<<"\t05-08-2024 11:28 PM 10hrs Rs.19000"<<endl;

                    cout<<"3.UK - 1155"<<endl;
                    cout<<"\t09-08-2024 07:50 PM 11hrs Rs.31000"<<endl;

                    cout<<"\nSelect the flight : ";
                    cin>>choice1;

                    if(choice1==1)
                    {
                        charges = 24000;
                        cout<<"\nFlight 3.UK - 094 successfuly booked"<<endl;
                        cout<<"\nYou can go back to main menu and collect the ticket"<<endl;
                    }

                    else if(choice1==2)
                    {
                        charges = 19000;
                        cout<<"\n3.UK - 206 successfuly booked"<<endl;
                        cout<<"\nYou can go back to main menu and collect the ticket"<<endl;
                    }

                    else if(choice1==3)
                    {
                        charges = 31000;
                        cout<<"\n3.UK - 1155 successfuly booked"<<endl;
                        cout<<"\nYou can go back to main menu and collect the ticket"<<endl;
                    }

                    else
                    {
                        cout<<"Invalid Input , shifting to the previous menu"<<endl;
                        flight();
                    }

                    cout<<"Press any number to go back to main menu : ";
                    cin>>back;

                    if(back==1){
                        mainMenu();
                    }

                    else{
                    mainMenu();
                    }
                    break;
                }
            
                case 4 :    //for fourth flight
                {
                     cout<<"______________________Welcome to PAN-AM______________________\n"<<endl;

                    cout<<"Your comfort is our priority. Enjoy the journey"<<endl;

                    cout<<"Following are the flights \n"<<endl;

                    cout<<"4.USA - 708"<<endl;
                    cout<<"\t09-09-2024 06:40 AM 16hrs Rs.33840"<<endl;

                    cout<<"4.USA - 1754"<<endl;
                    cout<<"\t10-09-2024 09:29 PM 15hrs Rs.41570"<<endl;

                    cout<<"4.USA - 005"<<endl;
                    cout<<"\t14-09-2024 01:00 AM 19hrs Rs.29750"<<endl;

                    cout<<"\nSelect the flight : ";
                    cin>>choice1;

                    if(choice1==1)
                    {
                        charges = 33840;
                        cout<<"\nFlight 4.USA - 708 successfuly booked"<<endl;
                        cout<<"\nYou can go back to main menu and collect the ticket"<<endl;
                    }

                    else if(choice1==2)
                    {
                        charges = 41570;
                        cout<<"\n4.USA - 1754 successfuly booked"<<endl;
                        cout<<"\nYou can go back to main menu and collect the ticket"<<endl;
                    }

                    else if(choice1==3)
                    {
                        charges = 29750;
                        cout<<"\n4.USA - 005 successfuly booked"<<endl;
                        cout<<"\nYou can go back to main menu and collect the ticket"<<endl;
                    }

                    else
                    {
                        cout<<"Invalid Input , shifting to the previous menu"<<endl;
                        flight();
                    }

                    cout<<"Press any number to go back to main menu : ";
                    cin>>back;

                    if(back==1){
                        mainMenu();
                    }

                    else{
                    mainMenu();
                    }
                    break;
                }

                case 5 :    //for fifth flight
                {
                     cout<<"______________________Welcome to Australian Airlines______________________\n"<<endl;

                    cout<<"Your comfort is our priority. Enjoy the journey"<<endl;

                    cout<<"Following are the flights \n"<<endl;

                    cout<<"5.AUS - 854"<<endl;
                    cout<<"\t15-08-2024 07:30 AM 11hrs 30min Rs.16800"<<endl;

                    cout<<"5.AUS - 116"<<endl;
                    cout<<"\t16-08-2024 11:28 PM 10hrs Rs.15200"<<endl;

                    cout<<"5.AUS - 485"<<endl;
                    cout<<"\t09-08-2024 12:50 AM 11hrs Rs.22080"<<endl;

                    cout<<"\nSelect the flight : ";
                    cin>>choice1;

                    if(choice1==1)
                    {
                        charges = 16800;
                        cout<<"\n5.AUS - 854 successfuly booked"<<endl;
                        cout<<"\nYou can go back to main menu and collect the ticket"<<endl;
                    }

                    else if(choice1==2)
                    {
                        charges = 15200;
                        cout<<"\n5.AUS - 116 successfuly booked"<<endl;
                        cout<<"\nYou can go back to main menu and collect the ticket"<<endl;
                    }

                    else if(choice1==3)
                    {
                        charges = 22080;
                        cout<<"\n5.AUS - 485 successfuly booked"<<endl;
                        cout<<"\nYou can go back to main menu and collect the ticket"<<endl;
                    }

                    else
                    {
                        cout<<"Invalid Input , shifting to the previous menu"<<endl;
                        flight();
                    }

                    cout<<"Press any number to go back to main menu : ";
                    cin>>back;

                    if(back==1){
                        mainMenu();
                    }

                    else{
                    mainMenu();
                    }
                    break;
                }
            
                case 6 :    //for sixth flight
                {
                     cout<<"______________________Welcome to Swiss Airways______________________\n"<<endl;

                    cout<<"Your comfort is our priority. Enjoy the journey"<<endl;

                    cout<<"Following are the flights \n"<<endl;

                    cout<<"6.SWI - 298"<<endl;
                    cout<<"\t03-09-2024 11:00 AM 12hrs Rs.14520"<<endl;

                    cout<<"6.SWI - 714"<<endl;
                    cout<<"\t06-09-2024 09:20 AM 11hrs Rs.18500"<<endl;

                    cout<<"6.SWI - 165"<<endl;
                    cout<<"\t02-09-2024 06:15 PM 12hrs Rs.23750"<<endl;

                    cout<<"\nSelect the flight : ";
                    cin>>choice1;

                    if(choice1==1)
                    {
                        charges = 14520;
                        cout<<"\nFlight 6.SWI - 298 successfuly booked"<<endl;
                        cout<<"\nYou can go back to main menu and collect the ticket"<<endl;
                    }

                    else if(choice1==2)
                    {
                        charges = 18500;
                        cout<<"\n6.SWI - 714 successfuly booked"<<endl;
                        cout<<"\nYou can go back to main menu and collect the ticket"<<endl;
                    }

                    else if(choice1==3)
                    {
                        charges = 23750;
                        cout<<"\n6.SWI - 165 successfuly booked"<<endl;
                        cout<<"\nYou can go back to main menu and collect the ticket"<<endl;
                    }

                    else
                    {
                        cout<<"Invalid Input , shifting to the previous menu"<<endl;
                        flight();
                    }

                    cout<<"Press any number to go back to main menu : ";
                    cin>>back;

                    if(back==1){
                        mainMenu();
                    }

                    else{
                    mainMenu();
                    }
                    break;
                }
            
                default :
                {
                    cout<<"Invalid option , returning to main menu "<<endl;
                    mainMenu();
                    break;
                }
            }

        }
        

};


//to access variables of registration class
float registration::charges;
int registration::choice;


class ticket : public registration , Details  //multiple inheritance
{
    public :


     void bill()
    {
        string destination = "";
        ofstream outf("records.txt");   //ofstream to access file , outf is object of ofstream , records is file
        {
            outf<<"_______________________Aman Airlines_______________________"<<endl;
            outf<<"__________________________Ticket___________________________"<<endl;
            outf<<"___________________________________________________________"<<endl;

            outf<<"Customer ID : "<<Details::custId<<endl;
            outf<<"Name : "<<Details::name<<endl;
            outf<<"Gender : "<<Details::gender<<endl;
            outf<<"\tFlight details"<<endl<<endl;

            if(registration::choice==1)
            {
                destination = "Dubai";
            }

            else if(registration::choice==2)
            {
                destination = "Canada";
            }

            else if(registration::choice==3)
            {
                destination = "UK";
            }

            else if(registration::choice==4)
            {
                destination = "USA";
            }

            else if(registration::choice==5)
            {
                destination = "Australia";
            }

            else if(registration::choice==6)
            {
                destination = "Switzerland";
            }

            outf<<"Destination\t\t"<<destination<<endl;
            outf<<"Flight cost : "<<registration::charges<<endl;

        }
        outf.close();
    }

    void dispBill()
    {
        //ifstream to read from file
        ifstream ifs("records.txt");
        {
            if(!ifs)        //if file doesn't exist
            {
                cout<<"File error!"<<endl;
            }

            //eof = end of file , to check till end of file
            while(!ifs.eof())
            {
                ifs.getline(arr,100);   //to read content from file
                cout<<arr<<endl;
            }
        }
        ifs.close();
    }

};

void mainMenu()
{
    int lchoice;
    int schoice;
    int back;

    cout<<endl;
    cout<<"\t                       Aman Airlines \n"<<endl;
    cout<<"\t_________________________Main Menu______________________"<<endl;

    cout<<"\t_______________________________________________"<<endl;
    cout<<"\t\t\t\t\t\t\t|"<<endl;

    cout<<"\t|\t Press 1 to add the Customer details     \t|"<<endl;
    cout<<"\t|\t Press 2 for flight registration         \t|"<<endl;
    cout<<"\t|\t Press 3 for ticket and charges          \t|"<<endl;
    cout<<"\t|\t Press 4 to exit                         \t|"<<endl;
    cout<<"\t\t\t\t\t\t\t|"<<endl;

    cout<<"\t_________________________________________________________"<<endl;

    cout<<"Enter the choice :"<<endl;
    cin>>lchoice;

    Details d;
    registration r;
    ticket t;

    switch(lchoice)
    {
        case 1:         //for details class
        {
            cout<<"_______________Customers_______________\n"<<endl;
            d.information();
            cout<<"Press any number to go back to main menu : ";
            cin>>back;

            if(back==1){
                mainMenu();
            }

            else{
                mainMenu();
            }
            break;
        }

        
        case 2:         //for registration class
        {
            cout<<"_______________Book a flight using this system_______________\n"<<endl;
            r.flight();
            break;
        }

        
        case 3:        // for tikcket class
        {
            cout<<"__________Get your ticket__________\n"<<endl;
            t.bill();

            cout<<"Your ticket is printed , you can collect it now \n"<<endl;
            cout<<"Press 1 to display your ticket : ";

            cin>>back;

                if(back==1)
                {
                    t.dispBill();
                    cout<<"Press any number to go back to main menu : ";
                    cin>>back;
                    if(back==1)
                    {
                    mainMenu();
                    }

                    else{
                    mainMenu();
                    }
                }

                else
                {
                    mainMenu();
                }
                break;
            }

        
        case 4:         //to exit
        {
            cout<<"\n\n\t---------------Thank-you---------------"<<endl;
            break;
        }

        default:        //wrong input , sends user back to main menu
        {
            cout<<"Invalid Input , Pease try again!\n"<<endl;
            mainMenu();
            break;
        }
    }


}

int main()
{
    Management Mobj;
    return 0;
}