#include<iostream>
using namespace std;

int main(){

    system("chcp 65001 > nul");

    cout<<"====================== \n====================== \nWELCOME TO RETRO ARCADE \n====================== \n======================"<<endl;
    cout<<"assigend tokens ⏺️ = 16"<<endl;
    int tokens = 15;

    cout<<"Game include 4 questions"<<endl;
    cout<<"every wrong answer will deduct 4 tokens"<<endl;

    cout<<" Starting game 👾"<<endl;
    

    cout<<"Question 1. \nC++ me new line me print karne ke liye kis keyword ka use hota h ?"<<endl;
    cout<<"options - \nA> cin \nB>endl"<<endl;

    char choice;
    cin>>choice;

    if (choice =='B') { 

     cout<<"tokens gained"<<endl;
     cout<<"Total tokens "<<endl;
     tokens = tokens +2;
     cout<<tokens<<endl;

    }else{

        tokens = tokens - 4;
        cout<<"tokens lost!🚨"<<endl;
        cout<<"remaing tokens"<<endl;
        cout<<tokens<<endl;
    }
    
    char option;
    cout<<"Question 2. \nint x = 5 hai toh x%2 ka kya ans aayega?"<<endl;
    cout<<"options - \nA> 1 \nB> 0"<<endl;
    cin>>option;

    if(option == 'A'){
        
        cout<<"tokens gained"<<endl;
        cout<<"Total tokens "<<endl;
        tokens = tokens +2;
        cout<<tokens<<endl;

    }else{

        tokens = tokens - 4;
        cout<<"tokens lost!🚨"<<endl;
        cout<<"remaing tokens"<<endl;
        cout<<tokens<<endl;

    }

    cout<<"Question 3. \nswitch(case) me agar break na lagye to kya hoga ?"<<endl;
    cout<<"options - \nA> terminal blank rahegi \nB> Matching case ke niche ka sab print ho jayega"<<endl;
    char option2;
    cin>>option2;

    if(option2 = 'B'){

        
        cout<<"tokens gained"<<endl;
        cout<<"Total tokens "<<endl;
        tokens = tokens +2;
        cout<<tokens<<endl;
       
    }else{

        
         tokens = tokens - 4;
        cout<<"tokens lost!🚨"<<endl;
        cout<<"remaing tokens"<<endl;
        cout<<tokens<<endl;


    }

    cout<<"Question 4.\nC++ me if(5) likhne pe kya hhhoga"<<endl;
    cout<<"options - \nA> always true condition ban jayegi \nB> program crash ho jayega"<<endl;

    char option3;
    cin>>option3;

    if(option3 == 'A'){

        cout<<"tokens gained"<<endl;
        cout<<"Total tokens "<<endl;
        tokens = tokens +2;
        cout<<tokens<<endl;

    }else{

         tokens = tokens - 4;
        cout<<"tokens lost!🚨"<<endl;
        cout<<"remaing tokens"<<endl;
        cout<<tokens<<endl;

    }
      cout<<"===Price distribution===="<<endl;

      if(tokens >= 20 && tokens <= 24){

        cout<<"💻LAPTOP WINNER💻"<<endl;

      }else if(tokens < 20 && tokens >= 15){

        cout<<"📱PHONE WINNER📱"<<endl;
    
     }else{

        cout<<"😔BETTER LUCK NEXT TIME😔"<<endl;

     }


}