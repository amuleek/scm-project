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
