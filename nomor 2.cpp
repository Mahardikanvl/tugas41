#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main(){
	int N,i,jb;
	i=1;
	cout<<"Masukkan Nilai N :";cin>>N;
	cout<<"jumlah bilangan 1 sampai dengan N :"<<endl;
	do
	{jb=i+N;
	cout<<jb<<endl;
	}
	while (jb<=i);
}
