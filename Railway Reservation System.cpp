


//    PASSWORD FOR ADMIN MODE IS : admin



#include<constream.h>
#include<process.h>
#include<dos.h>
#include<fstream.h>
#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<iomanip.h>
#include<ctype.h>
#include<string.h>
#include<conio.h>

 void enquiry();
 void ad();
 void adad();
void upass();
void um();
void umenu();
 void um1();
 void um2();
void um3();
void ad5();
void ad2();
void reserve();
void res(); void gettdetails();  void adminl();
void canc();
void cancel();
void ad1();
void ad3();


void layout()
{
textbackground(8); clrscr();    _setcursortype(_NORMALCURSOR);

for(int i=1;i<80;i++)
{gotoxy(i,2);
cout<<"_";      gotoxy(i,5);
cout<<"_";
gotoxy(i,4);cout<<"-";
if(i<20)
{gotoxy(29+i,3);  cout<<"^";
  }
}
gotoxy(30,2);
cout<<"RAILWAY RESERVATION";
}



class login
{public:
char idd[30],passw[4];

void getid()
{ int c;
layout();
gotoxy(34,5);cout<<"(Admin mode)";
gotoxy(15,12); cout<<" Enter User Name : ";
gotoxy(15,14);cout<<" Enter Password  : ";

gotoxy(35,12); gets(idd);
gotoxy(35,14);
gets(passw);

}

void putid()
{   int c;
layout();
gotoxy(34,5);cout<<"(Admin mode)";
gotoxy(15,12); cout<<" User Name : ";
gotoxy(15,14);cout<<" Password  : ";

gotoxy(35,12); puts(idd);
gotoxy(35,14);

puts(passw);

}

 }id;


 class display_admin
{      public:
int tno,s1,s2,s1f,s2f;
char tname[20],board[20],dest[20],date[8];


void getadmin()
{_setcursortype(_NORMALCURSOR);
layout();
gotoxy(34,4);cout<<"(ADMIN MODE)";
gotoxy(30,5);cout<<"::::";
gotoxy(15,8);cout<<"Train number : ";
gotoxy(50,8);cin>>tno;
gotoxy(15,9);cout<<"Train name : ";
gotoxy(50,9);gets(tname);
gotoxy(15,11);cout<<"Boarding point :";
gotoxy(50,11);gets(board);
gotoxy(15,12);cout<<"Destination point : ";
gotoxy(50,12);gets(dest);
gotoxy(15,14);cout<<"Number of seats in first class : ";
gotoxy(50,14);cin>>s1;
gotoxy(15,15); cout<<"Fare per ticket : ";
gotoxy(50,15); cin>>s1f;
gotoxy(15,17);cout<<"Number of seats in second class : ";
gotoxy(50,17);cin>>s2;
gotoxy(15,18); cout<<"Fare per ticket : ";
gotoxy(50,18); cin>>s2f;
gotoxy(15,20);cout<<"Date of travel : ";
gotoxy(50,20);gets(date);
}
void displayadmin()
{layout();
gotoxy(34,4);cout<<"(ADMIN MODE)";
gotoxy(30,5);cout<<"::::";gotoxy(15,8);cout<<"Train number : ";
gotoxy(50,8);cout<<tno;
gotoxy(15,9);cout<<"Train name : ";
gotoxy(50,9);cout<<tname;
gotoxy(15,11);cout<<"Boarding point: ";
gotoxy(50,11);cout<<board;
gotoxy(15,12);cout<<"Destination point : ";
gotoxy(50,12);cout<<dest;
gotoxy(15,14);cout<<"Number of seats in first class : ";
gotoxy(50,14);cout<<s1;
gotoxy(15,15); cout<<"Fare per ticket : ";
gotoxy(50,15); cout<<s1f;
gotoxy(15,17);cout<<"Number of seats in second class : ";
gotoxy(50,17);cout<<s2;
gotoxy(15,18); cout<<"Fare per ticket : ";
gotoxy(50,18); cout<<s2f;
gotoxy(15,20);cout<<"Date of travel : ";
gotoxy(50,20);cout<<date;
}
}a1;


