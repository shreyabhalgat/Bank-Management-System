/*BANK MANAGMENT SYSTEM*/

//SHREYA

//HEADER FILES

    #include<iostream>
    #include<fstream>
    #include <string>

using namespace std;

/*CLASS BANK*/
class bank
{
    private:
        string name;
        int age;
        string address;
        int pin;
        int mobileno;
        int deposite;
        long balance=0;
        long amount=0;
        long accountno;
        int choice1;

    public:
        void opennewaccount(); //FUNCTION TO CREATE NEW ACCOUNT
        void depositeamout(); //FUNCTION TO DEPOSITE AMOUNT IN ACCOUNT
        void withdrawtheamount(); //FUNCTION TO WITHDRAW AMOUNT FROM THE ACCOUNT
        void balanceenquiry(); //FUNCTION FOR BALANCE ENQUIRY
        void closingaccount();  //FUNCTION TO CLOSE THE ACCOUNT
        void modifyingaccount();  //FUNCTION TO MODIFY THE USER DATA
        void issue(); //FUNCTIONS IF USER HAVE ANY ISSUE REGARDING BANKS AND WANT TO COMPLAINT ABOUT IT
        void loan(); //FUNCTIONS TO APPLY FOR LOAN
        void Exit(); //FUNCTION TO EXIT
        
};

  
void bank :: opennewaccount()
{
        cout<<"Thank you for trusting on us.\nWelcome to Our bank service.\n\n";
        cout<<"Please fill the below information\n";
        ofstream os;  
        os.open("file.txt");  
        cout <<"Writing to a text file:" << endl;  
        std::cout << "Enter your name :" << std::endl;
        cin.ignore();
        getline(cin,name); 
        os << name << endl;  
        cout << "\nPlease Enter your age: ";   
        cin >> age;  
        cin.ignore();  
        os << age << endl; 
        std::cout << "Enter your address :" << std::endl;
        cin.ignore();
        getline(cin,address); 
        os << address << endl;  
        cout << "Please Enter your Account no: ";   
        cin >> accountno;  
        cin.ignore();  
        os << accountno << endl;  
        cout << "Please Enter your Pin code: ";   
        cin >> pin;  
        cin.ignore();  
        os << pin << endl;
        cout << "Please Enter your mobile number: ";   
        cin >>mobileno;  
        cin.ignore();  
        os << mobileno<< endl;  
        cout << "Please Enter the amount you want to deposite ";   
        cin >> balance;  
        cin.ignore();  
        os << balance<< endl; 

        os.close();  

            
}

//SHANTANU
      void bank :: depositeamout()
    {
       
        cout<<"Dear custmore please enter your account no\n";
        cin>>accountno;
        cout<<"Enter the amount you want to deposite\n";
        cin>>amount;
        balance=balance+amount;
        cout<<"Amount deposited succefully\n";
        cout<<"Total balance in the accout is "<<balance<<"rs\n";

    }

      void bank :: withdrawtheamount()
    {
        cout<<"Dear custmore please enter your account no\n";
        cin>>accountno;
        cout<<"Enter the amount you want to withdraw\n";
        cin>>amount;
        if(amount>balance)
        {
            cout<<"Insuffient balance\n";
        }
        else
        {
            balance=balance-amount;
        cout<<"Amount withdraw succefully.\n Please collect your amount.\n";
        cout<<"Total balance in the accout is"<<balance<<"rs\n";
        }
        
    }



     void bank :: balanceenquiry()
     {
         cout<<"dear customer please enter your account no";
         cin>>accountno;
         cout<<"Your current balance is "<<balance;
     }

