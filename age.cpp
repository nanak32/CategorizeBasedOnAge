// A C++ program that categorizes a user based on his age.

#include <iostream>
using namespace std;

int main() {
  int age;
  cout << "Enter your age: ";
  cin >> age;

  if(age >=0 && age <=12){
    cout << "You are a child";
    }
    else if(age >=13 && age <=19){
        cout << "You are a teenager";
    }
    else if(age >=20 && age <=59){
        cout << "You are an adult";
    }
    else{
        cout << "You are a senior";
    }
  return 0;
}