#include<iostream>

using namespace std;
template<class T, class u>
T myMax(T x, u y){
    return (x>y)?x:y;
}
int main(){
    cout<<myMax(20.5,30);
}