#include<iostream>
using namespace std;
class rectangle{
    private:
    int length,breadth;
    public:
        rectangle(int l, int b){
            length=l;
            breadth=b;
        }
        int area(){
            return length*breadth;
        }
        int perimeter(){
            int p;
            p=2*(length+breadth);
            return p;
        }
};

int main(){
        int length=0,breadth=0;
        cout<<"Enter the length: ";
        cin>>length;
        cout<<"Enter the breadth: ";
        cin>>breadth;

        rectangle r(length,breadth);

        cout<<"Area: "<<r.area()<<endl;
        cout<<"Perimeter: "<<r.perimeter()<<endl;
        
        return 0;
}