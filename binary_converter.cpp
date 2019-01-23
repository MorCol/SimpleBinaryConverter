#include <iostream>
#include <cmath>

using namespace std;

int BinaryToDecimal(void){

  long int number;

  cout << "Please input Binary Number: ";
  cin >> number;

  long int DecimalNumber = 0;
  int i = 0;
  int remainder;

  while(number != 0){
    remainder = number%10;
    while((remainder != 0) && (remainder !=1)){
      cout << "Error: Not a Binary Number" << endl;
      cout << "Please input a valid number" << endl;
      cin >> number;
      remainder = number%10;
    }
    number /= 10;
    DecimalNumber += remainder*pow(2,i);
    //cout << number << endl;
    i++;
  }

  //cout << DecimalNumber << endl;
  cout << "Your number in Base 10 is: " << DecimalNumber << endl;
  return 0;
}


int DecimalToBinary(void){

  long int number;

  cout << "Please input a Decimal Number: ";
  cin >> number;

  long int BinaryNumber = 0;
  int i = 0;
  int remainder;

  while(number != 0){
    remainder = number%2;
    BinaryNumber += remainder*pow(10,i);
    number /= 2;
    //cout << remainder << endl;
    i++;
  }

  cout << "Your number in Base 2 is: " << BinaryNumber << endl;

  return 0;
}

int main(){

  long n;
  int input;
  cout << "Would you like to convert:" << endl;
  cout << "1. Binary to Decimal" << endl;
  cout << "2. Decimal to Binary" << endl;

  cin >> input;

  while((input != 1) && (input != 2)){
    cout << "Invalid Selection." << endl;
    cout << "Please renter choice: ";
    cin >> input;
  }

  if(input == 1){
    BinaryToDecimal();
  }

  else if(input == 2){
    DecimalToBinary();
  }

}
