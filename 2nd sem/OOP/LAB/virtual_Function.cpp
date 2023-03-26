#include<iostream>
using namespace std;

class Baseclass{

    public:
       int var_base=69;
       void display(){           //without virtual baseclass ko obj run huncha pointer le derived lai point garey pani virtual use garda derived obj run huncha
           cout<<"1 This is "<<var_base<<endl;
       }
};
class Derivedclass:public Baseclass{
    public:
     int var_deri=411;
     void display(){
         cout<<"2. That is "<<var_deri<<endl;
         cout<<"3. that is "<<var_deri<<endl;
     }
};

int main(){
    Baseclass *bptr;  // base class ko pointer banayo
    Baseclass obj;
    Derivedclass obj2;
    
    bptr = &obj2; //pointer lai derived class ma point gardiyo
    bptr -> display();
    return 0;
}