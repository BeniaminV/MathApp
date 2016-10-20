#include<iostream>
#include<math.h>
using namespace std;
void citire(int &a);
void afisare(int a);
void suma(int a,int n,int &s);
void produs(int a,int n,int &p);
void media(int a,int n);
void produsuma(int a,int n,int &s1,int &p1);
void impare(int a,int n,int &s2,int &p2);
void mediap(int a,int n);
int maxim(int n);
int minim(int n);
void sfnr(int a,int n);
int factorial(int n);
int aranjamente(int n,int k);
int combinari(int n,int k);
int main ()
{
	int n, s=0, s1=0, a, k, p=1, p1=1, s2=0, p2=1;
	do
	{
		cout<<endl;
		cout<<".................................................................."<<endl;
		cout<<":                               Cuprins                          :"<<endl;
		cout<<":                               _______                          :"<<endl;
		cout<<":   1.Suma                                                       :"<<endl;
		cout<<":   2.Produsul                                                   :"<<endl;
		cout<<":   3.Media aritmetica                                           :"<<endl;
		cout<<":   4.Suma si produsul celor divizibile cu 5                     :"<<endl;
		cout<<":   5.Suma celor pare si produsul celor impare                   :"<<endl;
		cout<<":   6.Media aritmetica a celor care sunt patrate perfecte        :"<<endl;
		cout<<":   7.Determinarea maximului                                     :"<<endl;
		cout<<":   8.Determinarea minimului                                     :"<<endl;
		cout<<":   9.Suma primelor - n - numere naturale                        :"<<endl;
		cout<<":  10.Factorial(n)                                               :"<<endl;
		cout<<":  11.Aranjamente(n)                                             :"<<endl;
		cout<<":  12.Combinari(n)                                               :"<<endl;
		cout<<":                                                                :"<<endl;
		cout<<":     Pentru a parasi aplicatia introduceti 13 si apoi Enter     :"<<endl;
		cout<<".................................................................."<<endl;
		cout<<"Introduceti numarul dorit: ";
		cin>>k;
		cout<<endl;
		switch(k)
		{

		case 1:
			{
				cout<<"Cate numere doriti sa calculati: ";
				citire(n);
				cout<<"Introduceti numerele: "<<endl;
				suma(a,n,s);
				cout<<"Suma acestora este: ";
				afisare(s);
				cout<<endl;
			}
			break;
		case 2:
			{
				cout<<"Cate numere doriti sa calculati: ";
				citire(n);
				cout<<"Introduceti numerele: "<<endl;
				produs(a,n,p);
				cout<<"Produsul acestora este: ";
				afisare(p);
				cout<<endl;
			}
			break;
		case 3:
			{
				cout<<"Cate numere doriti sa calculati: ";
				citire(n);
				cout<<"Introduceti numerele: "<<endl;
				media(a,n);
			}
			break;
		case 4:
			{
				cout<<"Cate numere doriti sa calculati: ";
				citire(n);
				cout<<"Introduceti numerele: "<<endl;
				produsuma(a,n,s1,p1);
				cout<<endl;
				cout<<"Suma celor divizivile cu 5 este: ";
				afisare(s1);
				cout<<endl;
				cout<<"Produsul celor divizivile cu 5 este: ";
				afisare(p1);
				cout<<endl;

			}
			break;
		case 5:
			{
				cout<<"Cate numere doriti sa calculati: ";
				citire(n);
				cout<<"Introduceti numerele: "<<endl;
				impare(a,n,s2,p2);
				cout<<endl;
				cout<<"Suma celor pare este: ";
				afisare(s2);
				cout<<endl;
				cout<<"Produsul celor impare este: ";
				afisare(p2);
				cout<<endl;
			}
			break;
		case 6:
			{
				cout<<"Cate numere doriti sa calculati: ";
				citire(n);
				cout<<"Introduceti numerele: "<<endl;
				mediap(a,n);
			}
			break;
		case 7:
			{
				cout<<"Intrdoduceti cate numere doriti sa verificati: ";
				cin>>n;
				cout<<maxim(n);
				cout<<endl;
			}
			break;
		case 8:
			{
				cout<<"Intrdoduceti cate numere doriti sa verificati: ";
				cin>>n;
				cout<<minim(n);
				cout<<endl;

			}
			break;
		case 9:
			{
				cout<<"Introduceti - n -  pentru calcularea sumei primelor numere: ";
				citire(n);
				cout<<"Suma celor pare este: ";
				sfnr(a,n);

			}
			break;
		case 10:
			{
				cout<<"Intrdoduceti n: ";
				cin>>n;
				cout<<" - n - factorial este: ";
				cout<<factorial(n);
				cout<<endl;

			}
			break;
		case 11:
			{
				cout<<"Intrdoduceti n: ";
				cin>>n;
				cout<<"Intrdoduceti k: ";
				cin>>k;
				cout<<"Aranjamente de - n - luate cate - k - este: ";
				cout<<aranjamente(n,k);
				cout<<endl;
			}
			break;
		case 12:
			{
				cout<<"Intrdoduceti n: ";
				cin>>n;
				cout<<"Intrdoduceti k: ";
				cin>>k;
				cout<<"Combinari de - n - luate cate - k - este: ";
				cout<<combinari(n,k);
				cout<<endl;

			}
			break;
		case 13:
			{
			}
			break;
		default:cout<<"";
		}
	}
	while(k!=13);
		return 0;
}
void citire(int &a)
{
	cin>>a;
}
void afisare(int a)
{
	cout<<a;
}
void suma(int a,int n,int &s)
{
	int i;
	for(i=1;i<=n;i++)
	{
		cin>>a;
		s=s+a;
	}
}
void produs(int a,int n,int &p)
{
	int i;
	for(i=1;i<=n;i++)
	{
		cin>>a;
		p=p*a;
	}
}
void media(int a,int n)
{
	int i,s=0,k=0;
	float ma;
	for(i=1;i<=n;i++)
	{
		cin>>a;
		s=s+a;
		k=k+1;
	}
	ma=(float)s/k;
	cout<<"Media aritmetica a numerelor este: "<<ma<<endl;
}
void produsuma(int a,int n,int &s1,int &p1)
{
	int i;
	for(i=1;i<=n;i++)
	{
		cin>>a;
		if(a%5==0)
		{
		s1=s1+a;
		p1=p1*a;
		}
	}
}
void impare(int a,int n,int &s2,int &p2)
{
	int i;
	for(i=1;i<=n;i++)
	{
		cin>>a;
		if(a%2==0)
		s2=s2+a;
		else
		p2=p2*a;
	}
}
void mediap(int a,int n)
{
	int i,s=0,k=0;
	float ma;
	for(i=1;i<=n;i++)
	{
		cin>>a;
		if(int(sqrt(a))==sqrt(a))
		{
		s=s+a;
		k=k+1;
		}
	}
	ma=(float)s/k;
	cout<<"Media aritmetica a celor patrate este: "<<ma<<endl;
}
int maxim(int n)
{
	int a,i, max;
	cin>>a;
	max=a;
	for(i=2;i<=n;i++)
	{
	cin>>a;
	if(a>max)
	max=a;
	}
	cout<<"Numarul maxim este: ";
	return max;
}
int minim(int n)
{
	int a,i, min;
	cin>>a;
	min=a;
	for(i=2;i<=n;i++)
	{
	cin>>a;
	if(a<min)
	min=a;
	}
	cout<<"Numarul minim este: ";
	return min;
}
void sfnr(int a,int n)
{
	unsigned int i,s=0;
	for(i=1; i<=n; i++)
		s=s+i;
	cout<<"Suma primelor numere este: "<<s;
}
int factorial(int n)
{
	int i,p=1;
	for(i=1;i<=n;i++)
		p=p*i;
	return p;
}
int aranjamente(int n,int k)
{
	return factorial(n)/factorial(n-k);
}
int combinari(int n,int k)
{
	return factorial(n)/(factorial(k)*factorial(n-k));
}
