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

void showpb()
{
cout<<"\n\n\n\n\n\n 'P' Purchase\n 'B' Back";
}
};
