 #include<iostream>
 #include<dos.h>
 #include<process.h>
 #include<conio.h>
 #include<fstream>
 #include<stdio.h>
 #include <windows.h>
 #include<string.h>
 using namespace std;
 void menu();
 void models();
 void terms();
 int choice();
 void del();
 int bn=1;
 class book
 {
 char name[30],fname[30],add[30],occ[10],car[10];
 char colour[10],mode[10];
 long int ph;
 int b;
 public:
void get()
{

cout<<"\nENTER YOUR NAME: ";
cin>>name;
cout<<"\nENTER YOUR FATHER'S NAME: ";
cin>>fname;
cout<<"\nENTER YOUR ADDRESS: ";
cin>>add;
cout<<"\nENTER YOUR OCCUPATION: ";
cin>>occ;
cout<<"\nENTER THE CAR YOU WANT TO BOOK: ";
cin>>car;
cout<<"\nENTER YOUR DESIRED COLOUR: ";
cin>>colour;
cout<<"\nENTER THE MODE OF PAYMENT: ";
cin>>mode;
cout<<"\nENTER YOUR PHONE NUMBER: ";
cin>>ph;
cout<<"\n \nYOUR BOOKING NUMBER IS: "<<bn;
b=bn;
Sleep(2);
}
void show()
{
cout<<"\nYOUR NAME IS:"<<name;
cout<<"\nYOUR FATHER'S NAME IS:"<<fname;
cout<<"\nYOUR ADDRESS: "<<add;
cout<<"\nYOUR OCCUPATION: "<<occ;
cout<<"\nYOUR BOOKED CAR IS: "<<car;
cout<<"\nYOUR DESIRED COLOUR IS: "<<colour;
cout<<"\nYOUR MODE OF PAYMENT IS :"<<mode;
cout<<"\nYOUR PHONE NUMBER IS :"<<ph;
cout<<"\nYOUR BOOKING NUMBER IS: "<<b;
}
void modify();

int getbno()
{
	return b;
		}
 }bk;
 class cars
 {
public:
void fiesta();
void ikon();
void endeavour();
void wagon();
 };
