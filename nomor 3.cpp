#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main(){
	int N,i,jb,rr;
	i=1;
	cout<<"Masukkan Nilai N :";cin>>N;
	cout<<"Jumlah Bilangan 1 sampai N :"<<endl;
	do
	{ jb=i+N;
	cout<<jb<<endl;
	}
	while (jb<=1);
	cout<<"Nilai Rata-Rata:"<<endl;
	do
	{ 
	rr=jb/2;
	cout<<rr<<endl;
	}
	while (rr<=i);
}