class user
{    public:
int t_no,seats,fare,pnr;
char name[10][30],date[8],t_name[20],board[20],dest[20],tier;
  randomize();
void getdata()
{layout();      _setcursortype(_NOCURSOR);
pnr=random(889)+111;
gotoxy(34,4);cout<<"(USER MODE)";
gotoxy(30,5);cout<<"::Reserve Ticket::";
gotoxy(15,8);cout<<"Train number  : ";                          gotoxy(50,8);cin>>t_no;
gotoxy(15,9);cout<<"Train name  : ";                            gotoxy(50,9);gets(t_name);
gotoxy(15,11);cout<<"Boarding station  : ";                     gotoxy(50,11);gets(board);
gotoxy(15,12);cout<<"Destination  : ";                          gotoxy(50,12);gets(dest);
gotoxy(15,14);cout<<"Number of seats required : ";              gotoxy(50,14);cin>>seats;

for(int i=0;i<seats;i++)
{gotoxy(15,16+i);cout<<"passenger name  : ";
     gotoxy(50,16+i);gets(name[i]);
}
gotoxy(15,16+seats+1);cout<<"Enter class f-first,s-second  : "; gotoxy(50,16+seats+1);cin>>tier;
gotoxy(15,16+seats+2);cout<<"Date of travel  : ";             gotoxy(50,16+seats+2);gets(date);

cout<<"------------------------------------------------------------------------------";
cout<<"-----------------------------your ticket is reserved--------------------------";
}

void putdata()
{layout();      _setcursortype(_NOCURSOR);
gotoxy(34,4);cout<<"(USER MODE)";
gotoxy(30,5);cout<<"::Reserve Ticket::";
gotoxy(15,8);cout<<"Train number  : ";                          gotoxy(50,8);cout<<t_no;
gotoxy(15,9);cout<<"Train name  : ";                            gotoxy(50,9);puts(t_name);
gotoxy(15,10);cout<<"BUS no.  : ";        gotoxy(50,10);cout<<pnr;
gotoxy(15,12);cout<<"Boarding station  : ";                     gotoxy(50,12);puts(board);
gotoxy(15,13);cout<<"Destination  : ";                          gotoxy(50,13);puts(dest);
gotoxy(15,15);cout<<"Number of seats required : ";              gotoxy(50,15);cout<<seats;
for(int i=0;i<seats;i++)
{gotoxy(15,17+i);cout<<"passenger name  : ";
       gotoxy(50,17+i);puts(name[i]);

}
gotoxy(15,17+seats+1);cout<<"Your Class : "; gotoxy(50,17+seats+1);
ifstream f;
f.open("c.txt",ios::in|ios::binary);

while(f)
{ f.read((char*)&a1,sizeof(a1));
if(a1.tno==t_no)
{
if(tier=='f')
{cout<<"First class";fare=a1.s1f;}
else
{cout<<"Second class"; fare=a1.s2f;}
  }
  }

gotoxy(15,17+seats+2);cout<<"Date of travel  : ";             gotoxy(50,17+seats+2);puts(date);
 gotoxy(15,17+seats+2); cout<<"You must pay : ";   gotoxy(50,17+seats+2);  cout<<seats*fare;
}

}u;



