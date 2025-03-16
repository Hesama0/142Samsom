#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;
int end(){
	sleep(2);
    cout<<"\n      Thank you, have a nice day.";
	return 0;
	}
int money();
void salaries();
void grade();

int main(){
	string us, pas, userName, passWord, z, y;
	bool notLogIn = false;
	
	cout<<"Let's create a fake account.. ";
	sleep(2);
	cout<<"\n     Set a user name: ";
	cin>>us;
	userName = us;
	cout<<"     Set a password: ";
	cin>>pas;
	passWord = pas;
	cout<<"     Confirm the password: ";
	cin>>pas;
	while(pas!=passWord){
		cout<<"     unmatched: ";
		cin>>pas;
	}
	int yesno;
	sleep(2);
	cout<<"\nPerfect.. now do you want to log in?"<<endl<<"         yes(1)  no(0) --> ";
	cin>>yesno;
	if(yesno==1);
	else {
		sleep(1);
		cout<<"\nThank you, see you later :) ";
	    return 0;
	}
	sleep(0.5);
	cout<<"\n\n\n                  (:  Welcome  :)"<<endl<<endl<<endl<<endl;
	sleep(2);
	cout<<"Enter your username: ";
	cin>>z;
	cout<<"Enter the password: ";
	cin>>y;
	if(z==userName && y==passWord){
		sleep(1);
		cout<<"\n                  Logged in successfully."<<endl<<endl;
	}
	
	int i=3;
	while(z!=userName || y!=passWord && i>=1){
	    sleep(1);
		cout<<"\nAn error in username or password. 'You have "<<i-1<<" more tries' "<<endl;;
	    cout<<"username: ";
	    cin>>z;
    	cout<<"password: ";
    	cin>>y;
    	i--;
    	if(z==userName && y==passWord){
		    sleep(1);
			cout<<"\n   Logged in successfully."<<endl<<endl;
			break;
		}
        if(i==1){
		    cout<<"\n             HACKER!! \n   You are blocked from logging in! "<<endl<<endl;
		    notLogIn = true;
			break;
        }
	}
	if(notLogIn) return 0;
	
	int zz;
	
	sleep(1);
	cout<<"     Set a 4-digits passcode: ";
	cin>>zz;
	while(zz < 999 || zz >9999){
		cout<<"     Only 4-digits: ";
	    cin>>zz;
	}
	
	int passWord2 = zz;
	cout<<endl<<endl;
	cout<<"   ATM Menu:-"<<endl;
	cout<<"1.  Balance."<<endl;
	cout<<"2.  Deposit."<<endl;
	cout<<"3.  Withdraw."<<endl;
	cout<<"4.  Pay interests."<<endl;
	cout<<"5.  Exit"<<endl;
	
	int r; 
	double balance = 1500, deposit, deduction, interest, amount; 
		
	while (true) {
		sleep(2);
		cout<<"\nMake a selection from the menu: ";
		cin>>r;
		
		if (r==1) {
			cout<<"Please enter your 4-digits passcode: ";
			cin>>zz;
			sleep(1);
			while(zz!=passWord2){
				cout<<"     Wrong passcode"<<endl;
				cout<<"enter 4-digits passcode: ";
				cin>>zz;
			}
			cout<<"Your current amount of your bank account is: "<<balance<<" K.D"<<endl;
		}
		
		else if (r==2) {
			cout<<"Enter the amount of deposit: ";
			cin>>deposit;
			while(deposit>=50000 || balance+deposit>=50000){
				sleep(1);
				cout<<"your account cannot afford over 50,000 K.D ";
				cout<<"\nEnter the amount of deposit: ";
			    cin>>deposit;
			}
			cout<<"Please enter your 4-digits passcode: ";
			cin>>zz;
			sleep(1);
			while (zz!=passWord2) {
				cout<<"     Wrong input. Try again: ";
				cin>>zz;
			}
			balance += deposit;
			cout<<"Your new balance is: "<<balance<<" K.D"<<endl;
		}
		
		else if (r==3) {
			cout<<"Enter the amount of deduction: ";
			cin>>deduction;
			while (balance < deduction) {
                sleep(1);
				cout << "Insufficient funds. Please enter a smaller amount: ";
                cin>>deduction;
			}
			cout<<"Please enter your 4-digits passcode: ";
			cin>>zz;
			sleep(1);
			while (zz!=passWord2) {
		    	 cout<<"     Oops. Be careful: ";
		 	     cin>>zz;
			}
			balance -= deduction;
			cout<<"Your new balance is: "<<balance<<" K.D"<<endl;
		}
		
		else if (r==4) {
			cout<<"Enter the interest rate as percentage: ";
			cin>>interest;
			cout<<"Please enter your 4-digits passcode: ";
			cin>>zz;
			sleep(1);
			while (zz!=passWord2) {
			 	cout<<"     Incorect. Again: ";
			 	cin>>zz;
			}
			amount = balance * interest / 100.0;
			balance -= amount;
			cout<<"You paid "<<amount<<" K.D in interests, the new balance is: "<<balance<<" K.D"<<endl;
		}
		
		else if (r==5) {
			cout<<"\nThank you for using our ATM. Have a nice day :)"<<endl<<endl<<endl<<endl<<endl;
			break;
		}
		else{ 
		    cout<<"Invalid input. Please choose from 1 to 5: ";
		    cin>>r;
		}
	}
	sleep(2);
	int m;
	cout<<"Money calculator, tap 2 \nEmployees salaries, tap 3 \nGrade reader, tap 4 \nTap anything to quit.";
	cin>>m;
	if(m==2) return money();
	else if (m==3) salaries();
	else if(m==4) grade();
	else return 0;
}

