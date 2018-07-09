#include <iostream>

using namespace std;

int main(){

     int choice;
     cout << "CLI interface for Basic Crptographic method - Ceasar Cipher " << endl;
     cout << "1. Encryption" << endl << "2. Decryption" << endl << "Enter choice(1,2): ";
     cin >> choice;
     cin.ignore();

        if(choice == 1) {
            //encryption
            string msg;
            cout << "Message can only be alphabetic" << endl;
            cout << "Enter message: ";
            getline(cin, msg);

            int key;
            cout << "Enter Key (0 - 25):";
            cin >> key;
            cin.ignore();

            string encryptedText = msg;

            for (int i=0; i< msg.size(); i++ ) {
                if (msg[i]==32) {
                    continue; // 32 is ASCII of space character, we will ignore it
                } else{
                    if(msg[i]+key) > 122 {
                        //after lowercase z move back to a, z's ASCII is 122
                        int temp = (msg[i] + key) - 122;
                        encryptedText[i] = 96 + temp;
                    } else if(msg[i] + key > 90 && msg[i] <= 96 ){
                        int temp = (msg[i] +key) -90;
                        encryptedText[i] = 64 + temp;
                    } else {
                        //in case of characters being in Between A-Z  & a-z
                        encryptedText[i] += key;

                    }
                } //if
            } //for

         }

}