//atharva
      void bank :: closingaccount()
    {
            int reason;
            cout<<"Please select the reason for Closing your account\n";
            cout<<"Enter 1 If you have not statisfied with the treatment with our staff\n";
            cout<<"Enter 2 If you have found our intrest rate low\n";
            cout<<"Enter 3 for other";
            cin>>reason;

        switch(reason)
        {
            case 1:
                cout<<"Sorry for the inconviene happend to you.\nWe will make sure for better service ahed.\nIf you still want to close the account please drop down the Closing letter in the dropbox\n.";
                    break;
            case 2:
                cout<<"We are sorry for not fullfilling your expectations";
                    break;
            case 3:
                cout<<"Dear customer please enter your Closing account letter in the nearer bank the dropbox.";
                    break;
            default:
                cout<<"Invalid choice";
        }

    
    }

      void bank :: modifyingaccount()
    {   

        string address;
        string name;
        string mobileno;
        string transfer;
        
            cout<<"Enter 1 for updating Address \n\n";
            cout<<"Enter 2 for updating name\n\n";
            cout<<"Enter 3 for updating mobile number\n\n";
            cout<<"Enter 4 for trasnsfering your account \n\n";
        
            cout<<"Enter the choice you want to modify";
            cin>>choice1;

        switch(choice1)
        {
            case 1:
                cout<<"Your current Address\n";
                cin.ignore();
                getline(cin,address);
                cout<<"Enter your updated address\n";
                cin.ignore();
                getline(cin,address);
                cout<<"Your address has been updated\n and new address is-\n"<<address;
            break;
            case 2:
                cout<<"Your current Name\n";
                cin.ignore();
                getline(cin,name);
                cout<<"Enter your updation\n";
                cin.ignore();
                getline(cin,name);
                cout<<"Your Name has been updated to\n"<<name;
            break;
            case 3:
                cout<<"Your current mobile number\n";
                cin.ignore();
                 getline(cin,mobileno);
                cout<<"Enter your updated your mobile number\n";
                cin.ignore();
                getline(cin,mobileno);
                cout<<"Your mobile number has been updated\n"<<mobileno;
            break;
            case 4:
                cout<<"Your current Branch of bank\n";
                cin.ignore();
                getline(cin,transfer);
                cout<<"Enter the branch of the bank you want to transfer your account\n";
                cin.ignore();
                getline(cin,transfer);
                cout<<"We have accepted your transfer request.\n we will notify you through your Email.\n";
                    break;
            default:
                cout<<"enter correct choice";
        }


    }

 //rucha  
      void bank :: issue()

    {
       
            cout<<"Please drop down your complaint letter in the dropbox or Mail us your complaint";
    }
      void bank :: loan()
    {   
        int purpose;
            cout<<"Please enter the Purpose for taking loan";
            
            cout<<"Enter 1 for Education loan \n\n";
            cout<<"Enter 2 for Home loan\n\n";
            cout<<"Enter 3 for Car loan\n\n";
            
        
          
            cin.ignore();
            cin>>purpose;

        switch(purpose)
        {
        case 1:
               cout<<"Please submit the following documents to Education loan department\n\n\n";
               cout<<"Duly-filled application form.\n2 passport size photographs.\nGraduation, Secondary School Certificate, or High School Certificate or mark sheets.\nKYC documents that include ID, address, and age proof.\nSignature Proof.Income Proof of parents or guardian.\n";
                break;
            case 2:
                 cout<<"Please submit the following documents to  Home Loan department\n\n";
                 cout<<"Employer Identity Card\n Property papers\n income proof\n account statement\n";
                    break;
            case 3:
                cout<<"Please submit the following documents to car Loan department\n\n";
                 cout<<"Employer Identity Card\n car documents\n Property papers\n income proof\n account statement\n";

            default:
                cout<<"Contact to the bank";
        }
    }
      void bank :: Exit()
    {
            cout<<"Thank you! We are glad to help you!";
            cout<<"Visit us again";

    }
    //FUNCTION DECLARATION 

    void opennewaccount();
    void depositeamout();
    void withdrawtheamount();
    void balanceenquiry();
    void closingaccount();
    void modifyingaccount();
    void issue();

    void loan();
    void Exit();

int main()
{
    int choice;
    bank b;



        cout<<"\n\n\n\n";
        cout<<"*******************************************************"<<endl;
        cout<<"********************WELCOME TO THE BANK******************"<<endl;
        cout<<"******************************************************"<<endl;
        cout<<"\n\n\n";
    RET:
    cout<<"MAIN MENU:\n";
        cout<<"Enter 1 for opening a new account\n\n";
        cout<<"Enter 2 for deposting the amount\n\n";
        cout<<"Enter 3 for Withdrawing the amount\n\n";
        cout<<"Enter 4 for Balance Enquiry\n\n";
        cout<<"ENter 5 for Closing your Account\n\n";
        cout<<"Enter 6 for modifing your Current data of account\n\n";
        cout<<"Enter 7 If you want to complain about anything\n\n";
        cout<<"Enter 8 If you want to apply for Loan\n\n";
        cout<<"Enter 9 If you want to EXIT\n\n";

   
    cout<<"Here is the Main Menu\n";
    
    cout<<"Please Enter Your choice.\n";
    cin>>choice;

    switch(choice)
    {
        case 1 :
            b.opennewaccount();
                break;
        case 2:
            b.depositeamout();
                break;
        case 3:
            b.withdrawtheamount();
                break;
        case 4:
            b.balanceenquiry();
                break;
        case 5:
            b.closingaccount();
                break;
        case 6:
            b.modifyingaccount();
                break;
        case 7:
            b.issue();
                break;
        case 8:
            b.loan();
                break;
        case 9:
            b.Exit();
                break;
        default:
            cout<<"invalide choice";

        
    }
    cout<<"Do you want any thing else\n If yes press 1";
    int yes;
    cin>>yes;
    if(yes==1)
    {
        goto RET;
    }
   


    return 0;
}
