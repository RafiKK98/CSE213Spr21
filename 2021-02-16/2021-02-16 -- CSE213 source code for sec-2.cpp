
#include<iostream>
using namespace std;

struct ComplexNo{
    int real, img;
    void setComplexNo(){
        cout<<"Enter real value: "; cin>>real;
        cout<<"Enter img value: "; cin>>img;
    }
    void showComplexNo(){
        cout<<real<<(img>=0?"+":"")<<img<<"i"<<endl;
    }

    ComplexNo add(ComplexNo c){
        ComplexNo temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp; //neither c1(client) or c2 (parameter c) will be returned.
    }
};

int main(){
    ComplexNo c1, c2, c3;
    cout<<"Enter 1st complex no: "<<endl; c1.setComplexNo();
    cout<<"Enter 2st complex no: "<<endl; c2.setComplexNo();
    cout<<"The complex numbers are: "<<endl;
    c1.showComplexNo();
    c2.showComplexNo();

    c3 = c1.add(c2);    //c3 = c1 + c2;
    cout<<"The added complex number is: ";
    c3.showComplexNo();
    return 0;

}






