#include <iostream>
#include <conio>
int main()
{
int n,bil,max=0;

cout<<"Pencari Nilai Terbesar"<<endl;
cout<<"Masukan Nilai N : ";
cin>>n;
for(int i=1;i<=n;i++)
{
cout<<"Masukan Bilangan Ke "<<i<<" : ";
cin>>bil;
	if(bil>max)
	{
   	max = bil;
   }
}

cout<<"Bilangan Terbesar = "<<max;

getch();
}