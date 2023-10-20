#include<iostream>
using namespace std;

class Point{
	private : int x,y;
	
	public :

	Point(){
		cout<<"X: Null"<<" Y: Null"<<endl;
	}
	Point(int x,int y){
		this->x=x;
		this->y=y;
	}
	void setX(int x){
		this->x=x;
	}
	int getX(){
	return x;	
	}
	void setY(int y){
		this->y=y;
	}
	int getY(){
	return y;	
	}
		void display(){
		cout<<"X: "<<this->getX()<<" Y: "<<this->getY()<<endl;
	}
	
	
	
};
int main(){
	cout<<"-------------------Using Defualt constructor------------------------"<<endl;
	Point p1;
	p1.getX();
	p1.getY();
	cout<<"-----------------------using Parameter constructor------------------ "<<endl;
	Point p(10,10);
	p.display();
	
	cout<<"-----------------using getter & setter-------------------"<<endl;
	
	
	p1.setX(30);
	p1.setY(50);
	cout<<"x:  "<<p1.getX()<<endl;
	cout<<"y:  "<<p1.getY()<<endl;
	return 0;
}
