#include<iostream>
using namespace std;

int main(){

    int cibil_score;
    int monthly_income;
    int age;
    int credit_limit;
    cout<<"Enter your age , cibil score , monthly income"<<endl;
    cin>>age;
    cin>>cibil_score;
    cin>>monthly_income;

    if(cibil_score < 300 || cibil_score >900 || age<=0 || monthly_income<0){

        cout<<"ERROR!!, Invalid input"<<endl;

        return 0;
    }

    if(age < 21 || age > 60 ||cibil_score < 600){

        cout<<"Not eligible!!!"<<endl;

        return 0;

    } else if(cibil_score > 749 && monthly_income >=150000){

        cout<<"congurates ! , eligible for Elite card"<<endl;
        cout<<"your perks are given below -"<<endl;
        cout<<"credit limit"<<endl;
        credit_limit = 4*monthly_income;
        cout<<credit_limit<<endl;
        cout<<"10% extra points"<<endl;
        cout<<"these points can be used for travel tickets(airplane only)"<<endl;

    }else if(cibil_score<750 && cibil_score>699 && monthly_income<150000 && monthly_income>=50000){

         cout<<"congurates ! , eligible for Boss card"<<endl;
         cout<<"your perks are given below -"<<endl;
         cout<<"credit limit"<<endl;
          credit_limit = 3*monthly_income;
          cout<<credit_limit<<endl;
         cout<<"5% extra points"<<endl;
        cout<<"these points can be used for travel tickets(airplane only)"<<endl;

    }else if(cibil_score<700 && cibil_score>=600 && monthly_income<50000 && monthly_income>=25000){

        cout<<"congurates ! , eligible for Hustler card"<<endl;
         cout<<"your perks are given below -"<<endl;
         cout<<"credit limit"<<endl;
          credit_limit = 2*monthly_income;
          cout<<credit_limit<<endl;
         cout<<"2% extra points"<<endl;
        cout<<"these points can be used for travel tickets(airplane only)"<<endl;

    }else if(cibil_score<700 && monthly_income > 150000){

        cout<<"congurates ! , eligible for Hustler card"<<endl;
         cout<<"your perks are given below -"<<endl;
         cout<<"credit limit"<<endl;
          credit_limit = 2*monthly_income;
          cout<<credit_limit<<endl;
         cout<<"2% extra points"<<endl;
        cout<<"these points can be used for travel tickets(airplane only)"<<endl;

    }else if (cibil_score > 700 && monthly_income<50000){

        cout<<"congurates ! , eligible for Boss card"<<endl;
         cout<<"your perks are given below -"<<endl;
         cout<<"credit limit"<<endl;
          credit_limit = 3*monthly_income;
          cout<<credit_limit<<endl;
         cout<<"5% extra points"<<endl;
        cout<<"these points can be used for travel tickets(airplane only)"<<endl;

    }
    char has_loan;
    cout<<"do you have any loan(y/n)"<<endl;
    cin>>has_loan;

    if(credit_limit > 0 && (has_loan == 'Y' || has_loan == 'y')){

        float final_credit_limit = credit_limit*0.8;
         cout<<" final credit limit is"<<" "<<final_credit_limit<<endl;
         
    }else{

        int final_credit_limit = credit_limit;
         cout<<" final credit limit is"<<" "<<final_credit_limit<<endl;

    }
    
}