void cars::fiesta()
{
int l=1;
do
{
cout<<"\t\t\t-----------FORD FIESTA--------------\n";
cout<<"\tThe Ford Fiesta exudes terrific style with its dynamic interior";
cout<<"\n\tand contemporary  styling. Guaranteed to stop  traffic and draw\n";
cout<<"\tattention, the Ford  Fiesta with its petrol and  diesel variants\n";
cout<<"\ttarget upper middle class customer.";
cout<<"\n*** TECHNICAL SPECIFICATIONS ***\n\n";
cout<<"CITY MILEAGE:-\t\t10.2 KMPL\nHIGHWAY MILEAGE:-\t15.5 KMPL";
cout<<"\nFUEL CAPACITY:-\t\t45 LITRE\nENGINE:-\t\t1388 CC\nGEARS:-\t\t\t5";
cout<<"\nPOWER WINDOWS:-\t\tYES\nA/C:-\t\t\tYES\n";
l=choice();
}while(l==1);
}
void cars::ikon()
{
int l=1;
do
{

cout<<"\t\t\t-----------FORD IKON----------------\n";
cout<<"\tFord Ikon has made its  mark in the market. Ford Ikon\n\tis a petrol car.";
cout<<"It has very stylish interior.Its Show\n\tRoom price is about";
cout<<" Rs.4,86,000/- and above.";
cout<<"\n*** TECHNICAL SPECIFICATIONS ***\n";
cout<<"FUEL CAPACITY:-\t\t45 LITRE\nENGINE:-\t\t1299 CC\nGEARS:-\t\t\t5";
cout<<"\nPOWER WINDOWS:-\t\tYES\nA/C:-\t\t\tYES\n";
l=choice();
}while(l==1);
}
void cars::endeavour()
{
int l=1;
do
{

cout<<"\t\t\t-----------FORD ENDEAVOUR-----------\n";
cout<<"\tIf there's chance to endeavour with your life,then let ";


cout<<"it be with\n\tFord Endeavour.Ownin this larger than life";
cout<<" Endeavour from Ford is\n\tsurely an achivement . Its price";
cout<<" ranges from rupees 16 lakhs to a\n\tbit above 17 lakhs.";
cout<<"\n\t\t\t\t--------------------";
cout<<"\n*** TECHNICAL SPECIFICATIONS ***\n\n";
cout<<"CITY MILEAGE:-\t\t7.3 KMPL\nHIGHWAY MILEAGE:-\t10.7 KMPL\n";
cout<<"FUEL CAPACITY:-\t\t70 LITRE\nENGINE:-\t\t2499 CC\nGEARS:-\t\t\t5";
cout<<"\nPOWER WINDOWS:-\t\tYES\nA/C:-\t\t\tYES\n";
l=choice();
}while(l==1);
}
void cars::wagon()
{
int l=1;
do
{

cout<<"\t\t\t-----------FORD WAGON---------------\n";
cout<<" \t This presentation from Ford is a real hit in the market.";
cout<<"Ford wagon\n\tis high  on muddle class priorities . The new";
cout<<" Ford wagon has really\n\tcomfortable interiors . Ford Wagon";
cout<<" is now available in  both petrol\n\tand diesel varients.Its";
cout<<" price is just ideal for middle class people.";
cout<<"\n\t\t\t-------------------";
cout<<"\n*** TECHNICAL SPECIFICATIONS ***\n";
cout<<"\nCITY MILEAGE:-\t\t9.4 KMPL\nHIGHWAY MILEAGE:-\t14.8 KMPL\n";
cout<<"FUEL CAPACITY:-\t\t45 LITRE\nENGINE:-\t\t1596 CC\nGEARS:-\t\t\t5";
cout<<"\nPOWER WINDOWS:-\t\tYES\nA/C:-\t\t\tYES\n";
l=choice();
}while(l==1);
}
 void terms()
 {
 int w=1;
 do
 {
 w=0;

 cout<<"\n\n\t\t_________TERMS AND CONDITIONS________";
 cout<<"\n    We provide a warranty of 3 years as promissed by company.";
 cout<<"The warranty\ncan  be extented for 2 years on request by the";
 cout<<" customer. For an extention\nof the   warranty the customer needs";
 cout<<" to pay an extra amount of Rs.5000/-.\nThe car  will be replaced";
 cout<<" on  manufracturing defects. Colour selecion  at\nthe time  of";
 cout<<" replacement  will  depend on  the  availability of  colours.\n";
 cout<<"Customers who pay by bankers draft will only get a free ";
 cout<<"insurence for the\nfirst year. Excessories are not included in";
 cout<<" the car price.For excessories\nseperate  payments are to be";
 cout<<" made. If someone other than the tecnical man\nauthorised  by";
 cout<<" the company  opens  the engine  the  warranty  will  stand";
 cout<<"\nobsolite.Customers should also bring their vehicles";


 cout<<" for regular service.\n";
 cout<<"Any of the service is missed  and the warranty  will stand  obsolite.";
 cout<<"\n\n\n\n\n\n\n\n1.BACK TO MENU";
 cout<<"\n\n2.EXIT\n";
 cout<<"\n\nEnter your choice:  ";
 int t;
 cin>>t;
 switch(t)
	{


        case 1:menu();
	    case 2:exit(0);
        default:
		{
		cout<<"\n\n\nt\tWRONG OPTION...!!!";
		Sleep(1);
		w=1;
		}
	};
 }while(w==1);
 }
 int main()
	{
	
	cout<<"\n\n\n\n\n\n\n\t\t___________WELCOME TO FORD COMPANY_____________"<<endl;
	cout<<"\n\n\n\n\tLoading please wait.....";

	Sleep(3);                            //sleep
	
	menu();                //calls menu fun

	}
 void menu()                                         //menu fun
	{
	int x,n,c;
	fstream cr;
	int ch=1;
	char found='n';
	while(ch==1)
	{

	ch=0;
	cout<<"\n\n\n\t\t\t________MENU________";
	cout<<"\n\n\n\n\n* Press 1 TO VIEW CATALOGUE.";
	cout<<"\n\n* Press 2 TO VIEW YOUR BOOKING.";
	cout<<"\n\n* Press 3 TO EDIT YOUR BOOKING.";
	cout<<"\n\n* Press 4 TO DELETE BOOKING.";
	cout<<"\n\n* Press 5 TO VIEW TERMS & CONDITIONS";
	cout<<"\n\n* Press 6 TO EXIT.\n\n";
	cout<<"\n\n\nEnter your choice:....  ";
	cin>>x;
	switch(x)
	{
	case 1:
		models();                 //calls models fun

	case 2:
	{
		 cr.open("carmanag.dat",ios::in);


                   cout<<"ENTER YOUR BOOK NUMBER:";
	 cin>>n;
 while(!cr.eof())
 {
 cr.read((char*)&bk,sizeof(bk));
if(bk.getbno()==n)
 {
 bk.show();
 found='y';
 cout<<"\n1.BACK\n2.EXIT\n";
 cin>>c;
 switch(c)
 {
 case 1:
 menu();
 break;
 case 2:
exit(0);
break;
 default:
 {
 cout<<"WRONG CHOICE!!!";
 Sleep(2);
 menu();
 }
 };
break;
 }

}         //while loop ends

 if(found=='n')
 {
 cout<<"ENTERED BOOKING NUMBER IS WRONG";
 Sleep(2);
 menu();
 }

 cr.close();
break;
}
case 3:
 {
 int bu=0;long pos;char fd='f';
  cout<<"\nENTER THE BOOKING NUMBER:";
cin>>bu;
 cr.open("carmanag.dat",ios::in|ios::out|ios::binary);
  if(fd=='f')
{
 while(!cr.eof())
 {
  pos=cr.tellg();
			
  if(bk.getbno()==bu)
{
 bk.modify();
cr.seekg(pos);
  cr.write((char*)&bk,sizeof(bk));
 cout<<"\n\nYOU HAVE SUCCESSFULLY MODIFIED YOUR BOOKING !";
 fd='t';
 getch();
 break;
}
 }
cr.close();
menu();
}
else
{
cout<<"WRONG BOOKING NUMBER!!!";
Sleep(2);
menu();
}
}
case 4:
del();
break;
case 5:
{
terms();
break;
}
case 6:	
exit(0);
default:
{
cout<<"\n\n\tWRONG OPTION...!!!";
Sleep(2);
ch=1;
}
};
}
}
  void models()
	{
	int w=1;
	cars c;

	while(w==1)
	{

	w=0;
	cout<<"\n\n\n\n\t\t\t______CATALOGUE_______";
	cout<<"\n\n\n\n* 1.FORD FIESTA";
	cout<<"\n\n* 2.FORD IKON";
	cout<<"\n\n* 3.FORD ENDEAVOUR";
	cout<<"\n\n* 4.FORD WAGON";
	cout<<"\n\n* 5.MAIN MENU";
	cout<<"\n\n* 6.EXIT";
	cout<<"\n\n\n\tEnter your choice:...  ";
	int viw;
	cin>>viw;
	switch (viw)
	{
	case 1:	c.fiesta();
	case 2:	c.ikon();
	case 3:	c.endeavour();
	case 4:	c.wagon();
    case 5:	menu();
	case 6:	exit(0);
	default:
	{
	cout<<"\n\n\tWRONG OPTION...!!!";
	Sleep(2);
	w=1;
	}
	};
	}
	}
 int choice()
{
fstream cr;
char ans='n';
cout<<"\n\n*** ENTER CHOICE ***";
cout<<"\n\nPress 1 to book this car";
cout<<"\nPress 2 to go back to catalogue";
cout<<"\nPress 3 to go back to main menu";
cout<<"\nPress 4 to exit\n\n";
int choi=0;
cin>>choi;
switch(choi)
{
case 1:
				 {
cr.open("carmanag.dat",ios::app);
while(ans=='n')
{
bk.get();
cr.write((char*)&bk,sizeof(bk));
bk.show();
cout<<"\nARE THESE INFORMATIONS CORRECT(y/n):";
cin>>ans;
cout<<"\n\nCONGRATS !! YOU HAVE SUCCESSFULLY BOOKED YOUR CAR";
}
cr.close();
bn++;
getch();
}

case 2:
 {
models();
break;
 }
case 3:
 {
menu();
break;
 }
case 4:	exit(0);

default:
{
cout<<"\n\nWRONG OPTION...!!!";
Sleep(2);
}
};
return 1;
	}
 void del()
 {
 fstream cr1("carmanag.dat",ios::in);
 fstream cr2("temp.dat",ios::out);
 int y=0;
 char found='f',confirm='n';
 cout<<"\nENTER THE BOOKING NUMBER:";
 cin>>y;

 while(!cr1.eof())
{
cr1.read((char*)&bk,sizeof(bk));
if(bk.getbno()==y)
{
bk.show();
found='t';
cout<<"\n\t\t\tDELETE?(y/n)...";
cin>>confirm;
if(confirm=='n')
cr2.write((char*)&bk,sizeof(bk));
else
{
cout<<"BOOKING DELETED!!!";
Sleep(3);
}
 }
else
cr2.write((char*)&bk,sizeof(bk));
break;
remove("carmanag.dat");
rename("temp.dat","carmanag.dat");
}
 if(found=='f')
cout<<"\nENTERED BOOKING NUMBER IS WRONG";
 cr1.close();
 cr2.close();

 Sleep(2);
 menu();
 }
