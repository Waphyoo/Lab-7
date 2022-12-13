#include<iostream>

using namespace std;
int adiff(int A,int B){
  int c=0;
  int a =A%360;
  int b =B%360;
  
  if(a-b>=0){
    c=a-b;
  }else{
    c=b-a;
  }
  if(c>180){
    return 360-c;
  }
  return c;
  
  
}


int main(){
  cout << adiff(180,270)<<"\n";
  cout << adiff(210,45);
  cout << adiff(0,360);
  cout << adiff(10,350);
  cout << adiff(95,260);
  cout << adiff(90,-90);
  cout << adiff(1000,280);
  cout << adiff(60,244);
}
