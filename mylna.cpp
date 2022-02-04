#include <iostream>
using namespace std;
#include <cmath>

class MyLnA{
		public:
				MyLnA(double a=0){
				    mA=a;
				}
				MyLnA(double x, double a=0){
				    mA=a;
				    mX=x;
				}
				MyLnA(const MyLnA &obj){
				    mX=obj.mX;
				}
				~MyLnA(){
				    mX=0;
				    mA=0;
				}
				double value(){
				    double sum=0;
				    double lnX=log(mA);
				    for(int i=0; i<10; i++)
				        {
				            sum=sum+((pow(-1,i))/(pow(mA,i+1))*pow(mX-mA,i+1)/(i+1));
				        };
				    lnX=lnX+sum;
				    cout<<lnX<<endl;
				    return lnX;
				}
				void setX(double x){
				    mX=x;
				}
				double getX(){
				    return mX;
				}
				void setA(double a){
				    mA=a;
				}
				double getA(){
				    return mA;
				}
			private:
				double mX;
				double mA;

};
int main(){
	cout<<"To działa"<<endl;
	double x=2;
	double a=5;
	MyLnA myLnA(x,a);
	myLnA.value();
}
