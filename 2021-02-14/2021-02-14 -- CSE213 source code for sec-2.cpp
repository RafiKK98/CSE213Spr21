/*
#include<iostream>
using namespace std;

void doSome(int);
//doSome(); //error

int main(){
	//
	doSome(10);
	//call almost always ends with semicolon.
	//doSome() is called, main() is the caller
	return 0;
}

void doSome(int q){
    int x=10, y=20, z;
    z=x+y;
	//
	//
}
*/
//----------------------------------------------

#include<iostream>
using namespace std;

int add(int,int);

int main(){
	int x, y, z;
    cout<<"Enter 1st no: "; cin>>x;
    cout<<"Enter 2nd no: "; cin>>y;
    z = add(x,y);
    cout<<add(x,y);
    add(x,y);
	return 0;
}

int add(int p, int q){
    return p+q;
}

//---------------------------------
/*
#include<iostream>
using namespace std;


int largest(int   p , int q , int r ){
    if(p>q && p>r) return p;
    else if(q>p && q>r) return q;
    else return r;
}
void swap(int&  p, int& q){
    int temp = p; p=q; q=temp;
}

int main(){
	int arr[]={11,22,33,44,55};
	int x=10, y=20, z=30;
    //cout<<"avgOfArray is: "<<getAvgOfArray(arr,5);
    cout<<"largest of x,y,z is: "<<largest(x,y,z);
    cout<<"Before swapping: x="<<x<<", y="<<y<<endl;    //x=10, y=20
    swap(x,y);
    cout<<"After swapping: x="<<x<<", y="<<y<<endl;     //x=20, y=10
	return 0;
}
*/










