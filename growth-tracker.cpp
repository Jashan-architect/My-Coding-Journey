#include<iostream>
using namespace std;

double BMI(double weight , double height){

    double BMI_value =(weight/((height)*(height)))*703.07;

    return BMI_value;
}

int main(){

    double weight , height;
    
    cout<<"👥 Enter the number of people to track: "<<endl;
    int n;
    int i = 1;
    cin>>n;

    if(n>0){

        cout<<"⚖️ Enter your weight in KGs and height in inches: "<<endl;
    
    while(i<=n){


     cin>>weight>>height;
     double my_BMI = BMI(weight , height);

        if(my_BMI < 18.5){

         cout<<"⚠️ You are under weight \n 🍎 Eat healthy!"<<endl;
         

        }else if(my_BMI >= 18.5 && my_BMI <= 24.9){

            cout<<"✅ You are fit \n 💪 Keep it up!"<<endl;
            

        }else if(my_BMI > 24.9 && my_BMI <= 25){

          cout<<"⚠️ You are a little overweight \n 🥗 Improve your diet."<<endl;
          

        }else if(my_BMI > 25){

            cout<<"🛑 You are in the obese category \n 🏃 Reduce weight for better health!"<<endl;
            
        }

         i++;

    }
   
    }else{

        cout<<"❌ Invalid input! Please try again."<<endl;
        
    }
}
    
    
