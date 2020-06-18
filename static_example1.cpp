#include<iostream>

struct Entity
{
	int x,y;
//	static int x,y;
	print()
	{
		
//	cout << "x "<<x <<"y "<< y <<endl	//here error came if you do like that, std is important here to define the cout and endl
	std::cout << "x: "<<x <<" y: "<< y <<std::endl;

	}

};


int main()
{
	Entity e;
	e.x = 10;
	e.y = 11;
	
	//Another way to define struct var is:
	Entity e1 = {20,21};   //if we define our vriables static inside struct then we canot change this 2nd time
	
	e.print();
	e1.print();
	return 0;
}
