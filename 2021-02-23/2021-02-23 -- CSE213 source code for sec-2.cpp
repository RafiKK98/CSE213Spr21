/*
#include<iostream>
using namespace std;
//int x=10,y=20, x; //error
int x=10,y=20;
void doSome(){
    cout<<"global-x from doSome = "<<x<<", global-y = "<<y<<endl;
}
int main(){
    int x=30;
    cout<<"local-x = "<<x<<endl;
    cout<<"global-x from main = "<<x<<", global-y = "<<y<<endl;

    for(int i=1, x=100;i<=3;i++){
        //int x=100+i;
        x += i;
        cout<<"x inside loop = "<<x<<endl;
    }
    cout<<"x = "<<x<<endl;
    //cout<<"i="<<i<<endl;  //error
    doSome();

    {
        int y=50;
        cout<<"y inside bare block = "<<y<<endl;
    }
    cout<<"y inside main = "<<y<<endl;
    return 0;

}
*/
//-------------------------------------------------------------------
/*
#include<iostream>
using namespace std;
struct ComplexNo{
//class ComplexNo{
    //private:
    int real, img;
    public:
    void setComplexNo(){
        cout<<"Enter real value: "; cin>>real;
        cout<<"Enter img value: "; cin>>img;
    }
    void showComplexNo(){
        cout<<real<<(img>=0?"+":"")<<img<<"i"<<endl;
        doSomeWithComplexNo();
    }

    ComplexNo add(ComplexNo c){
        ComplexNo temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp; //neither c1(client) or c2 (parameter c) will be returned.
    }
    void doSomeWithComplexNo(){
        cout<<"done something with complex no!"<<endl;
    }
};

ComplexNo addComplex(ComplexNo cn1, ComplexNo cn2){
    ComplexNo temp;
    temp.real = cn1.real + cn2.real;
    temp.img = cn1.img + cn2.img;
    return temp; //neither c1(client) or c2 (parameter c) will be returned.
}


int main(){
    ComplexNo c1, c2, c3;
    cout<<"Enter 1st complex no: "<<endl; c1.setComplexNo();
    cout<<"Enter 2st complex no: "<<endl; c2.setComplexNo();
    cout<<"The complex numbers are: "<<endl;
    c1.showComplexNo();
    //cout<<c1.real;
    c2.showComplexNo();
    c3 = c1.add(c2);    //c3 = c1 + c2;
    //c3 = addComplex(c1,c2);
    cout<<"The added complex number is: ";
    c3.showComplexNo();
    c1.doSomeWithComplexNo();
    return 0;
}
*/
//----------------------------------------------------------------
/*
#include<iostream>
#include<cstdlib>
using namespace std;
int k=0;
int& doSome(int p){
	//int q = p + rand()%10;
	k = p + rand()%10;
	//cout<<"address of q="<<&q<<", q="<<q<<endl;
	cout<<"from doSome: address of k="<<&k<<", k="<<k<<endl;
	//return q;
	return k;
}
int& doAnother(int p, int& r){
    r += p;
	cout<<"from doAnother: address of r="<<&r<<", r="<<r<<endl;
	return r;
}
void doBig(int& para){
    para *= 10;
}

int main(){
    int y;  //declaration
    y = 30; //assignment

    //declaration +  assignment : initialization

    int x=10;   //initialized
    int& xx = x;

    cout<<"address of x = "<<&x<<", x="<<x<<endl;
    cout<<"address of xx = "<<&xx<<", xx="<<xx<<endl;

    int & kk = doSome(100);
    cout<<"address of kk = "<<&kk<<", kk="<<kk<<endl;
    //cout<<"x after calling doSome = "<<x<<endl;
    return 0;
}
*/

/*
int main(){
    int rr = 12;
    cout<<"before calling doAnother: address of rr="<<&rr<<", rr="<<rr<<endl;
	//int& z = doAnother(200, rr);
	doBig(doAnother(200, rr));
	cout<<"after calling doAnother: address of rr="<<&rr<<", rr="<<rr<<endl;
	return 0;
}
*/
/*
int main(){
    int rr = 12;
    cout<<"from main, before calling doSome: address of k="<<&k<<", k="<<k<<endl;
	//int& z = doAnother(200, rr);
	doBig(doAnother(200, rr));
	cout<<"address of z="<<&z<<", z="<<z<<endl;
	cout<<"from main, after calling doSome: address of k="<<&k<<", k="<<k<<endl;
	return 0;
}
*/
//---------------------------------------------------------------------------------------------
/*
#include<iostream>
using namespace std;
class ComplexNo{
    int real, img;
    public:
    void setComplexNo(){
        cout<<"Enter real value: "; cin>>real;
        cout<<"Enter img value: "; cin>>img;
    }
    void showComplexNo(){
        cout<<real<<(img>=0?"+":"")<<img<<"i"<<endl;
        doSomeWithComplexNo();
    }

    ComplexNo add(ComplexNo c){
        ComplexNo temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp; //neither c1(client) or c2 (parameter c) will be returned.
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
};
//ass Student{...};
//class Matrix{...};

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
    ComplexNo c1, c2, c3, c4, c5;
    //Matrix m1, m2, m3;
    //m3 = m1 + m2;
    cout<<"Enter 1st complex no: "<<endl; c1.setComplexNo();
    cout<<"Enter 2st complex no: "<<endl; c2.setComplexNo();
    cout<<"The complex numbers are: "<<endl;
    c1.showComplexNo();
    //cout<<c1.real;
    c2.showComplexNo();
    c3 = c1.add(c2);
    cout<<"The added complex number c3 is: ";
    c3.showComplexNo();

    c4 = c1.add(10); //parameter will be added with real, img will be unchanged
    cout<<"The added complex number c4 is: ";
    c4.showComplexNo();

    //c5 = c3 + c4;

    cout<<doSome(100);
    return 0;
}
*/
//------------------------------------------------------------------
#include<iostream>
using namespace std;

class Person{
	//private fields
	public:
	//void buyFoodFromMarket(){
	Person& buyFoodFromMarket(){
		cout<<"Food is bought."<<endl;
		return *this;    //we nned to return client
	}
	//void arrangeTheLivingRoom(){
	Person& arrangeTheLivingRoom(){
		cout<<"Living room is arranged."<<endl;
		return *this;
	}
	//void serveFoodToGuests(){
	Person& serveFoodToGuests(){
		cout<<"Food is served."<<endl;
		return *this;
	}
};

int main(){
	Person saymon, farid;

	//saymon.buyFoodFromMarket();
	//saymon.arrangeTheLivingRoom();
	//saymon.serveFoodToGuests();

	saymon.buyFoodFromMarket().arrangeTheLivingRoom().serveFoodToGuests();
	return 0;
}