void main()
{ layout();
 char ch; int a=1;    _setcursortype(_NOCURSOR);

gotoxy(34,5);cout<<"(Main Menu)";
gotoxy(10,10);cout<<"1. ";
gotoxy(10,12);cout<<"2. ";
gotoxy(10,14);    cout<<"3. ";
    up:
 if(a==1)
 {gotoxy(13,10); textbackground(6);   textcolor(7);
 cprintf(" Admin mode     ");  }
 else
 { gotoxy(13,10); textbackground(8);   textcolor(7);
 cprintf(" Admin mode     "); }

  if(a==2)
 {gotoxy(13,12); textbackground(6);     textcolor(7);
 cprintf(" User mode      ");  }
 else
 { gotoxy(13,12); textbackground(8);      textcolor(7);
 cprintf(" User mode      "); }

  if(a==3)
 {gotoxy(13,14); textbackground(6);      textcolor(7);
 cprintf(" Exit           ");  }
 else
 { gotoxy(13,14); textbackground(8);      textcolor(7);
 cprintf(" Exit           "); }


ch=getch();

if(ch=='x')
exit(0);

if(a==3&&ch==13)
exit(0);

if(a==1&&ch==13)
{ layout();
	char p[5],pass[5]={"admin"};
	int i,ans=1;;
gotoxy(34,5);cout<<"(Admin mode)";

gotoxy(15,12);cout<<" Enter Password  : ";


gotoxy(35,12);


for( i=0;i<5;i++)
{ p[i]=getch();
cout<<"* ";
 }

 for( i=0;i<5;i++)
{ if(p[i]!=pass[i])
   {ans=0; break;}
 }

if(ans==1)
adminl();
if(ans==0)
{gotoxy(16,14);cout<<"WARNING : wrong password "; getch();main(); }

}

if(a==2&&ch==13)
upass();

if(ch==80||ch=='s')
{
if(a==3)
  a=1;
  else
a++;
}

if(ch==72||ch=='w')
{ if(a==1)
  a=3;
  else
a--;
}


goto up;





getch();
}

//----------------------------USER password--------------------------------------------
void upass()
{ int c,res=1,ress=0;   char name[30],pass[4];
layout();

gotoxy(34,5);cout<<"(User mode)";
gotoxy(15,12); cout<<" Enter User Name : ";
gotoxy(15,14);cout<<" Enter Password  : ";

gotoxy(35,12); gets(name);
gotoxy(35,14);

  ifstream f;
  f.open("id.txt",ios::in);
for( c=0;c<4;c++)
{ pass[c]=getch();
cout<<"* ";
}

   f.seekg(0);   int b;
while(f)
{f.read((char*)&id,sizeof(id));

for( c=0;c<4;c++)
{
if(pass[c]!=id.passw[c])
{res=0;
break; }
else
{res++;}
}


if(!strcmpi(id.idd,name))
ress=1;


if(res==4&&ress==1)
break;
}

if(res==0)
{gotoxy(15,16);cout<<" WARNING : wrong password "; getch();
main();
}

if(ress==0)
{gotoxy(15,16);cout<<" WARNING : wrong user id "; getch();
main();
}



umenu();

}

//---------------------------------------add-------------------------------

void ad()
{   layout();     char ch;int a=1;
gotoxy(34,4);cout<<"(USER MODE)";
gotoxy(37,5);cout<<"::::";
gotoxy(10,10);cout<<"1. ";
gotoxy(10,12);cout<<"2. ";

    ap:
 if(a==1)
 {gotoxy(13,10); textbackground(6);   textcolor(7);
 cprintf(" Create detail database       ");  }
 else
 { gotoxy(13,10); textbackground(8);   textcolor(7);
 cprintf(" Create detail database       "); }

  if(a==2)
 {gotoxy(13,12); textbackground(6) ;     textcolor(7);
 cprintf(" Return to Admin Menu         ");  }
 else
 { gotoxy(13,12); textbackground(8);      textcolor(7);
 cprintf(" Return to Admin Menu         "); }


  ch=getch();

  if(ch=='x')
  exit(0);
  if(ch==13&&a==2)
    adminl();
    if(ch==13&&a==1)
       ad1();

if(ch==80||ch=='s')
{
if(a==2)
  a=1;
  else
a++;
}

if(ch==72||ch=='w')
{ if(a==1)
  a=2;
  else
a--;
}


goto ap;

}
//-------------------------------adad--------------------------------------
 void adad()
{   layout();     char ch;int a=1;
gotoxy(34,4);cout<<"(USER MODE)";
gotoxy(37,5);cout<<"::::";
gotoxy(10,10);cout<<"1. ";
gotoxy(10,12);cout<<"2. ";

    app:
 if(a==1)
 {gotoxy(13,10); textbackground(6);   textcolor(7);
 cprintf(" Add details                  ");  }
 else
 { gotoxy(13,10); textbackground(8);   textcolor(7);
 cprintf(" Add details                  "); }

  if(a==2)
 {gotoxy(13,12); textbackground(6) ;     textcolor(7);
 cprintf(" Return to Admin Menu         ");  }
 else
 { gotoxy(13,12); textbackground(8);      textcolor(7);
 cprintf(" Return to Admin Menu         "); }


  ch=getch();

  if(ch=='x')
  exit(0);
  if(ch==13&&a==2)
    adminl();
    if(ch==13&&a==1)
       ad2();

if(ch==80||ch=='s')
{
if(a==2)

  a=1;
  else
a++;
}

if(ch==72||ch=='w')
{ if(a==1)
  a=2;
  else
a--;
}


goto app;

}

