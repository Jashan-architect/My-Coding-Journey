#include<iostream>
using namespace std;

int main(){

    cout<<"konsi type ki car b aapke paas"<<endl;

     string choice;
     cin>>choice;
     int tank_filled;
     int distance;
     string weather;

     if(choice == "EV" || choice == "ev"){
        
        int battery_percent; 
        cout<<" kitni percent battery h? "<<endl;
        cin>>battery_percent;

        if(battery_percent <= 20){

            cout<<" finding nearest charger"<<endl;
        }else if(battery_percent >= 80){
        

           cout<<" less gooo!!!"<<endl;
        }else{

            cout<<" check the range shown!"<<endl;
        }
         
        

     } else if( choice=="petrol" || choice ==  "desiel"){

       cout<<" kitna tank filled h"<<endl;
        cin>>tank_filled;

        if( tank_filled > 80){
            cout<<"less go"<<endl;

        }else if(tank_filled < 20){
            cout<<"searching nearest fuelstation"<<endl;
        }else {
            cout<<"check the range"<<endl;
        }
        
     }else{
        cout<<" sorry we can't help you"<<endl;
        return 0;
     } 
     cout<<" ktni durr jana h?"<<endl;
     cin>>distance;
     cout<<"weather kesa h ?"<<endl;
     cin>>weather;
     if( distance > 100){
        cout<<"prefer highway or express way"<<endl;
     } else if(weather == "foggy"|| weather == "rainy"){
         cout<<"prefer highway or express way"<<endl;
     }
     else if(weather == "sunny"){
        cout<<" finding fastest route"<<endl;
     }else{
        cout<<"sorry,we can't help"<<endl;
     }
}