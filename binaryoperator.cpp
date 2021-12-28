#include<iostream>
using namespace std;
class complex
{
	private:
		int real,imag;
		public:
			void getvalue()
			{
				cout<<"enter the value of real:";
				cin>>real;
				cout<<"enter the value of imag:";
				cin>>imag;
			}
			complex operator+(complex obj)
			{
				complex temp;
				temp.real=real+obj.real;
				temp.imag=imag+obj.imag;
				return(temp);
			}
			void display()
			{
				cout<<real<<"+"<<"("<<imag<<")"<<"i"<<"\n";
			}
};
int main()
{
	complex c1,c2,c3;
	
	c1.getvalue();
	c2.getvalue();
	
	c3=c1+c2;
	
	cout<<"result is:\n";
	c3.display();
	
	return 0;	
}

