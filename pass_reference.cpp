#include <iostream>
using namespace std;
void swap (int* x,int* y)
{
    int swap;
   swap=*x;
   *x=*y;
   *y=swap;

}
int main(){
    int x=500,y=200;
    swap(x, y);
     cout<<"Value of x is :"<<x<<endl;
    cout<<"Value of y is :"<<y<<endl;
    return 0;
}

/*
Value of x is :200
Value of y is :500
    */
