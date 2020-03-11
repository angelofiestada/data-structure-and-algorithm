#include <bits/stdc++.h>
#include <fstream>
#include<iostream>
#include<string>
#include<typeinfo>
#include<sstream>
using namespace std;

struct Input
{
	int* data;
	struct Input* next;
};

struct Input *head;

void removeDupWord(string str) 
{ 
	int counter = 0;
    // Used to split string around spaces. 
    istringstream ss(str); 
  
    // Traverse through all words 
    do { 
        // Read a word 
        string word; 
        int num = 0;
        ss >> word;
        string s = word.str();
        stringstream geek(s);
        geek >> num;
//stringstream fs(word);
//fs >> num;
        cout >> num<< " ";
//sscanf(ss.str().c_str(), "%d", &num);
        counter++;
//        cout << typeid(word).name()<<endl;
  
        // Print the read word 
//        cout << "word"<< word << endl; 
        cout << typeid(num).name()<<endl;
//        cout << "thi  is mum"  << num <<endl;
        
  
        // While there is more to read 
    } while (ss); 
//    cout << "lengght is "<<counter;
    int *A = (int*)malloc((counter-1)*sizeof(int));
	
	for(int i = 0; i<counter -1; i++)
	{
		string word;
		int num = 0;
		ss >> word; 
		ss >>num;
cout << word;
//cout << num;
//		A[i] = (num);
	}
	
//	for(int i = 0; i<counter -1; i++)
//	{
//		printf("%d", A[i]);
//	}
    
}

int main(int argc, char **argv) {
	ifstream file("000.in");
if (file.is_open()) {
    string line;
    while (getline(file, line)) {
        // using printf() in all tests for consistency
//        printf("%s", line.c_str());
//cout<< line;
		removeDupWord(line);
        printf("\n\n");
        	
    }
    file.close();
}
   
    return 0;
}


