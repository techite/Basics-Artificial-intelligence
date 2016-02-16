// C++ Program to verify steps in solving a 8 puzzle problem (on a 3x3 matrix)
// Coded by Shashi Prakash Agarwal
#include<iostream.h>
#include<conio.h>
int main(){
clrscr();
int a[3][3];
int zeroy, zerox;
int ctr=0;
int temp;
//Accept a 3x3 matrix as input
for(int i=0; i<3; i++) {

for(int j=0; j<3; j++) {

			       cin>>a[i][j];

			       if(a[i][j]<0 || a[i][j]>9) { cout<<"Enter valid input:";
			       cin>>a[i][j];
						       }

			       if(a[i][j]==0) {ctr++;
			       zeroy=j;
			       zerox=i; //Define location of '0'
				}
			       }

			}
//Verify Number of 'Zero' = = 1
if(ctr==1) { cout<<"8 Puzzle entered succesfully"; }
int in;
do{
//Present menu of options in the program
cout<<"\n\tChoose Operation:\t\t1. Show \n \t\t 2. Left \n \t\t 3.Right \n\t\t 4.Up \n\t\t 5.Down \n 0. Exit()";
cin>>in;
//Accept Input
switch(in){
case 1:
//Show 3x3 Matrix
for(i=0;i<3;i++) { for(int j=0;j<3;j++) { cout<<a[i][j]; } cout<<endl; }
break;
case 2:
//Move Left
if(zeroy<=2 && zeroy>0) {
/* Swap variables
temp = a
a = b
b = temp
*/
temp = a[zerox][zeroy];
a[zerox][zeroy]=a[zerox][zeroy-1];
a[zerox][zeroy-1]=temp;
zeroy--; //Decrement 
}
else { cout<<"Invalid move"; }
break;
case 3:
//Move Right
if(zeroy>=0 && zeroy<2) {
/*temp = a
a = b
b = temp
*/
temp = a[zerox][zeroy];
a[zerox][zeroy]=a[zerox][zeroy+1];
a[zerox][zeroy+1]=temp;
zeroy++;//Increment zeroy
}
else { cout<<"Invalid move"; }
break;
case 4:
//Move Up
if(zerox<=2&&zerox>0) {
/*temp = a
a = b
b = temp
*/
temp = a[zerox-1][zeroy];
a[zerox-1][zeroy]=a[zerox][zeroy];
a[zerox][zeroy]=temp;
zerox--;
}
else { cout<<"Invalid move"; }
break;
case 5:
//Move Down
if(zerox<2&&zerox>=0) {
/*temp = aa = b
b = temp
*/
temp = a[zerox+1][zeroy];
a[zerox+1][zeroy]=a[zerox][zeroy];
a[zerox][zeroy]=temp;
zerox++;
}
else { cout<<"Invalid move"; }
}
}while(in!=0);
getch();
return 0;}
