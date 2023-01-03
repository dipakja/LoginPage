#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

void login();
void registeration();
void forgot();



int main()
{

 int c;
 cout<<"\t\t\t__________________________________________\n\n\n"<<endl;
 cout<<"\t\t\t__________________________________________\n\n\n"<<endl;
 cout<<"\t\t\t           Welcome to the Login page       \n\n\n"<<endl;
 cout<<"\t\t\t___________     MENU           _____________\n\n"<<endl;
 cout<<"\t Press 1 to LOGIN                             |"<<endl;
 cout<<"\t Press 2 to REGISTER                          |"<<endl;
 cout<<"\t Press 3 to if you forgot your PASSWORD       |"<<endl;
 cout<<"\t  press 4 to EXIT                             |"<<endl;

cout<<"\n\t\t\t Please enter your choice : "<<endl;
cin>>c;
cout<<endl;

switch(c)
{

case 1:
login();
break;


case 2:
registeration();
break;

case 3:
forgot();
break;

case 4:

cout<<"\t\t\t Than you! \n\n"<<endl;
break;

default :
system("cls");
cout<<"\t\t Please select from the given options\n"<<endl;
main();



}


}

void login()
{

int count;
string userId,password,id,pass;

system("cls");
cout<<"Entre the username and password : "<<endl;
cout<<"\t\t\t USERNAME ";
cin>>userId;
cout<<"\t\t\t PASSWORD ";
cin>>password;


ifstream input("hotel.txt",ios::app);
while(input>>id>>pass)
{
    if(id==userId && pass==password)
    {
        count=1;
        system("cls");
    }

}
 input.close();

if(count==1)
{
    cout<<userId<<"\n Your LOGIN is successfull \n Thanks for logging in ! \n"<<endl;
    main();
}else
cout<<"\n Login ERROR \n Please check your username and password\n"<<endl;
main();

}

void registeration()
{

string ruserId, rpassword,rid,rpass;
system("cls");

ofstream f1("hotel.txt",ios::app);
cout<<"\t\t Entre the username : "<<endl;
cin>>ruserId;
cout<<"\t\t Entre the password : "<<endl;
cin>>rpassword;


 f1<<ruserId<<"  "<<rpassword<<endl;


system("cls");
cout<<"\n\t\t\t Registration is successfull \n ";
main();
}

void forgot()
{

int option;

system("cls");

cout<<"\t\t\t You forgot the password ? No worries \n"<<endl;
cout<<"Press 1 to search your id by username "<<endl;
cout<<"Press 2 to go back to the main menu "<<endl;
cout<<"\t\t\t entre Your choice ; "<<endl;
cin>>option;
switch(option)
{
    case 1:
    {
int count=0;
string suserId,sId,spass;

cout<<"\n\t\t\t Entre the user name which you remembered :  "<<endl;
cin>>suserId;

ifstream f2("hotel.txt");
while(f2>>sId>>spass)
{

if(sId==suserId)

{
    count=1;
}

}
f2.close();

if(count==1)
{
    cout<<"\n\n Your account is found \n : "<<endl;

cout<<"\n\n Your password is : "<<spass<<endl;
main();


}else{
cout<<"Sorry your account is not found !"<<endl;
main();
}
    }
   break; 

case 2 : 
{
main();
}

default : 

cout<<"\t\t\t Wrong choice ! Please try again "<<endl;

forgot();

}

}