//-----------------------------USER MENU---------------------------------------------------
void umenu()
{
char ch; int a=1;
layout();  _setcursortype(_NOCURSOR);
gotoxy(34,4);cout<<"(USER MODE)";
gotoxy(33,5);cout<<"::Main Menu::";
gotoxy(10,10);cout<<"1. ";
gotoxy(10,12);cout<<"2. ";
gotoxy(10,14);cout<<"3. ";
gotoxy(10,16);cout<<"4. ";
gotoxy(10,18);cout<<"5. ";


    upp:
 if(a==1)
 {gotoxy(13,10); textbackground(6);   textcolor(7);
 cprintf(" Reserve Tickets        ");  }
 else
 { gotoxy(13,10); textbackground(8);   textcolor(7);
 cprintf(" Reserve Tickets        "); }

  if(a==2)
 {gotoxy(13,12); textbackground(6) ;     textcolor(7);
 cprintf(" Cancel Tickets         ");  }
 else
 { gotoxy(13,12); textbackground(8);      textcolor(7);
 cprintf(" Cancel Tickets         "); }

  if(a==3)
 {gotoxy(13,14); textbackground(6);      textcolor(7);
 cprintf(" Enquiry                ");  }
 else
 { gotoxy(13,14); textbackground(8);      textcolor(7);
 cprintf(" Enquiry                "); }

  if(a==4)
 {gotoxy(13,16); textbackground(6);      textcolor(7);
 cprintf(" Get ticket details     ");  }
 else
 { gotoxy(13,16); textbackground(8);      textcolor(7);
 cprintf(" Get ticket details     "); }

  if(a==5)
 {gotoxy(13,18); textbackground(6);      textcolor(7);
 cprintf(" Return to Main Menu    ");  }
 else
 { gotoxy(13,18); textbackground(8);      textcolor(7);
 cprintf(" Return to Main Menu    "); }



ch=getch();



if(ch=='x')
exit(0);

if(ch==13&&a==1)
reserve();

if(ch==13&&a==5)
 main();
 if(ch==13&&a==4)
 gettdetails();

 if(ch==13&&a==2)
 canc();
 if(ch==13&&a==3)
 enquiry();



if(ch==80||ch=='s')
{
if(a==5)
  a=1;
  else
a++;
}

if(ch==72||ch=='w')
{ if(a==1)
  a=5;
  else
a--;
}


goto upp;


}

//-------------------------------USER -> RESERVE TICKET------------------------------------------------