void book::modify()
{
bk.show();
cout<<"ENTER NEW DETAILS:";
 char nm[30],fnm[30],ad[30],oc[10],ca[10];
 char col[10],md[10];
 long int p;
 cout<<"\nENTER THE NEW NAME:(ENTER '.' TO RETAIN OLD ONE)";
 cin>>nm;
 cout<<"\nENTER THE NEW FATHER NAME:(ENTER '.' TO RETAIN OLD ONE)";
 cin>>fnm;
 cout<<"\nENTER NEW ADDRESS:(ENTER '.' TO RETAIN OLD ONE)";
 cin>>ad;
 cout<<"\nENTER THE NEW OCCUPATION:(ENTER '.' TO RETAIN OLD ONE)";
 cin>>oc;
 cout<<"\nENTER THE NEW CAR YOU WANT TO BOOK:(ENTER '.' TO RETAIN OLD ONE)";
 cin>>ca;
 cout<<"\nENTER THE NEW COLOUR:(ENTER '.' TO RETAIN OLD ONE)";
 cin>>col;
 cout<<"\nENTER THE NEW MODE OF PAYEMENT:(ENTER '.' TO RETAIN OLD ONE)";
 cin>>md;
 cout<<"ENTER NEW PHONE NUMBER:(ENTER -1 TO RETAIN OLD ONE)";
 cin>>p;
 if(strcmp(nm,".")!=0)
strcpy(name,nm);
 if(strcmp(fnm,".")!=0)
strcpy(fname,fnm);
 if(strcmp(ad,".")!=0)
strcpy(add,ad);
if(strcmp(oc,".")!=0)
strcpy(occ,oc);
 if(strcmp(ca,".")!=0)
strcpy(car,ca);
 if(strcmp(col,".")!=0)
strcpy(colour,col);
 if(strcmp(md,".")!=0)
strcpy(mode,md);
 if(p!=-1)
ph=p;
 }

