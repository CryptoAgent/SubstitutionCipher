#ifndef SCFUNC
#define SCFUNC

std::string GetMess(){
std::cout<<"\r\nPlease enter message\r\n";
std::string mess;
std::cin>>mess;
return mess;
}

int GetLen(std::string str){
int l;
for(int i = 0;str[i]!='\0';i++){
    l++;
}
return l;
}

#endif
