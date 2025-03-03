#include <iostream>
#include <fstream>

using Namespace std;

int main(){
  ifstream file;

  string word;
  while(file >> word){
    if(word.find(".text")){
      file >> word;
      cout << word << endl;
  }
  
  return 0;
}
