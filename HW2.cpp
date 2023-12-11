#include <iostream>

using namespace std;

main()  {
	
	float x,y,i,a,b,c,d,g,f,t;
	cout<<"please enter x:";
	cin>>x;
	cout<<"please enter y:";
	cin>>y;
	cout<<"please enter i:";
	cin>>i;
	a=x-y;
	b=x+i;
	c=a*b;
	d=x+y+i;
	g=d*d;
	f=g+1;
	
	t=c/f;
	cout<<"result is:"<<t;

}