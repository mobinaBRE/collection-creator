#include <iostream>
using namespace std;
class integerest {
	private:
		int x[101];
	public:
		integerest() { }
		integerest ejtema(integerest a,integerest b,integerest c) {
			for(int i=0; i<101; i++) {
				if(a.x[i]==1 || b.x[i]==1)
					c.x[i]=1;
			}
			return c;
		}
		integerest eshterak(integerest a,integerest b,integerest c) {
			for(int i=0; i<101; i++) {
				if(a.x[i]==1 && b.x[i]==1)
					c.x[i]=1;
			}
			return c;
		}
		integerest add(integerest a,int num) {
			if(a.x[num]==0)
				a.x[num]=1;
			else
				cout<<"this number is already exists.\n";
			return a;
		}
		integerest deletenum(integerest a,int num) {
			if(a.x[num]==1)
				a.x[num]=0;
			else
				cout<<"not found.\n";
			return a;
		}
		void print(integerest a) {
			for(int i=0; i<101; i++) {
				if(a.x[i]==1)
					cout<<i<<"\n";
			}
		}
		bool check(integerest a,integerest b) {
			for(int i=0; i<101; i++) {
				if(a.x[i]!=b.x[i])
					return false;
			}
			return true;
		}
		void ciin(int n) {
			int d;
			for(int i=0; i<n; i++) {
				cin>>d;
				x[d]=1;
			}
		}
		void zero() {
			for(int i=0; i<101; i++) {
				x[i]=0;
			}
		}
};
int main() {
	int n;
	integerest a,b,ej,esh;
	a.zero();
	b.zero();
	esh.zero();
	ej.zero();
	cout<<"siza a:";
	cin>>n;
	cout<<" a : \n";
	a.ciin(n);
	cout<<"siza b:";
	cin>>n;
	cout<<" b : \n";
	b.ciin(n);
menu:
	cout<<"which one ? \n"<<"1)eshterak  2)ejtama  3)add  4)delete  5)check \n";
	cin>>n;
	int g,k;
	switch(n) {
		case 1:
			esh=a.eshterak(a,b,esh);
			a.print(esh);
			break;
		case 2:
			ej=a.ejtema(a,b,ej);
			a.print(ej);
			break;
		case 3:
			cout<<"add in : 1)a  2)b \n";
			cin>>g;
			cout<<"enter your number :";
			cin>>k;
			if(g==1) {
				a=a.add(a,k);
				a.print(a);
			} else {
				b=b.add(b,k);
				b.print(a);
			}
			break;
		case 4:
			cout<<"remove from : 1)a  2)b \n";
			cin>>g;
			cout<<"enter your number :";
			cin>>k;
			if(g==1) {
				a=a.deletenum(a,k);
				a.print(a);
			} else {
				b=b.deletenum(b,k);
				b.print(a);
			}
			break;
		case 5:
			if(a.check(a,b)==true)
				cout<<"barabar and \n";
			else
				cout<<"barabar nistand \n";
			break;
	}
	cout<<"1) go to menu  2) exit  : ";
	cin>>n;
	if(n==1)
		goto menu;
	else
		return 0;
}
