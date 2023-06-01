// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class shape{
    protected:
    int length, breadth, height;
    double area;
};
class square:public shape{
    public:
    square(int s){
        length=s;
        area=length*length;
    }
    void display(){
        cout<<area;
    }
};
class rectangle:public shape{
    public:
    rectangle(int l, int b){
        length=l;
        breadth=b;
        area=length*breadth;
    }
    void display(){
        cout<<area;
    }
};
class triangle:public shape{
    public:
    triangle(int b, int h){
        height=h;
        breadth=b;
        area=0.5*height*breadth;
    }
    void display(){
        cout<<area;
    }
};
class circle:public shape{
    public:
    circle(int r){
        length=r;
        area=3.14*length*length;
    }
    void display(){
        cout<<area;
    }
};
int main() {
    int a,b;
    cout<<"Please enter the side length of the square: ";
    cin>>a;
    square s(a);
    cout<<"Area of the square is: ";
    s.display();
    cout<<endl<<endl;
    cout<<"Please enter the length of the rectangle: ";
    cin>>a;
    cout<<"Please enter the breadth of the triangle: ";
    cin>>b;
    rectangle r(a,b);
    cout<<"The area of the rectangle is: ";
    r.display();
    cout<<endl<<endl;
    cout<<"Please enter the breadth of the triangle: ";
    cin>>a;
    cout<<"Please enter the height of the triangle: ";
    cin>>b;
    triangle t(a,b);
    cout<<"The area of the triangle is: ";
    t.display();
    cout<<endl<<endl;
    cout<<"Please enter the radius of the circle: ";
    cin>>a;
    circle c(a);
    cout<<"The area of the circle is: ";
    c.display();
    return 0;
}