int money(){
	float x;
	int Q, R, fls100, fls50, fls20, fls10, fls5;
	sleep(3);
	cout<<"\nEnter an amount of KD: ";
	cin>>x;
	
	while(x>10 || x<0){
		sleep(1);
		if(x<0){
		    cout<<"negative is not acceptable. Try again: ";
		    cin>>x;
	    }
	    else{
	    	cout<<"Should be less than 10 KD. Try again: ";
	    	cin>>x;
		}
	}
	
	
   while(x>=0 && x<=10){
   	 Q=x/0.250;
   	 cout<<"\nThere are "<<Q<<" quarters."<<endl;
   	 
	 x=x-(Q*0.250);
   	 fls100=x/0.100;
   	 cout<<"and "<<fls100<<" of 100 fils."<<endl;
   	 
	 x=x-(fls100*0.100);
	 fls50=x/0.050;
     cout<<"and "<<fls50<<" of 50 fils."<<endl;
     
     x=x-(fls50*0.050);
   	 fls20=x/0.020;
   	 cout<<"and "<<fls20<<" of 20 fils."<<endl;
   	 
   	 x=x-(fls20*0.020);
   	 fls10=x/0.010;
   	 cout<<"and "<<fls10<<" of 10 fils."<<endl;
   	 
   	 x=x-(fls10*0.010);
   	 fls5=x/0.005;
   	 cout<<"and "<<fls5<<" of 5 fils."<<endl;
   	 
   	 R=x-(fls5*0.005);
   	 cout<<"Remaining filses are: "<<R<<endl<<endl<<endl<<endl;
   	 
   	 sleep(2);
	 int m;
	 cout<<"Money calculator, tap 2 \nEmployees salaries, tap 3 \nGrade reader, tap 4 \nTap anything to quit.";
	 cin>>m;
	 if(m==2) return money();
	 else if (m==3) salaries();
	 else if(m==4) grade();
	 else end(); 
	 return 0;
    }
    
}

void salaries(){
  double x, highest=0, lowest=0, total=0, count=0;
   double average=0;
  
  sleep(3);
  cout<<"\nKeep entering the employees's salaries or 0 to quit:";

  while (true) {
    cout<<" ";
    cin>>x;

    if (x==0) {
      break;
    }

    if (x<=0) {
    	sleep(1);
      cout << "No input was found. Please try again"<<endl;
      continue;
    }

    if (count==0) {
      highest = x;
      lowest = x;
    } else {
      if (x>highest) {
        highest = x;
      }
      if (x<lowest) {
        lowest = x;
      }
    }

    total += x;
    count++;
  }

  if (count>0) {
    average = total / count;
    cout<<"Highest salary is: "<<highest<<endl;
    cout<<"Lowest salary is: "<<lowest<<endl;
    cout<<"Average salary is: "<<average<<endl<<endl<<endl<<endl;
  } else {
    cout<<"No valid salaries entered."<<endl<<endl<<endl<<endl<<endl;
  }
  sleep(2);
  int m;
	cout<<"Money calculator, tap 2 \nEmployees salaries, tap 3 \nGrade reader, tap 4 \nTap anything to quit.";
	cin>>m;
	if(m==2) money();
	else if (m==3) salaries();
	else if(m==4) grade();
	else end();
}

void grade(){
	int x;
	sleep(3);
	cout<<"\nEnter Your Grade: ";
	cin>>x;
	
	while (x>100){
		sleep(1);
	    cout<<"There are no such grade above 100 >.< .. Try again: ";
	    cin>>x;
	}
	sleep(2);    
    if (x==100) cout<<"Excelent!! You got A+"<<endl<<endl<<endl<<endl;
    else if (x>90 && x<=99) cout<<"You got A-. Wonderful"<<endl<<endl<<endl<<endl;
	else if (x>80 && x<=90) cout<<"You got B. Good job"<<endl<<endl<<endl<<endl;
	else if (x>70 && x<=80) cout<<"You got C. Not bad"<<endl<<endl<<endl<<endl;
    else if (x>60 && x<=70) cout<<"You got D. could've done better"<<endl<<endl<<endl<<endl;
    else cout<<"You got F. Good luck next time"<<endl<<endl<<endl<<endl;
    
    sleep(2);
    int m;
	cout<<"Money calculator, tap 2 \nEmployees salaries, tap 3 \nGrade reader, tap 4 \nTap anything to quit.";
	cin>>m;
	if(m==2) money();
	else if (m==3) salaries();
	else if(m==4) grade();
	else end();
}

