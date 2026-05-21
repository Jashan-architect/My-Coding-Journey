#include<iostream>
using namespace std;

int main(){

    string choice;
    cout<<"kya karna chate h basic_calculation , area ,perimeter"<<endl;
    cin>>choice;

    
    if(choice == "basic_calculation"){

        cout<<"kya karna chate h aap addition,subtraction,division,multipication or area"<<endl;
        cin>>choice;

        if(choice == "addition"){
            float a;
            float b;
            float addition;
            cout<<"enter the numbers"<<endl;
            cin>>a>>b;
            addition = a+b;
            cout<<addition<<endl;
            return 0;
        }else if(choice == "subtraction"){
            float a;
            float b;
            float subtraction;
             cout<<"enter the numbers"<<endl;
             cin>>a>>b;
             subtraction = a-b;
             cout<<subtraction<<endl;
             return 0;
        }else if(choice == "division"){
            float a;
            float b;
            float division;
             cout<<"enter the numbers"<<endl;
             cin>>a>>b;
             division = a/b;
             cout<<division<<endl;
             return 0;
        }else if(choice == "multipication"){

            float a;
            float b;
            float multipication;
             cout<<"enter the numbers"<<endl;
             cin>>a>>b;
            multipication = a*b;
            cout<<multipication<<endl;
            return 0;
            
        }
        




        }else if(choice == "area"){
            cout<<"konsi figure ka area nikalna h ?"<<endl;
            cin>>choice;

            if(choice == "square"){

                cout<<"enter the side length"<<endl;
                float side_length;
                cin>>side_length;
                float arsquare;
                arsquare = side_length*side_length;
                cout<<arsquare<<endl;
                return 0;
            }else if(choice == "rectangle"){
                cout<<"enter the length and breadth"<<endl;
                float length;
                float breadth;
                float arrectangle;
                cin>>length>>breadth;
                arrectangle = length*breadth;
                cout<<arrectangle<<endl;
                return 0;
            }else if(choice == "circle"){
                cout<<"enter the radius"<<endl;
                float radius;
                cin>>radius;
                float pi = 3.14;
                float arcircle;
                arcircle = pi*radius*radius;
                cout<<arcircle<<endl;
                return 0;
            }else if(choice == "triangle"){
                cout<<"enter base and height"<<endl;
                float base;
                float height;
                float artriangle;
                cin>>base>>height;
                artriangle = 0.5*base*height;
                cout<<artriangle<<endl;
                return 0 ;

            }
    
    }else if(choice =="perimeter"){
   
      cout<<"select figure rectangle , square ,triangle , circle"<<endl;
      cin>>choice;

      if(choice == "square"){

        cout<<"enter the side length"<<endl;
        float side_length;
        cin>>side_length;
        float prisquare;
        prisquare = 4*side_length;
        cout<<prisquare<<endl;
        return 0;

      }else if(choice == "rectangle"){
      
        float length;
        float breadth;
        float prirectangle;
        cout<<"enter length and breadth"<<endl;
        cin>>length>>breadth;
        prirectangle = 2*(length + breadth);
        cout<<prirectangle<<endl;
        return 0;
      }else if(choice == "circle"){

        float radius;
        cout<<"enter the radius"<<endl;
        cin>>radius;
        float pi = 3.14;
        float pricircle;
        pricircle = pi*2*radius;
        cout<<pricircle<<endl;
        return 0;

      }else if( choice == "triangle"){

     float a; 
     float b;
     float c;
     float pritriangle;
     cout<<"enter the length of all 3 sides"<<endl;
     cin>>a>>b>>c;
     pritriangle = a + b + c;

     cout<<pritriangle<<endl;
     return 0;
      }

    }else{

        cout<<"invalid input"<<endl;
    }
    return 0;
}
