#include<iostream>
#include<ctype.h>
#include<algorithm>
#include<math.h>
#include<string.h>

using namespace std;

int main()
{
	int T;									//Number of donators interested to donate the blood.
	
	cout<<"\nEnter the number of the donors: ";
	cin>>T;
	
	int i=1;
	
	while(T--)
	{
		cout<<"Enter the details of the "<<i<<" donor\n";
		
		char donor_name[20];				//Char array to store the name of the donor.
		cout<<"Enter the name : ";
		cin>>donor_name;
		cout<<"\n";
		
		int age;							//Integer variable to store the age.
		cout<<"Enter the age : ";
		cin>>age;
		cout<<"\n";
		
		char address[20];					//Char array to store the address of the donor.
		cout<<"Enter the address : ";
		cin>>address;
		cout<<"\n";
		
		char email_id[20];					//Char array to store the email-id of the donor.
		cout<<"Enter the email id : ";
		cin>>email_id;
		cout<<"\n";
		
		long long int mobile_no;			//long long integer variable to store the donor's phone number.
		cout<<"Enter the mobile_no : ";
		cin>>mobile_no;
		cout<<"\n";
		
		char blood_group[5];				//Char array to store the blood group of the donor.
		cout<<"Enter the blood group : ";
		cin>>blood_group;
		cout<<"\n";
		
		char sex;							//Char variable to store the sex of the donor.
		cout<<"Enter the sex : ";
		cin>>sex;
		cout<<"\n";
		
		cout<<"The details of the "<<i<<" donor are:\n";
		
		cout<<"Donor's Name : "<<donor_name<<"\n";
		
		cout<<"Donor's age : "<<age<<"\n";
		
		cout<<"Donor's age : "<<address<<"\n";
		
		cout<<"Donor's id : "<<email_id<<"\n";
		
		cout<<"Donor's mobile number : "<<mobile_no<<"\n";
		
		cout<<"Donor's blood group : "<<blood_group<<"\n";
		
		cout<<"Donor's sex : "<<sex<<"\n";
	
	
	cout<<"Choices are as follows : \n";
	cout<<"1. A+ "<<" ";
	cout<<"2. A- "<<" ";
	cout<<"3. B+ "<<" ";
	cout<<"4. B- "<<" ";
	cout<<"5. AB+ "<<" ";
	cout<<"6. AB- "<<" ";
	cout<<"7. O+ "<<" ";
	cout<<"8. O- "<<" ";
	
	int choice;
	cout<<"\nEnter your choice for blood group : \n";
	cin>>choice;
	switch(choice)
		{
			case 1:
				if(blood_group=="A+")
				{
					cout<<donor_name<<endl;
					cout<<age<<endl;
					cout<<address<<endl;
					cout<<email_id<<endl;
					cout<<mobile_no<<endl;
					cout<<blood_group<<endl;
					cout<<sex<<endl;
					break;
				}
				
			case 2:
				if(blood_group=="A-")
				{
					cout<<donor_name<<endl;
					cout<<age<<endl;
					cout<<address<<endl;
					cout<<email_id<<endl;
					cout<<mobile_no<<endl;
					cout<<blood_group<<endl;
					cout<<sex<<endl;
					break;
				}
				
			case 3:
				if(blood_group=="B+")
				{
					cout<<donor_name<<endl;
					cout<<age<<endl;
					cout<<address<<endl;
					cout<<email_id<<endl;
					cout<<mobile_no<<endl;
					cout<<blood_group<<endl;
					cout<<sex<<endl;
					break;
				}
				
			case 4:
				if(blood_group=="B-")
				{
					cout<<donor_name<<endl;
					cout<<age<<endl;
					cout<<address<<endl;
					cout<<email_id<<endl;
					cout<<mobile_no<<endl;
					cout<<blood_group<<endl;
					cout<<sex<<endl;
					break;
				}
				
			case 5:
				if(blood_group=="O+")
				{
					cout<<donor_name<<endl;
					cout<<age<<endl;
					cout<<address<<endl;
					cout<<email_id<<endl;
					cout<<mobile_no<<endl;
					cout<<blood_group<<endl;
					cout<<sex<<endl;
					break;
				}
				
			case 6:
				if(blood_group=="O-")
				{
					cout<<donor_name<<endl;
					cout<<age<<endl;
					cout<<address<<endl;
					cout<<email_id<<endl;
					cout<<mobile_no<<endl;
					cout<<blood_group<<endl;
					cout<<sex<<endl;
					break;
				}	
				
			case 7:
				if(blood_group=="AB+")
				{
					cout<<donor_name<<endl;
					cout<<age<<endl;
					cout<<address<<endl;
					cout<<email_id<<endl;
					cout<<mobile_no<<endl;
					cout<<blood_group<<endl;
					cout<<sex<<endl;
					break;
				}
				
			case 8:
				if(blood_group=="AB-")
				{
					cout<<donor_name<<endl;
					cout<<age<<endl;
					cout<<address<<endl;
					cout<<email_id<<endl;
					cout<<mobile_no<<endl;
					cout<<blood_group<<endl;
					cout<<sex<<endl;
					break;
					
			default:
				cout<<"Wrong data. \n";
				}
		}
		
	i++;
	}	
	
	return 0;
}
