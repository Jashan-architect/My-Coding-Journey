#include<iostream>
using namespace std;

int main(){

     system("chcp 65001 > nul");

    int choice;
    int Intellect =0 , Stealth =0 , Tools = 0 , Alerts =0;
    
    cout<<" ====== WELCOME TO CYBER HEIST ======"<<endl;
    cout<<"You are having 3 choices "<<endl;

    cout<<"Choice 1. CODE-BREAKER"<<endl;
    cout<<"Stats - \nIntellect = 85 \nStealth = 50 \nTools = 40 "<<endl;

    cout<<"Choice 2. GHOST-WALKER"<<endl;
     cout<<"Stats - \nIntellect = 50 \nStealth = 90 \nTools = 40 "<<endl;

     cout<<"Choice 3. CYBER-KNIGHT"<<endl;
     cout<<"Stats - \nIntellect = 70 \nStealth = 30 \nTools = 90 "<<endl;
      
     cout<<"Enter your Choice 1 or 2 or 3"<<endl;
     cin>>choice;

    if(choice == 1){

        cout<<" CODE-BREAKER activated \nThe digital world is your Playground"<<endl;
        cout<<" Your Stats - \nIntellect = 85 \nStealth = 50 \nTools = 40 "<<endl;
        cout<<"Best of  luck!"<<endl;
        Intellect = 85;
        Stealth = 50;
        Tools = 40;
        
    }else if(choice == 2){

        cout<<" GHOST-WALKER activated \nStay in the shadows"<<endl;
        cout<<"Your Stats - \nIntellect = 50 \nStealth = 90 \nTools = 40 "<<endl;
        cout<<"Best of  luck!"<<endl;
        Intellect = 50;
        Stealth = 90;
        Tools = 40;

    }else if(choice == 3){

        cout<<"CYBER-KNIGHT activated \nTime to smash some firewalls"<<endl;
        cout<<"Your Stats - \nIntellect = 40 \nStealth = 30 \nTools = 90 "<<endl;
        cout<<"Best of  luck!"<<endl;
        Intellect = 40;
        Stealth = 70;
        Tools = 90;

    }else{

        cout<<"Invalid Input"<<endl;
        return 0;
    }  

    cout<<"🚪LEVEL 1: THE MAINFRAME GATEWAY🚪"<<endl;
    int option;

    cout<<"Tum Central bank ke Main Server ke bhar khade Ho. \nSamne ek high-Tech Biometric Laser Firewall h"<<endl;
    cout<<"You have 2 options \nOption1 Fire custom Test \nOption2 Physically cut the security node relay wires using your Gears"<<endl;
    cout<<"enter Your option"<<endl;
    cin>>option;

    if(option  == 1){

        if(Intellect>=70){

            cout<<"Gate opened \nEntering Level 2"<<endl;
            cout<<"Level 2 Start"<<endl;
            
        }else{

            cout<<"Fail!! \nJailed"<<endl;
            return 0;
        }

    }else if(option == 2){

        if(Stealth>=70){

            cout<<"Gate opened \nEntering Level 2"<<endl;
            cout<<"Level 2 Start"<<endl;

        }else{

             cout<<"Fail!! \n⛓️‍💥Jailed⛓️‍💥"<<endl;
            return 0;
        }

    }else{

        cout<<"Invalid Input"<<endl;
        return 0;

    }

    int option2;
    cout<<"==🔐LEVEL 2 : THE TITANIUM VAULT🔐=="<<endl;
    cout<<"Lobby clear karke tum Bank ke main central Safe ke samne khade ho \nYaha ek solid Titanium Vault h jisme encrypted Keys h \n isko bypass karne ke 2 options h"<<endl;
    cout<<"Option 1 \nNode circut ko high voltage rig se overload karo \nOption 2 \nSafe ke rotation security ko Decrypt karo"<<endl;

    cout<<"Enter your option 1 or 2"<<endl;
    cin>>option2;

    if(option2 == 1){

        if(Tools >= 80 ){

            cout<<"🎆BOOM!!🎆 \nVault Opened🛅 \n===Heist Sucessfull==="<<endl;

        }else{

            cout<<"Sceurity sparks se blast ho gya 💥"<<endl;
            cout<<"🩻Dead🩻"<<endl;
            cout<<"THE END"<<endl;
            return 0;

        }

    }else if(option2 == 2){

     if(Intellect >= 80 ){

        cout<<"🎆Security code cracked🎆 \nVault Opened🛅 \n===Heist Sucessfull==="<<endl;

     }else{

        cout<<"🚨Alarm ringed🚨"<<endl;
        cout<<"🩻Dead🩻"<<endl;
        cout<<"THE END"<<endl;
        return 0;

     }

    }else{

        cout<<"Invalid Input"<<endl;
        return 0;

    }

}
