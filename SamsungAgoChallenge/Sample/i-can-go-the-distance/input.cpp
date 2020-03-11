#include <iostream>
#include <fstream>
#include <string>

int main ()
{
int a;
  std::ifstream file("000.in",  std::ios_base::in);
  std::string str;
  while (std::getline(file, str)) {
    std::cout << str << "n";
    while(str >> a){
    	printf("%d", a);
	}
	getchar();
	return 0;
  }
}
