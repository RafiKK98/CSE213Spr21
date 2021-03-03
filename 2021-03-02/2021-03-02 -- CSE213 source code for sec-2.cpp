/*
#include<iostream>
using namespace std;
class ComplexNo{
    int real, img;
    public:

    //void ComplexNo(){
    ComplexNo(){
        real=img=0;
    }
    ComplexNo(int val){
        real=img=val;
    }

    ComplexNo(int val1, int val2){
        real=val1; img=val2;
    }

    int getReal(){return real;}
    int getImg(){return img;}
    void setReal(int val){real = val;}
    void setImg(int val){img = val;}
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
        return temp;
    }
    ComplexNo operator+(ComplexNo c){
        ComplexNo temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
    ComplexNo operator+(int val){
        ComplexNo temp;
        temp.real = real + val;
        temp.img = img;
        return temp;
    }
    ComplexNo add(int val){
        ComplexNo temp;
        temp.real = real + val;
        temp.img = img;
        return temp;
    }


	//pre increment
	ComplexNo& operator++(){
		cout<<"Inside Pre-increment version"<<endl;
		++real;	++img;
		return *this;
	}
	//--------------
	//post increment
	ComplexNo operator++(int x){
		cout<<"Inside Post-increment version"<<endl;
		ComplexNo temp; temp.real = real; temp.img = img;
		++real;
		++img;
		return temp;
	}
    friend ComplexNo operator+(int, ComplexNo);
};

istream& operator>>(istream& myIn, ComplexNo& c){
    int x;
	cout<<"Enter real value: "; myIn>>x; c.setReal(x);
    cout<<"Enter img value: "; myIn>>x; c.setImg(x);
	return myIn;
}

ostream& operator<<(ostream& myOut, ComplexNo c){
    myOut<<c.getReal()<<(c.getImg()>=0?"+":"")<<c.getImg()<<"i"<<endl;
	return myOut;
}
ComplexNo operator+(int val, ComplexNo c){
    ComplexNo temp;
    temp.real = c.real + val;
    temp.img = c.img;
    return temp;
}

int main(){
    int x = 1234, y, z;
    y=x<<2;
    z=x>>2;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    cout<<"z="<<z<<endl;

    ComplexNo c1, c2(10), c3(1,2), c4, c5, c6;
    //ComplexNo c1, c2, c3, c4, c5, c6;
    cout<<"Enter two complex nos: "<<endl;
    //cin>>c1; cin>>c2;
    cout<<c1<<c2<<c3<<c4<<c5<<c6<<endl;
    cin>>c1>>c2;
    cout<<"The complex numbers are: "<<endl;
    cout<<c1<<c2<<endl;
    cout<<"c1++="<<c1++;
    cout<<"after executing c1++, c1 = "<<c1<<endl;

    cout<<"++c2="<<++c2;
    cout<<"after executing ++c2, c2 = "<<c2<<endl;

    c3 = c1 + c2;
    cout<<"The added complex number c3 is: "<<c3<<endl;

    c4 = c1 + 10;
    cout<<"The added complex number c4 is: "<<c4<<endl;
    x=1, y=2;
    c6 = y + c1 + x + c2 + c3 + 2;
    cout<<"After c6 = y + c1 + x + c2 + c3 + 2, c6="<<c6<<endl;

    return 0;
}
*/
//---------------------------------------

#include<iostream>
using namespace std;

int main(){
    int x;
    string str;
    float f;


    //cin>>str;
    cin>>x;
    cin.ignore();
    //cin>>address;
    //ignore is not needed
    getline(cin,str);
    //cin>>x;
    cin>>f;

    cout<<"x="<<x<<", str="<<str<<", f="<<f<<endl;
    return 0;
}








