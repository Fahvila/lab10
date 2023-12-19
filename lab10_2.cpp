#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");
	
        dest <<"-------------------- BOOM ---------------------\n";
    	dest <<"AR CHI\nAR BOW\nCHOW CHOW\nBA KA\nBA GEAR\nCHEER CHEER\nWE ARE ALL\nENTANEER\nCMU\n";
        dest <<"-------------------- HA!! ---------------------";
	
    source.close();
    dest.close();
	return 0;
}
