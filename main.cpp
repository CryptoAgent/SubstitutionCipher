#include <iostream>
#include <string>
#include "SCfunc.h"

using namespace std;
//On decryption side you need same keys
const int alph_a = 97;
const int alph_z = 122;
string keys[26]={"@&a","(!3","@(#","3!@","!2*","!@(#","a1!","@1#","@!@","^$#","@1!","(@!","@&#","20!","0@1","31&","#*7","!<$","?<>","?!@","?*#,","{\!","{#}","@<{","\0@","@0|"};
int main(){

string mess = GetMess();
int lenght = GetLen(mess);
string encr[lenght];

//Encryption
for(int i = 0;i<lenght;i++){
    char ch = mess[i];
    if(ch>=alph_a&&ch<=alph_z){
    if(isupper(ch)){
        ch = tolower(ch);
    }
        int ch_ind = (int)ch-alph_a;
        encr[i]=keys[ch_ind];
    }else{cout<<"Characters only!";break;}
}
cout<<"Your encrypted message :\r\n";
for(int i=0;i<lenght;i++){
    cout<<encr[i];
}


mess = GetMess();
lenght = GetLen(mess);
char decr[lenght/3];
//Decryption
int i = 0;
int o = 0;
while(o<lenght){
    char mss[3];
    for(int i = 0;i<3;i++){
        mss[i]=mess[o+i];
    }
    string str(mss,3);
    for(int j = 0;j<26;j++){
        if(str==keys[j]){
            char ch_indx = j+alph_a;
            decr[i]=ch_indx;
        }
    }
o+=3;
i++;
}
cout<<"Decrypted message :\r\n";
for(int i = 0;i<lenght/3;i++){
    cout<<decr[i];
}
return 0;
}
