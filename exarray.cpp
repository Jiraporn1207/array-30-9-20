#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int  no;
int q[10],m[10],f[10];
int main()
{	
	char Choice;
	bool Flag = true;

	do {
		cout<<"==================================="<<endl;
		cout<<"                 MENU             "<<endl; 
		cout<<"==================================="<<endl;
		cout << " 1. Input student records " << endl;
		cout << " 2. View all student records " << endl;
		cout << " 3. Exit " << endl;
		cout <<"Select menu :";
		cin >>Choice;
		////////////////////////////////////////

		

		if (Choice == '1')	
		{
			cout<<"Input Number of Student: ";
			cin>>no;
			
			for(int i=0;i<no;i++)
			{   cout<<"Number"<< i+1 <<endl;
				cout<<"Input Quiz  : ";
				cin>>q[i];
				cout<<"Input Midterm  : ";
				cin>>m[i];
				cout<<"Input Final  : ";
				cin>>f[i];
			}
		}
		else if (Choice == '2')
		{   
			cout<<"--------------------------------"<<endl;
			cout<<"StsID	Quiz	Midtrem		Final  "<<endl;
			cout<<"--------------------------------"<<endl;
			for(int x = 0; x<no ; x++)
			{	cout<<x+1<<setw(9)<<q[x]<<setw(9)<<m[x]<<setw(9)<<f[x]<<endl;
			}

		}
		else if (Choice == '3') Flag = false;
		else{
			cout << "not process.\n"<< endl;
		
		}
	}while (Flag);
	cout << "\n...Exit Program...\n";
	
	return 0 ;
}