void reserve()
{   layout();     char ch;int a=1;
gotoxy(34,4);cout<<"(USER MODE)";
gotoxy(30,5);cout<<"::Reserve Ticket::";
gotoxy(10,10);cout<<"1. ";
gotoxy(10,12);cout<<"2. ";

    uppp:
 if(a==1)
 {gotoxy(13,10); textbackground(6);   textcolor(7);
 cprintf(" Reserve Ticket             ");  }
 else
 { gotoxy(13,10); textbackground(8);   textcolor(7);
 cprintf(" Reserve Ticket             "); }

  if(a==2)
 {gotoxy(13,12); textbackground(6) ;     textcolor(7);
 cprintf(" Return to User Menu        ");  }
 else
 { gotoxy(13,12); textbackground(8);      textcolor(7);
 cprintf(" Return to User Menu        "); }


  ch=getch();

  if(ch=='x')
  exit(0);
  if(ch==13&&a==2)
    umenu();
    if(ch==13&&a==1)
res();

if(ch==80||ch=='s')
{
if(a==2)
  a=1;
  else
a++;
}

if(ch==72||ch=='w')
{ if(a==1)
  a=2;
  else
a--;
}


goto uppp;

}


void res()
{layout();     int tt=0,ss=0;
gotoxy(34,4);cout<<"(USER MODE)";
gotoxy(30,5);cout<<"::Reserve Ticket::";

fstream f1,f2;         int a;  int s;
f1.open("p.txt",ios::out|ios::binary|ios::app);
u.getdata();
f2.open("c.txt",ios::in|ios::binary);

while( f2.read((char*)&a1,sizeof(a1)))
{if(u.tier=='f')
  s=a1.s1;
  else
  s=a1.s2;
if(u.t_no==a1.tno)
{tt=1;}
if(u.seats<s&&u.t_no==a1.tno)
{ss=1;  }

}
if(tt==0)
{  clrscr();
cout<<"No such train with train number "<<u.t_no<<" is available . ";  getch();
reserve();
}

if(ss==0)
{  clrscr();

cout<<"Seats not available maximum no. of seats in train  "<<u.t_no<<" is "<<s;
  getch();

reserve();
}
getch();
f1.write((char*)&u,sizeof(u));
layout();
gotoxy(34,4);cout<<"(USER MODE)";
gotoxy(30,5);cout<<"::Reserve Ticket::";
f1.open("p.txt",ios::in|ios::binary);

f1.seekg(-393,ios::end);
f1.read((char*)&u,sizeof(u));
u.putdata();
getch();
umenu();
}

void gettdetails()
{  layout();
gotoxy(34,4);cout<<"(USER MODE)";
gotoxy(30,5);cout<<"::Ticket Details::";

fstream f1;
f1.open("p.txt",ios::binary|ios::in);
while( f1.read((char*)&u,sizeof(u)))
{
u.putdata();
getch();
}
umenu();
}

void canc()
{ layout();          int a=1;char ch;
gotoxy(34,4);cout<<"(USER MODE)";
gotoxy(30,5);cout<<"::Cancel Ticket::";

gotoxy(10,10);cout<<"1. ";
gotoxy(10,12);cout<<"2. ";


    upppp:
 if(a==1)
 {gotoxy(13,10); textbackground(6);   textcolor(7);
 cprintf(" Cancel Ticket              ");  }
 else
 { gotoxy(13,10); textbackground(8);   textcolor(7);
 cprintf(" Cancel Ticket              "); }

  if(a==2)
 {gotoxy(13,12); textbackground(6) ;     textcolor(7);
 cprintf(" Return to User Menu        ");  }
 else
 { gotoxy(13,12); textbackground(8);      textcolor(7);
 cprintf(" Return to User Menu        "); }


  ch=getch();

  if(ch=='x')
  exit(0);
  if(ch==13&&a==2)
   umenu();
    if(ch==13&&a==1)
     cancel();

if(ch==80||ch=='s')
{
if(a==2)
  a=1;
  else
a++;
}

if(ch==72||ch=='w')
{ if(a==1)
  a=2;
  else
a--;
}


goto upppp;
}

