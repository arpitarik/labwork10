//include the library
#include<iostream>
using namespace std;

//declaring class point

//two dimensional point represents class point
class point
{
public:
//class constructor
Point();
//class constructor setting the coordinates x,y xvalue and yvalue:
Point(int xvalue, int yvalue);
//member function for moving a point by dx, dy:
void Move(int dx, int dy);
//member functions for getting values of x,y:
int Get_X() const;
int Get_Y() const;
//member functions for setting x,y to xvalue, yvalue respectively
void Set_X(int xvalue);
void Set_Y(int yvalue);
//printing
void print(int X, int Y);
//private data members x, y representing coordinates of the point:
private:
int X;
int Y;
};

// methods for class point

// class constructor setting X,Y to zero when no values are specified:
Point::Point()
{
X=0;
Y=0;
}
//class constructor sets X,Y To given values xvalue, yvalue:
Point::Point(int xvalue, int yvalue)
{
X= xvalue;
Y= yvalue;
}

//member function move:
void Point::Move(int dx, int dy)
{
X += dx;
Y +=dy;
}
//Get_X returns the value of the X coordinate
int Point::Get_X() const
{
return X;
}
//Get_Y returns the value of the Y coordinate
int Point::Get_Y() const
{
return Y;
}
//Set_Y sets the value of Y cordinate to yvalue
void Point::Set_Y(int yvalue)
{
Y= yvalue;
}

//adding definition of member function print:
void Point::print(int X, int Y)
{
cout<<"("<<X<<","<<Y<<")";
}

//declaration of class rectangle

class rectangle
{

//methods for class rectangle
Point pdr,pdl,pur,pul;
int side1()
{
int k;
k=pdl.Get_X()-pdr.Get_X();
return k;
}
int side2()
{
int k;
k=pdl.Get_X()-pul.Get_X();
return k;
}
public:
rectangle (Point pur; Point pdl)
{
int k;
k=pdl.Get_X();pul.Set_X(k);
k=pdl.Get_Y();pdr.Set_Y(k);
k=pur.Get_Y();pul.Set_Y(k);
k=pur.Get_X();pdr.Set_Y(k);
}
rectangle ()
{
pdr.Set_X(1);pdr.Set_Y(0);
pdl.Set_X(0);pdl.Set_Y(0);
pur.Set_X(0);pur.Set_Y(1);
pul.Set_X(1);pul.Set_Y(1);
}
void area()
{
cout<<side1()*side2();
}
};
//main() function for testing classes Pont and Rectangle
//testing class point and rectangle
int main()
{
//declaration of a point using default class constructor (x=y=0):
Point p1;
cout<< "The x value for p1 is"<<p1.Get_X()<<endl;
cout<< "the y value for p1 is"<<p1.Get_Y()<<endl;
//declaration of a point with crdinates X=2, Y=3:
Point p2(2,3);
cout<<"the x value for p2 is "<<p2.Get_X()<<endl;
cout<<"the y value for p2 is "<<p2.Get_Y(?)<<endl;
//move point p2 by (1,-1):
p2.Move(1, -1);
cout<< "after the move:"<<endl;
cout<< "the x value for p2 is "<<p2.Get_X()<<endl;
cout<< "the y value for p2 is "<<p2.Get_Y()<<endl;
//print
p1.print(p1.Get_X(),p1.Get_Y());
p2.print(p2.Get_X(),p2.Get_Y());
//testing of the class rectangle goes here:
rectangle r1,r2(p1,p2);
return 0;
}

