#include<iostream>
#include<cmath>
using namespace std;

int main(){

    float a;
    float b;
    float c;
    cout<<"enter the all three sides of triangle"<<endl;
    cin>>a>>b>>c;
   if((a+b>c)&&(b+c>a)&&(a+c>b)){
    
   float s = (a+b+c)/2;
   float area = sqrt(s*(s-a)*(s-b)*(s-c));

   cout<<"area of triangle is"<<" "<<area<<endl;
}else{

    cout<<"invalid triangle"<<endl;
}

}