void cancel()
{layout();        int t=0,flag=0;char c='n';
gotoxy(34,4);cout<<"(USER MODE)";
gotoxy(30,5);cout<<"::Cancel Ticket::";
gotoxy(5,7);cout<<"Enter BUS no. : "; gotoxy(27,7); cin>>t;
fstream f,ff;
ff.open("ptemp.txt",ios::out|ios::binary);
f.open("p.txt",ios::in|ios::binary);
 while(f.read((char*)&u,sizeof(u)))
 {

if(t==u.pnr)
{u.putdata();
flag=1;
cout<<"\n\n-----------------------------------------------------------------------------";
cout<<"\nconfirm you want to cancel this ticket(y/n) ? : ";
cin>>c;
if(c=='n')
ff.write((char*)&u,sizeof(u));
}
else
ff.write((char*)&u,sizeof(u));
}
if(flag==0)
{cout<<"\n\n    Record not found "; getch(); umenu();}
ff.close();
f.close();
remove("p.txt");
rename("ptemp.txt","p.txt");
if(c=='n')
cout<<"\n\nTicket do not get cancelled";
else
cout<<"\n\nTicket cancelled ";
getch();
umenu();

}






 //---------------------------------------------------------------------



 //------------------------ADMIN LAYOUT----------------------------------------------------
void adminl()
{ int a=1;char ch;    layout();  _setcursortype(_NOCURSOR);
gotoxy(34,4);cout<<"(ADMIN MODE)";
gotoxy(10,10);cout<<"1.";
gotoxy(10,12);cout<<"2.";
gotoxy(10,14);cout<<"3.";
gotoxy(10,16);cout<<"4.";
gotoxy(10,18);cout<<"5.";
gotoxy(10,20);cout<<"6.";
uppppp:
if(a==1)
{gotoxy(13,10);textbackground(6);textcolor(7);
cprintf(" Create detail data base    ");
}
else
{gotoxy(13,10);textbackground(8);textcolor(7);
cprintf(" Create detail data base    ");
}
if(a==2)
{gotoxy(13,12);textbackground(6);textcolor(7);
cprintf(" Add details                ");
}
else
{gotoxy(13,12);textbackground(8);textcolor(7);
cprintf(" Add details                ");
}
if(a==3)
{gotoxy(13,14);textbackground(6);textcolor(7);
cprintf(" Display details            ");
}
else
{gotoxy(13,14);textbackground(8);textcolor(7);
cprintf(" Display details            ");
}
if(a==4)
{gotoxy(13,16);textbackground(6);textcolor(7);
cprintf(" User management            ");
}
else
{gotoxy(13,16);textbackground(8);textcolor(7);
cprintf(" User management            ");
}
if(a==5)
{gotoxy(13,18);textbackground(6);textcolor(7);
cprintf(" Display passengers details ");
}
else
{gotoxy(13,18);textbackground(8);textcolor(7);
cprintf(" Display passengers details ");
}
if(a==6)
{gotoxy(13,20);textbackground(6);textcolor(7);
cprintf(" Return to main menu        ");
}
else
{gotoxy(13,20);textbackground(8);textcolor(7);
cprintf(" Return to main menu        ");
}
ch=getch();

if(ch=='x')
exit(0);
if(a==6&&ch==13)
main();

if(a==1&&ch==13)
{ad();
}
if(a==2&&ch==13)
adad();

if(a==3&&ch==13)
ad3();

if(a==4&&ch==13)
um();

if(a==5&&ch==13)
ad5();


if(ch==80||ch=='s')
{if(a==6)
a=1;
else a++;
}
if(ch==72||ch=='w')
{if(a==1)
a=6;
else
a--;
}
goto uppppp;}

  void ad1()
{ fstream f1;   char ans;
f1.open("c.txt",ios::out|ios::binary);
do
{
a1.getadmin();
f1.write((char*)&a1,sizeof(a1));
gotoxy(1,22);cout<<"-----------------------------------------------------------------";
gotoxy(4,23);cout<<"Do you want to enter more record (y/n) : ";
gotoxy(50,23);cin>>ans;
 }while(ans=='y'||ans=='Y');
 f1.close();
adminl();}

