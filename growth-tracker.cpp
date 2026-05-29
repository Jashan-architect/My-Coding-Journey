#include<iostream>
using namespace std;

double BMI(double weight , double height){

    double BMI_value =(weight/((height)*(height)))*703.07;

    return BMI_value;
}

int main(){

    double weight , height;
    
    cout<<"enter the number of person"<<endl;
    int n;
    int i = 1;
    cin>>n;

    if(n>0){

        cout<<" enter yor weight in KGs and height in inches"<<endl;
    
    while(i<=n){


     cin>>weight>>height;
     double my_BMI = BMI(weight , height);

        if(my_BMI < 18.5){

         cout<<"you are under weight \n eat healthy"<<endl;
         

        }else if(my_BMI >= 18.5 && my_BMI <= 24.9){

            cout<<"you are fit \n keep it up!"<<endl;
            

        }else if(my_BMI > 24.9 && my_BMI <= 25){

          cout<<"you are little healthy \n improve your diet"<<endl;
          

        }else if(my_BMI > 25){

            cout<<"you are too healthy!! \nreduce weight"<<endl;
            
        }

         i++;

    }
   
    }else{

        cout<<"invalid input!!"<<endl;
        
    }
}
    
    