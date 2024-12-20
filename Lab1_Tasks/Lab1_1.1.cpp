#include <iostream>

const float RES_BILL_PROC_FEES = 4.50;
const float RES_BASIC_SERV_COST = 20.50;
const float RES_COST_PREM_CHANNEL = 7.50;
const float BUS_BILL_PROC_FEES = 15.00;
const float BUS_BASIC_SERV_COST = 75.00;
const float BUS_COST_PREM_CHANNEL = 50.00;

using namespace std;

int main()
{
	unsigned int Password;
	char UserName;
	unsigned int numOfPremChannels;
	float amountDue;
	unsigned int numOfBasicServConn;

	cout<<"Enter your Username: \n";
	cin>>UserName;

	if(UserName != 'R' && UserName != 'r' && UserName != 'B' && UserName != 'b')
	{
		cout<<"Wrong input! Try again!\n";
		return 0;
	}

	cout<<"Enter your Password: \n";
	cin>>Password;

	if(UserName == 'R' || UserName == 'r')
	{
		cout<<"Enter the amount of premium channels: \n";
		cin>>numOfPremChannels;
        //cout<<"UserName: "<<UserName<<endl<<"Password: "<<Password<<endl<<"numOfPremChannels: "<<numOfPremChannels<<endl;
		amountDue = RES_BILL_PROC_FEES + RES_BASIC_SERV_COST + numOfPremChannels * RES_COST_PREM_CHANNEL;
		cout<<"The amount due is: "<<amountDue<<"\n";

		return 0;	
	}

	cout<<"Enter the number of basic service connections: \n";
	cin>>numOfBasicServConn;

	if (numOfBasicServConn <= 10)
		amountDue = BUS_BILL_PROC_FEES + BUS_BASIC_SERV_COST+ numOfPremChannels * BUS_COST_PREM_CHANNEL;
	else
		amountDue = BUS_BILL_PROC_FEES + BUS_BASIC_SERV_COST + (numOfBasicServConn - 10) * BUS_BASIC_CONN_COST + numOfPremChannels * BUS_COST_PREM_CHANNEL;

	cout<<"The amount due is: "<<amountDue<<"\n";

	return 0;
}