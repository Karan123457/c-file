#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"input 2 Numbers"<<endl;
   cin>>n1>>n2;

char op;
cout<<"input an operator"<<endl;
cin>>op;


switch(op)
{
case '+':
    cout<<n1+n2<<endl;
    break;
case '-':
    cout<<n1-n2<<endl;
    break;
case '*':
    cout<<n1*n2<<endl;
    break;
case '/':
    cout<<n1/n2<<endl;
    break;
    default:
    cout<<"Needs More Improve"<<endl;

}
return 0;}





