#include<iostream>
#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<stdio.h>
#include<ctype.h>
using namespace std;
class subject
{
public:
char s[5][40],sub[5][5][40];
subject()
{
strcpy(sub[0][0],"Physics NCERT-I");
strcpy(sub[0][1],"Physics NCERT-II");
strcpy(sub[0][2],"Pradeep Physics");
strcpy(sub[0][3],"H.C.Verma\t");
strcpy(sub[0][4],"Together With");
strcpy(sub[1][0],"Chemistry NCERT-I");
strcpy(sub[1][1],"Chemistry NCERT-II");
strcpy(sub[1][2],"Pradeep Chemistry");
strcpy(sub[1][3],"Together With");
strcpy(sub[1][4],"P.Bahaadur\t");
strcpy(sub[2][0],"Maths NCERT-I");
strcpy(sub[2][1],"Maths NCERT-II");
strcpy(sub[2][2],"Maths ND-I\t");
strcpy(sub[2][3],"Maths ND-II");
strcpy(sub[2][4],"R.D.Sharma\t");
strcpy(sub[3][0],"Flemingo Textbook");
strcpy(sub[3][1],"Vistas Textbook");
strcpy(sub[3][2],"Flemingo ND");
strcpy(sub[3][3],"Vistas ND\t");
strcpy(sub[3][4],"Golden Guide");
strcpy(sub[4][0],"Sumita Arora");
strcpy(sub[4][1],"Together With");
strcpy(sub[4][2],"Evergreen C++");
strcpy(sub[4][3],"RohitQuestionBank");
strcpy(sub[4][4],"Osborne\t");
strcpy(s[0],"Physics\t");
strcpy(s[1],"Chemistry\t");
strcpy(s[2],"Maths\t");
strcpy(s[3],"English\t");
strcpy(s[4],"Computer Science");

}
};

void show();
void show2();
class userlist
{
public:
int no;
char users[100][50];
};
class user
{
public:
int sbj[5][7],totp,totr;
char password[20];
void showpb()
{
cout<<"\n\n\n\n\n\n 'P' Purchase\n 'B' Back";
}
};

void uppercase(char *);
void pur_ret(char name[]);
void notification(user &amp;);
void setdefault(user &amp;);
void chkusrlst();
void chkbooklst();
void showuserlist();
int crtusr();
int showbooks();
int openacc();
void namecutter(char name[]);

int main()
{
textbackground(3);
textcolor(0);
chkusrlst();
chkbooklst();
mpage:
clrscr();
char ch;
cout<<"\n\n\t\t\tWelcome To ASHISH BOOKSHOP\n\n\n\n\n '1' See the ";
cout<<"lists of books\n '2' Create an account\n '3' Open an account";
cout<<"\n '4' See about no. of books purchased/returned\n";
cout<<" '5' See the list of accounts\n '6' Quit";show();
ch=getch();
switch(ch)
{
case '1': if(showbooks()==1)
{  goto mpage;
}
break;
case '2': crtusr();
goto mpage;
case '3': openacc();
goto mpage;
case '4': pur_ret("BOOKLIST");
goto mpage;
case '5': showuserlist();
goto mpage;
case '6': return 0;
default : goto mpage;
}
getch();
return 0;
}

int crtusr()
{
clrscr();
char name[50],reply;
ifstream fi;
user u;userlist list;
fi.open("USERLIST");fi.read((char *) &list,sizeof(list));fi.close();
if(list.no==99)
{ clrscr();cout<<"\n\tYou can't create any account.\n\t";
cout<<"Since the accoutn list is full,\n\tso you have to";
cout<<" delete an account";show2();getch();return 0;
}
cout<<"\n Enter your name(max 49 characters):\n ";
page2:
cin.getline(name,49);uppercase(name);
if(name[0]=='\0'||name[0]==' ')
{
clrscr();
cout<<"\n Please enter a valid name:";goto page2;
}
for(int i=0;name[i]!='\0';i++)
{
if(name[i]=='\\'||name[i]=='/'||name[i]==':'||name[i]=='*'||name[i]=='?'||name[i]=='\"'||name[i]=='<'||name[i]=='>'||name[i]=='|')
{ clrscr();
cout<<"\n Please enter a valid name:";goto page2;
}
}
fi.open(name);
if(fi.good())
{
clrscr();
cout<<"\n The name you have entered is already present!";
cout<<"\n Please enter another:\n ";goto page2;
}
fi.close();
page:  clrscr();
cout<<"\n Do you want to add a password? (y/n):";reply=getch();
if(reply=='Y'||reply=='y')
{ clrscr();
cout<<"\n Enter your password(max 19 characters):\n ";
cin.getline(u.password,19);
}
else if(reply=='N'||reply=='n')
{ strcpy(u.password,"########");
}
else{ goto page;}
setdefault(u);
ofstream fo(name);
fo.write((char *) &u,sizeof(u));fo.close();
strcpy(list.users[list.no],name);list.no++;
fo.open("USERLIST");fo.write((char *) &list,sizeof(list));fo.close();
clrscr();cout<<"\n\n\tCongratulations! ";
cout<<"You have created your account of name:\n\t'"<<name<<"'";
show2();getch();
return 0;
}

