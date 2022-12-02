#include<iostream>
#include <conio.h>
#include<stdio.h>
using namespace std;

void customer_info();	

struct Date {

    int d, m, y;
};
 
const int monthDays[12]

    = { 31, 28, 31, 30, 31, 30, 

       31, 31, 30, 31, 30, 31 };


int countLeapYears(Date d)
{

    int years = d.y;
 


    if (d.m <= 2)

        years--;
 

    return years / 4 

           - years / 100

           + years / 400;
}
 


int getDifference(Date dt1, Date dt2)
{

  

    long int n1 = dt1.y * 365 + dt1.d;
 

    
    for (int i = 0; i < dt1.m - 1; i++)

        n1 += monthDays[i];
 

    n1 += countLeapYears(dt1);
 

 

    long int n2 = dt2.y * 365 + dt2.d;

    for (int i = 0; i < dt2.m - 1; i++)

        n2 += monthDays[i];

    n2 += countLeapYears(dt2);
 

   
    return (n2 - n1);
}	
	

void customer_info()	
{
 	system("cls");
 	
 	string name, address, pn;
 
         
         //CUSTOMER INFORMATION
         
         cout<<"\n  ====================================================================";
cout<<"\n《                        CUSTOMER INFORMATION                        》";
cout<<"\n  ====================================================================\n";
cout<<"\n";
         
         
	     cout<<"Enter Name\t: "; 
 		getline (cin,name);
 		cout<<"Address\t\t: ";
 		getline (cin,address);
 		cout<<"Contact No.\t: ";
 		cin>>pn;
 cout<<"\n";
 	
 		system("cls");
         cout<<"\n  ===================================================================";
cout<<"\n《                      RESORT RESERVATION FORM                      》";
cout<<"\n  ===================================================================\n";
 cout<<"\n-----------------------------------------------------------------------";		
cout<<"\n";
cout<<"\n";
cout<<"\n";
int adults, kids;
cout<<"No. of people coming*\n";
cout<<"\n";
cout<<"\tAdult(s)( ₱ 100.00/day)\t  : ";
cin>>adults;
cout<<"\n";
cout<<"\tKid(s)   ( ₱ 50.00/day)\t  : ";
cin>>kids;
cout<<"\n";
cout<<"\n";		
int totalperson=adults+kids;
int ad_f=adults*100;
int ki_f=kids*50;
int totalentrance=ad_f+ki_f;

int pnum;

cout<<"Pool type*\n";
cout<<"\n";
cout<<"\t1. Ordinary Pool (₱ 100.00/person)\n";
cout<<"\t2. Wave Pool (₱ 150.00/person)\n";
cout<<"\t3. Ordinary & Wave Pool (₱ 250.00/person)\n";
cout<<"\n";


cout<<"\tEnter Pool type no. : ";
cin>>pnum;

int pool_fee;

if (pnum==1)
{  pool_fee=totalperson*100;}
else if(pnum==2)
{  pool_fee=totalperson*150;}
else if(pnum==3)
{  pool_fee=totalperson*250;}
else {cout<<"\n\tInvalid Input you must choose 1 to 3!";
}



cout<<"\n";
cout<<"\nCottage*";
cout<<"\n";
cout<<"\n";
cout<<"\t1. Table      (₱ 300.00)   —  (good for 4 persons)\n";
cout<<"\t2. Long Table (₱ 600.00)   —  (good for 6 - 8 persons)\n";
cout<<"\t3. S Kubo     (₱ 400.00)   —  (good for 4 persons)\n";
cout<<"\t4. M Kubo     (₱ 600.00)   —  (good for 6 persons)\n";
cout<<"\t5. L Kubo     (₱ 800.00)   —  (good for 10 persons)\n";
cout<<"\t6. XL Kubo   (₱ 1200.00)   —  (good for 20 persons)\n";
cout<<"\n";
int cnum;
cout<<"\tChoose cottage no. : ";
cin>>cnum;

int cfee;
int r1fee, r2fee;
int tr1fee, tr2fee;
int trfee;


if(cnum==1){ cfee=300;}
else if(cnum==2){ cfee=600;}
else if(cnum==3){ cfee=400;}
else if(cnum==4){ cfee=600;}
else if(cnum==5){ cfee=800;}
else if(cnum==6){ cfee=1200;}
else{cout<<"\n\tInvalid Input you must choose 1 to 6!\n";}

int cq;
cout<<"\n\tEnter cottage quantity: " ;
cin>>cq;

int tcfee=cfee*cq;


cout<<"ROOM*";
cout<<"\n";
cout<<"\t1. Standard Room  (₱ 1200.00)    -    (good for 2 persons)";
cout<<"\n";
cout<<"\t2. Family Room    (₱ 2200.00)    -    (good for 4 persons)\n";
cout<<"\n";

int r1num;
cout<<"\n\tChoose room no. : ";
cin>>r1num;

if(r1num==1){r1fee=1200;}
else if(r1num==2){r1fee=2200;}
else{cout<<"\n\tInvalid Input you must choose 1 and 2 only!\n";}

int r1q;
cout<<"\n\tEnter room quantity: " ;
cin>>r1q;

tr1fee=r1fee*r1q;



cout<<"\n";
cout<<"\n";
cout<<"DO YOU WANT TO GET ANOTHER ROOM?\n";
cout<<"\n";
cout<<"\t1. YES\t\t2. NO";
cout<<"\n";
int ans;
cout<<"\n\tAnswer: ";
cin>>ans;

system("cls");

if(ans==1){
cout<<"ROOM 2*";
cout<<"\n";
cout<<"\t1. Standard Room  (₱ 1200.00)    -    (good for 2 persons)";
cout<<"\n";
cout<<"\t2. Family Room    (₱ 2200.00)    -    (good for 4 persons)\n";
cout<<"\n";

int r2num;
cout<<"\n\tChoose room no. : ";
cin>>r2num;

if(r2num==1){r2fee=1200;}
else if(r2num==2){r2fee=2200;}
else{cout<<"\n\tInvalid Input you must choose 1 and 2 only!\n";}

int r2q;
cout<<"\n\tEnter room 2 quantity: " ;
cin>>r2q;

tr2fee=r2fee*r2q;
}
cout<<"\n";  
cout<<"\n";  
				
trfee= tr1fee+tr2fee;
				
cout<<"\n-----------------------------------------------------------------------";	
cout<<"\n";  
   int d1, d2;
   int m1, m2;
   int y1, y2;
   

cout<<"\nCheck-in date(mm/dd/yyyy): ";
cin >> m1; 
   if ( cin.get() != '/' )
   {
      cout << "expected /\n";
 
   }
   cin >> d1; 
   if ( cin.get() != '/' ) 
   {
      cout << "expected /\n";
      
   }
   cin>>y1;
   
   cout<<"\n";
   cout<<"\n";
   
  //CHECK OUT DATE
  
cout<<"Check-out date(mm/dd/yyyy): ";
cin >> m2;
   if ( cin.get() != '/' )
   {
      cout << "expected /\n";
   }
   cin >> d2; 
   if ( cin.get() != '/' )
   {
      cout << "expected /\n";
   }
   cin>>y2;
   
    Date dt1 = { d1, m1, y1};
    
    Date dt2 = { d2, m2, y2 };
   
cout<<"\n";
cout<<"\n";

system("cls");
    
 cout<<"\n   ==================================================================";
cout<<"\n《                         AMOUNT TO PAY                             》";
cout<<"\n   ==================================================================\n";	
time_t t = time(NULL);
 tm* tPtr = localtime(&t); 
cout<<"                                                                                                                                                                                                         Date: " <<(tPtr->tm_mday)<<"/"<< (tPtr->tm_mon)+1 <<"/"<< (tPtr->tm_year)+1900<< endl;

cout<<"\nName\t\t: "<<name;

cout<<"\nAddress\t\t: "<<address;

cout<<"\nContact No.\t: "<<pn;
cout<<"\n";
cout<<"\n-----------------------------------------------------------------------\n";
cout<<"Check-in Date: "<<m1<<"/"<<d1<<"/"<<y1<<"      \t\tCheck-out Date: "<<m2<<"/"<<d2<<"/"<<y2<<"\n";
cout << "\n\t\tTotal no. of days: "<< getDifference(dt1, dt2);
cout<<"\n-----------------------------------------------------------------------";

int dxe=totalentrance*getDifference(dt1, dt2);
int dxp=pool_fee*getDifference(dt1, dt2);

int oc=0;

cout<<"\n\tT. Entrance Fee  : \t\t—\t\t  ₱ "<<dxe<<".00";
cout<<"\n\tRoom(s) Fee    \t : \t\t—\t\t  ₱ "<<trfee<<".00";
cout<<"\n\tCottage Fee\t : \t\t—\t\t  ₱ "<<tcfee<<".00";
cout<<"\n\tPool Fee \t : \t\t—\t\t  ₱ "<<dxp<<".00";
cout<<"\n\tOther Charges    : \t\t—\t\t  ₱ "<<oc<<".00";
cout<<"\n-----------------------------------------------------------------------";

	
int tamount=dxe+trfee+cfee+dxp+oc;
			
					
cout<<"\n\t\t\t\t\t    Total Amount: ₱ "<<tamount<<".00";

cout<<"\n-----------------------------------------------------------------------\n";
  cout<<"\n";
  
  cout<<"Payment*\n";
cout<<"\n";


string ctn;
string cn;

cout<<"   ▪︎ Credit card no.: ";
cin>>cn;
cout<<"\n";
cout<<"\n   ▪︎ Type of credit card: ";
cin>>ctn;

cout<<"\n";
cout<<"\n";


int submit;
cout<<"Type '1'' to confirm payment  and type '2' to discard : ";
cin>>submit;
 
if(submit==1){
	system("cls");
  cout<<"\n  ==================================================================";
cout<<"\n《                         RECEIPT OF PAYMENT                       》";
cout<<"\n  ==================================================================\n";	

cout<<"\n";
cout<<"\n";

  cout<<"Dear "<<name<<",";
  cout<<"\n";
  cout<<"\n\tWe would like to inform you that we have made a payment of a amount of ₱ "<<tamount<<".00 by wire transfer from your "<<ctn <<" bank account no. "<<cn<<" Date: "<<(tPtr->tm_mday)<<"/"<< (tPtr->tm_mon)+1 <<"/"<< (tPtr->tm_year)+1900<<" at  "<<(tPtr->tm_hour)<<":"<< (tPtr->tm_min)<<":"<< (tPtr->tm_sec) <<".\n\n\t\t\t\t\t\t\tThank you!!!";
  cout<<"\n";
cout<<"\n";
}
else{
    getch();	
 											
 customer_info();
     		}
  
  
  }	
	
		
	
	
int main()
{	
 
 system("cls");
 
 	cout<<"\n\t\t=====================================";
cout<<"\n\t\t=     RESORT RESERVATION SYSTEM     =";
cout<<"\n\t\t=====================================";
cout<<"\n\n\n\n\t\t\t      Created by :";
cout<<"\n\t\t      RUDOLPH ANGELO C. DE VILLA";
cout<<"\n";
cout<<"\n\n\n\n\n\n\n\t\t      Press any key to continue...";					
 								
 getch();	
 											
 customer_info();	
 	
 	return 0;
 }