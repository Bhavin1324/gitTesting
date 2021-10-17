#include<iostream>
using namespace std;
class base{
    private:
    int a,b;
    public:
    // int sumup(int,int);
    // int avg(int,int);
    int sumup(int a,int b){
        return a+b;
    }
    int avg(int a,int b){
        return (a+b)/2;
    } 
};
/* int base::sumup(int a,int b){
    return a+b;
}
int base::avg(int a,int b){
    return (a+b)/2;
} */
int main(){
    base obj;
    int a,b;
    // Taking niput form usre 
    cout<<"Enter first number:"<<endl;
    cin>>a;
    cout<<"Enter second number:"<<endl;
    cin>>b;
    //implementation of object
    cout<<"Answer: " << obj.sumup(a,b);
    cout<<"Average: " << obj.avg(a,b);
    return 0;
}