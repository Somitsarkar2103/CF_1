#include<iostream>
using namespace std;

struct rectangle{
    int length,breadth;
};
void change_length(struct rectangle *p,int l){
    p->length=l;
}
void change_breadth(struct rectangle *p,int b){
p->breadth=b;
}
int main(){
    struct rectangle r={8,12};
    change_length(&r, 20);
    change_breadth(&r,25);

    cout<<"New length: "<<r.length<<endl;
    cout<<"New breadth: "<<r.breadth<<endl;
    return 0;
}