#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int al[4] = {-1 , 2 , 1 ,-4} , target = -1 , size = 4;
    int a , b , c;                                                                                       
    sort(al , al + size);

    int closestsum = al[0] + al[1] + al[2];

    for(int i = 0; i < size - 2; i++){
        int left = i + 1 , right = size - 1;

        while(left < right){

            int currentsum = al[i] + al[right] + al[left];

            if(abs(target - currentsum) < abs(target - closestsum)){

                closestsum = currentsum;
                a = al[i];
                b = al[left];
                c = al[right];
            }

            if(currentsum > target){

                right--;

            }else{
                left++;
            }
        }
    }
    cout<<"targeted sum is "<<target<<endl;
    cout<<"numbers which make closest sum are "<<a<<" "<<b<<" "<<c<<endl;
}