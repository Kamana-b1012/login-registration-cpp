//registration or login form 
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

bool LoggingIn()
{
	string username, password, user, pass;
	
	cout<<"Enter username : ";cin>> username;
	cout<<"Enter passward : ";cin>> password;
	
	ifstream read("username .txt");
	getline(read,user);
	getline(read,pass);
	
	if(user == username && pass == password)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int choice;
	
	cout<<"Select a choice!\n1: Register\n2: login\n Your choice: ";
	cin >> choice;
	if(choice==1)
	{
		string username,password;
		
		cout<<"select a username : ";cin>> username;
		cout<<"select a passward : ";cin>> password;
		ofstream file;
		file.open("username .txt");
		file<<username<<endl<<password;
		file.close();
		
		main();
	}
	else if(choice== 2)
	{
		bool status =LoggingIn();
		if(!status)
		{
			cout<<"Incorrect Information,Try Again!"<<endl;
			system("PAUSE"); //system runs very fast or we want to a pause for the user convinience.
			return 0;
		}
		else 
		{
			cout<<"Login Sussessfull" <<endl;
			system("PAUSE"); //system runs very fast or we want to a pause for the user convinience.
			return 1;
		}
		
	}
}