void setdefault(user &usr)
{
int i,j;
for(i=0;i<5;i++)
{
for(j=0;j<7;j++)set default
{
usr.sbj[i][j]=0;
}
}
usr.totp=0;usr.totr=0;
}
void chkusrlst()
{
ifstream usrlst;
usrlst.open("userlist");
if(!usrlst.good())
{
ofstream fo("userlist");
userlist list;
list.no=0;
fo.write((char *) &list,sizeof(list));
fo.close();
}
usrlst.close();
}

void chkbooklst()
{
ifstream booklst;int i,j;
booklst.open("booklist");
if(!booklst.good())chk
{
ofstream fo("booklist");
user bklst;
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
bklst.sbj[i][j]=1000;
}
}
for(i=0;i<5;i++)  
{
bklst.sbj[i][5]=0;bklst.sbj[i][6]=0;
}
bklst.totp=0;bklst.totr=0;
fo.write((char *)&bklst,sizeof(bklst));
fo.close();
}
booklst.close();
}

int showbooks()
{
user guest;subject sb;char i,k,ch,ch1,ch2;int x,y,j;
page1:  clrscr();
ifstream fi("Booklist");
fi.read((char *) &guest,sizeof(guest));
fi.close();cout<<"\n\n\n\n\n\n\n";
for(x=0;x<5;x++)
{
cout<<" '"<<x+1<<"' "<<sb.s[x]<<"\n";
}
cout<<" 'B' Back";
show();ch=getch();
for(i='1',x=0;i<='5';i++,x++)
{
page2:  clrscr();
if(ch==i)
{
cout<<"\n\n\n\t\t"<<sb.s[x]<<"\n\n\n\n";
for(j=0;j<5;j++)
{
cout<<" \'"<<j+1<<"\' "<<sb.sub[x][j]<<"\t";
cout<<guest.sbj[x][j]<<" remaining\n";
}
cout<<" 'B' Back";show();ch1=getch();
for(k='1',y=0;k<='5';k++,y++)
{
if(ch1==k)
{
page3:  clrscr();
cout<<"\n\t\t\t\t"<<sb.sub[x][y];
guest.showpb();show();ch2=getch();
if(ch2=='P'||ch2=='p')
{
if(guest.sbj[x][y]>0)
{ guest.totp++;guest.sbj[x][5]++;guest.sbj[x][y]--;
notification(guest);
}
else
{
clrscr();
cout<<"\n\n\tYou can't purchase this book.\n\tMake ";
cout<<"sure that no. of copies of this book\n\tin ";
cout<<"this shop is greater than zero.";
show2();getch();goto page2;
}
}
else if(ch2=='B'||ch2=='b'){ goto page2;}
else{ goto page3;}
break;
}
}
if(ch1=='B'||ch1=='b'){ goto page1;}
else{ goto page2;}
}
}
if(ch=='B'||ch=='b'){ return 1;}
else{ goto page1;}
}
void notification(user &u)
{
clrscr();
ofstream f("BOOKLIST");
f.write((char *) &u,sizeof(u));
f.close();
cout<<"\n\n\n\n\n\n\n\tThank you for your purchasing this book. ";
cout<<"Next time you must create\n\tan account so that you can ";
cout<<"purchase more than one book and also can\n\treturn books";
cout<<" purchased from this shop.\n\n\n\n\n";
cout<<"\tNow press any key to exit";
getch();
exit(0);
}

void show()
{
cout<<"\n\n\n\n\n\tPress any of the keys given above!";
}
void show2()
{
cout<<"\n\n\n\n\n\tPress any key to back!";
}
void pur_ret(char name[])
{
clrscr();
user u;subject s;ifstream fi(name);int i;
fi.read((char *) &u,sizeof(u));fi.close();
cout<<"\n\n\n\n Subject\t\tPurchased\tReturned\n\n\n";
for(i=0;i<5;i++)
{
cout<<" "<<i+1<<"."<<" "<<s.s[i]<<"\t"<<u.sbj[i][5];
cout<<"\t\t"<<u.sbj[i][6]<<"\n";
}
cout<<" 6. "<<"Total\t\t"<<u.totp<<"\t\t"<<u.totr;show2();getch();
}
