
#include<iostream>
using namespace std;
class ComplexNo{
    int real, img;
    public:
    void setReal(int val){real=val;}
    void setImg(int val){img=val;}
    void setComplexNo(){
        cout<<"Enter real value: "; cin>>real;
        cout<<"Enter img value: "; cin>>img;
    }
    void showComplexNo(){
        cout<<real<<(img>=0?"+":"")<<img<<"i"<<endl;
        //doSomeWithComplexNo();
    }

    ComplexNo add(ComplexNo c){
        ComplexNo temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp; //neither c1(client) or c2 (parameter c) will be returned.
    }

    ComplexNo operator+(ComplexNo c){
        ComplexNo temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp; //neither c1(client) or c2 (parameter c) will be returned.
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

    void doSomeWithComplexNo(){
        cout<<"done something with complex no!"<<endl;
    }

    //RT operator+(...){...}
    friend istream& operator>>(istream&, ComplexNo&);
};
//ass Student{...};
//class Matrix{...};

/*
//void operator>>(istream& myIn, ComplexNo& c){
istream& operator>>(istream& myIn, ComplexNo& c){
    int x;
    cout<<"Enter real value: "; myIn>>x; c.setReal(x);//myIn>>c.real;
    cout<<"Enter img value: "; myIn>>x; c.setImg(x);
    return myIn;
}
*/

istream& operator>>(istream& myIn, ComplexNo& c){
    int x;
    cout<<"Enter real value: "; myIn>>c.real;
    cout<<"Enter img value: "; myIn>>c.img;
    return myIn;
}


void doSome(){
    cout<<"In doSome()"<<endl;
}

int doSome(int x){
    cout<<"In doSome() version-2"<<endl;
    return 10;
}

int main(){
    //Student babu, tarif;
    //babu + tarif;
    ComplexNo c1, c2, c3, c4, c5, c6;
    //Matrix m1, m2, m3;
    //m3 = m1 + m2;
    //cout<<"Enter 1st complex no: "<<endl;
    //cin>>c1;
    //cin.operator>>(c1); can't do it, not allowed to update library

    //c1>>cin;
    //c1.operator>>(cin);

    //c1.setComplexNo();
    //cout<<"Enter 2st complex no: "<<endl; c2.setComplexNo();
    //cout<<"Enter two complex nos: "<<endl; cin>>c1; cin>>c2;
    cout<<"Enter two complex nos: "<<endl; cin>>c1>>c2;
    cout<<"The complex numbers are: "<<endl;
    c1.showComplexNo();
    //cout<<c1.real;
    c2.showComplexNo();
    //c3 = c1.add(c2);
    c3 = c1 + c2;
    cout<<"The added complex number c3 is: ";
    c3.showComplexNo();

    c4 = c1.add(10); //parameter will be added with real, img will be unchanged
    //c4 = c1 + 10;
    cout<<"The added complex number c4 is: ";
    c4.showComplexNo();

    //c5 = c3 + c4;

    //cout<<doSome(100);
    //c6 = c1 + c2 + c3 + c4 + c5;
    return 0;
}

//------------------------------------------------------------------
/*
#include<iostream>
using namespace std;

class Person{
	//private fields
	int x;
	public:
	//void buyFoodFromMarket(){
    //Person buyFoodFromMarket(){
	Person& buyFoodFromMarket(){
        x=1;
		cout<<"Food is bought."<<endl;
		return *this;    //we nned to return client
	}
	//void arrangeTheLivingRoom(){
    //Person arrangeTheLivingRoom(){
	Person& arrangeTheLivingRoom(){
        x++;
		cout<<"Living room is arranged."<<endl;
		return *this;
	}
	//void serveFoodToGuests(){
    //Person serveFoodToGuests(){
	Person& serveFoodToGuests(){
        x++;
		cout<<"Food is served."<<endl;
		return *this;
	}
	int getX(){return x;}
};

int main(){
	Person anik, farid;

	//anik.buyFoodFromMarket();
	//anik.arrangeTheLivingRoom();
	//anik.serveFoodToGuests();

	anik.buyFoodFromMarket().arrangeTheLivingRoom().serveFoodToGuests();
	cout<<"field x of client anik = "<<anik.getX()<<endl;
	return 0;
}

*/









