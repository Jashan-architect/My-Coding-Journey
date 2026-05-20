#include<iostream>
using namespace std;

int main(){


    system("chcp 65001 > nul");

    int choice;
    cout<<"which type of route you are using , state highway(2) or national highway(1)"<<endl;
    cin>>choice;
    float vechile_weight;
    cout<<" what is Weight of veichle in KGs ?"<<endl;
    cin>>vechile_weight;
    float distance_moved;
    cout<<"How much is your Journey distance ?"<<endl;
    cin>>distance_moved;
    float fuel_consumed;
    cout<<"Total fuel consumed ?"<<endl;
    cin>>fuel_consumed;
    float milege = distance_moved/fuel_consumed;

    if(choice == 1 && vechile_weight <= 5000 && milege >= 4){
   
        double toll_tax =0;
        toll_tax = (distance_moved/200)*500;
        
         cout<<" No eco tax 🟢,keep it up"<<endl;

         cout<<" No over Weight tax📦, Good Job!"<<endl;

        cout<<"Total Toll Tax is" <<endl;
        cout<<toll_tax<<endl;

    }else if( choice == 1 && vechile_weight > 5000 && milege >= 4){

        double total_toll_tax = 0;
        total_toll_tax = (distance_moved/200)*600;

       double base_toll_tax = (distance_moved/200)*500;
       cout<<"Base Toll Tax is -"<<endl;
       cout<<base_toll_tax<<endl;

       cout<<" over Weight tax📦🔴"<<endl;
       double over_weight_tax = (distance_moved/200)*100;
       cout<<" Over Weight tax is-"<<endl;
       cout<<over_weight_tax<<endl;

       cout<<" No eco tax 🟢,keep it up"<<endl;

        cout<<"Total Toll Tax is -" <<endl;
        cout<<total_toll_tax<<endl;

    }else if(choice == 1 && vechile_weight > 5000 && milege < 4){

       double toll_tax = (distance_moved/200)*1000;

       double base_toll_tax = (distance_moved/200)*500;
       cout<<"Base Toll Tax is -"<<endl;
       cout<<base_toll_tax<<endl;
       
       
       cout<<" over Weight tax📦🔴"<<endl;
       double over_weight_tax = (distance_moved/200)*100;
       cout<<" Over Weight tax is-"<<endl;
       cout<<over_weight_tax<<endl;

       cout<<"Eco Tax🟢 is -"<<endl;
       double eco_tax = (distance_moved/200)*400;
       cout<<eco_tax<<endl;

       cout<<"Total Toll Tax is -"<<endl;
       cout<<toll_tax<<endl;

    }else if(choice == 2 && vechile_weight <= 4000 && milege >= 5){
     
        double base_toll_tax = (distance_moved/100)*400;
        cout<<"Base Toll Tax is -"<<endl;
        cout<<base_toll_tax<<endl;

       cout<<" No eco tax 🟢,keep it up"<<endl;

         cout<<" No over Weight tax📦, Good Job!"<<endl;

         cout<<"Total Toll Tax is -"<<endl;
         cout<<base_toll_tax<<endl;

    }else if(choice == 2 && vechile_weight > 4000 && milege >= 5){

        double base_toll_tax = (distance_moved/100)*400;
        cout<<"Base Toll Tax is -"<<endl;
        cout<<base_toll_tax<<endl;
        
        cout<<" No eco tax 🟢,keep it up"<<endl;
        
         cout<<" over Weight tax📦🔴"<<endl;
        double over_weight_tax = ( distance_moved/100)*200;
        cout<<"Over Weight Tax📦 is -"<<endl;
        cout<<over_weight_tax<<endl;

        double Total_Toll_Tax = base_toll_tax + over_weight_tax;
        cout<<"Total Toll Tax is-"<<endl;
        cout<<Total_Toll_Tax<<endl;

    }else if(choice == 2 && vechile_weight > 4000 && milege < 5){

        double base_toll_tax = (distance_moved/100)*400;
        cout<<"Base Toll Tax is -"<<endl;
        cout<<base_toll_tax<<endl;

         cout<<" over Weight tax📦🔴"<<endl;
       double over_weight_tax = (distance_moved/100)*200;
       cout<<" Over Weight tax is-"<<endl;
       cout<<over_weight_tax<<endl;

       cout<<"Eco Tax🟢 is -"<<endl;
       double eco_tax = (distance_moved/100)*300;
       cout<<eco_tax<<endl;

       double Total_Toll_Tax = base_toll_tax + over_weight_tax + eco_tax;
       cout<<"Total Toll Tax is-"<<endl;
       cout<<Total_Toll_Tax<<endl;
    }
}