/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    //REF: https://en.wikipedia.org/wiki/Pangram
    string pangramTarget = "abcdefghijklmnopqrstuvwxyy"; //"abcdefghijklmnopqrstuvwxyz";
    cout << "Is this string : " << pangramTarget <<  " a pangram ?" << endl;
    
    bool pangramMark[26];
    int pangramCharIndex;
    
    //Steps:
    //a. mark all character if exist
    for(int i = 0; i < pangramTarget.length(); i++) {
        
        // if(pangramTarget[i] >= 'A' && pangramTarget[i] <= 'Z') {
        //     pangramCharIndex = pangramTarget[i] - 'A';
        // } else if(pangramTarget[i] >= 'a' && pangramTarget[i] <= 'z') {
        //     pangramCharIndex = pangramTarget[i] - 'a';
        // }
        // pangramMark[pangramCharIndex] = true;
        
        pangramMark[pangramTarget[i] - 'a'] = true;
        
    }
    
    //b. simply loop again through marked and break after there is one of character in alphabet not exist
    for(int i = 0; i < 26; i++){
        if(pangramMark[i] == false) {
            cout << "No, It's Not a Pangram";
            return false;
        }
    }
    
    cout << "Yes, It's a Pangram";
    return true;
}
