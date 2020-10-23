/*
Program that creates a dynamic array based on user input and then prints out how many times each value occurs
Author: Denis Cimic 
*/
#include <iostream>
#include <string>

using namespace std;


int main() {
  int *numArray;
  int size = 0;
  cout << "Enter size: " << endl;
  cin >> size;

  numArray = new int[size];

  for(int i=0;i<size;i++){
    cout << "Enter the integers: " << endl;
    cin >> numArray[i];
  }

  bool empty = false;

  //runs while array is not empty
  while(!empty){
    int checkNum = 0;
    int counter = 0;
    int numOfTimes = 0;
    empty = true;

    //assume user can't input negative numbers
    for(int i=0;i<size;i++){

      if(numArray[i] != -1){

        checkNum = numArray[i];
        empty = false;
        counter = 0;

        for(int j=0;j<size;j++){

          if(numArray[j]==checkNum){

            counter++;
            //replaces counted location in array to -1 to symbolize empty
            numArray[j] = -1;

          }

        }
        cout << checkNum << " -> " << counter << " times" << endl;
      }
    }
  }
  delete [] numArray;

}
