//Including libraries to use certain functions
#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
    string ipAddress;//declaring variable ipAddress with datatype string
    cout<<"Enter an IP address:";//printing
    cin>>ipAddress;//taking input for ipAddress

    istringstream iss(ipAddress);
    int octet[4];
    char delimeter;
    iss>>octet[0]>>delimeter>>octet[1]>>delimeter>>octet[2]>>delimeter>>octet[3];
    //checking which class it represents using if else

    if(octet[0]>=1 && octet[0]<=126){
        cout<<"Class A IP address"<<endl;
    }
    else if(octet[0]>=128 && octet[0]<=191){
    cout<<"Class B IP address "<<endl;
    }
    else if(octet[0]>=192 && octet[0]<=223){
        cout<<"Class C IP address"<<endl;
    }
    else if(octet[0]>=224 && octet[0]<=239){
        cout<<"Class D IP address"<<endl;
    }
    else if(octet[0]>=240 && octet[0]<=255){
        cout<<"Class E IP address"<<endl;
    }
    else{//if not any this will be printed
        cout<<"Invalid IP address"<<endl;
    }
    return 0;

    
}