//============================================================================
// Name        : Clocks.cpp
// Author      : Brittany Winters
// Version     :
// Copyright   : Your copyright notice
// Description : Project 1
//============================================================================

#include <iostream>
#include <ctime>
using namespace std;


// Time class in implemented
class Time {
	//Public time variables for each clock
public:
int h1;
int h2;
int m1;
int m2;
int s1;
int s2;

// default constructor
Time() {
//Initialize pointers to set clocks
this->h1 = 12;
this->h2 = 00;
this->m1 = 00;
this->m2 = 00;
this->s1 = 00;
this->s2 = 00;

}

//Restrains clocks from reaching capacity
void managetime(int t=1) {
if(t==1) {

if(s1/60>0) {
	s1 %= 60;
m1++;
}

if(m1/60 > 0) {
m1 %= 60;
h1++;

}

if(h1/12>0) {
h1 %= 12;
if(h1==0)
h1=12;

}

}

if(t==2) {

if(s2/60>0) {
s2 %= 60;
m2++;

}

if(m2/60 > 0) {
m2 %= 60;
h2++;

}

if(h2/24>0) {
h1 %= 24;

}

}

}
//Add second to Time2
void addSecond() {
s1++;
s2++;
managetime(1);
managetime(2);

}

//Wait second function
void waitSecond() {
s1++;
s2++;
managetime(1);
managetime(2);

}

//Add minute to Clock2
void addMinute() {
m1++;
m2++;
managetime(1);
managetime(2);

}

//Add hour to Clock2
void addHour() {
h1++;
h2++;
managetime(1);
managetime(2);

}

//Display both times
void display() {

printf("\nClock 1: %02d:%02d:%02d\n",h1,m1,s1);
printf("Clock 2: %02d:%02d:%02d\n\n",h2,m2,s2);

}
};

int main() {

Time t ;
int p,n,m,f=1;


//Main menu
while(f>0) {

t.display();
cout<<"Press Button? (1:yes, 2:no): "<<endl;
cin>>p;
if(p==1) {

cout<<"Choose option\n1. Add Time\n2. EXIT\nEnter 1 or 2: ";
cin>>n;

if(n==1) {

cout<<"Choose option\n1. Add 1 hour\n2. Add 1 minute\n3. Add 1 second\nEnter 1 or 2 or 3: ";
cin>>m;

switch(m) {
case 1: t.addHour(); break;
case 2: t.addMinute(); break;
case 3: t.addSecond();

}

}
if(n==2) {

f=-1;
}
}
else if(p==2) {
t.addSecond();
t.waitSecond();
}
}
}

