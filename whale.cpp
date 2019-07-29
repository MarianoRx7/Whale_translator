#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

  std::string input = "";
  // Getting the users input to translate.
  
  std::cout << "Translate any sentence or word into Whale talk!\n" << " Type any word or sentence: \n\n";
 getline(cin, input);
  
  std::vector<char> vowels {'a', 'e','i','o','u'};

  std::vector<char> whale_talk;

  for (int i = 0; i < input.size(); i++) {
    
    for (int j = 0; j < vowels.size(); j++) {

      if (input[i] == vowels[j]) {

        whale_talk.push_back(input[i]);
       
        if (input[i] == 'e' || input[i] == 'u') {

        whale_talk.push_back(input[i]);
        
        }
      
      }
      
    }
  
  }
  
  for (int k = 0; k < whale_talk.size(); k++) {
    
    std::cout << whale_talk[k];
    
  }
  
  std::cout << "\n";
  
}