void ad3()
{  fstream f; layout();
gotoxy(34,4);cout<<"(ADMIN MODE)";
gotoxy(37,5);cout<<"::::";

f.open("c.txt",ios::out|ios::app|ios::in|ios::binary);
f.seekg(0);
while(f.read((char*)&a1,sizeof(a1)))
{a1.displayadmin();
getch();
}    f.close();


adminl();}

void ad5()
{ layout();
gotoxy(34,4);cout<<"(ADMIN MODE)";
gotoxy(30,5);cout<<"::Ticket Details::";

fstream f1;
f1.open("p.txt",ios::binary|ios::in);
while( f1.read((char*)&u,sizeof(u)))
{
u.putdata();
getch();
}


adminl();
}

void um()
{    int a=1;char ch;    layout();  _setcursortype(_NOCURSOR);
gotoxy(34,4);cout<<"(ADMIN MODE)";
gotoxy(10,10);cout<<"1.";
gotoxy(10,12);cout<<"2.";
gotoxy(10,14);cout<<"3.";
gotoxy(10,16);cout<<"4.";
upppppp:
if(a==1)
{gotoxy(13,10);textbackground(6);textcolor(7);
cprintf(" Create id data base     ");
}
else
{gotoxy(13,10);textbackground(8);textcolor(7);
cprintf(" Create id data base     ");
}
if(a==2)
{gotoxy(13,12);textbackground(6);textcolor(7);
cprintf(" Add details             ");
}
else
{gotoxy(13,12);textbackground(8);textcolor(7);
cprintf(" Add details             ");
  }
if(a==3)
{gotoxy(13,14);textbackground(6);textcolor(7);
cprintf(" Display details         ");
}
else
{gotoxy(13,14);textbackground(8);textcolor(7);
cprintf(" Display details         ");
}
if(a==4)
{gotoxy(13,16);textbackground(6);textcolor(7);
cprintf(" Return to main menu     ");
}
else
{gotoxy(13,16);textbackground(8);textcolor(7);
cprintf(" Return to main menu  	  ");
}
ch=getch();

if(ch=='x')
exit(0);
if(a==4&&ch==13)
adminl();

if(a==1&&ch==13)
{um1();
}


if(a==2&&ch==13)
um2();
if(a==3&&ch==13)
um3();


if(ch==80||ch=='s')
{if(a==4)
a=1;
else a++;
}
if(ch==72||ch=='w')
{if(a==1)
a=4;
else
a--;
}
goto upppppp;}

void um1()
{     fstream f;   char ans;
f.open("id.txt",ios::out|ios::binary);
do
{
id.getid();
f.write((char*)&id,sizeof(id));
gotoxy(1,18);cout<<"-----------------------------------------------------------------";
gotoxy(4,19);cout<<"Do you want to enter more record (y/n) : ";
gotoxy(50,19);cin>>ans;
 }while(ans=='y'||ans=='Y');
 f.close();
um();}

void um2()
{     fstream f;   char ans;
f.open("id.txt",ios::out|ios::binary|ios::app);
 id.getid();


f.write((char*)&id,sizeof(id));
 f.close();
 um();
 }

  void um3()
  {    fstream f;
f.open("id.txt",ios::out|ios::app|ios::in|ios::binary);
f.seekg(0);
while(f.read((char*)&id,sizeof(id)))
{id.putid();
getch();
}    f.close();


um();}

 void ad2()
 {        fstream f;
f.open("c.txt",ios::out|ios::binary|ios::app);
 a1.getadmin();


f.write((char*)&a1,sizeof(a1));
 f.close();
 adminl();
 }

 void enquiry()
{  fstream f;
f.open("c.txt",ios::out|ios::app|ios::in|ios::binary);
f.seekg(0);
while(f.read((char*)&a1,sizeof(a1)))
{a1.displayadmin();
getch();
}    f.close();


umenu();}




