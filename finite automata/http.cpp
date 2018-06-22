#include <iostream>
#include <fstream>
#include <string>
#include <list>

using namespace std;

int main()
{
	char CurrentCharacter;
	ifstream MyStream("MyPacket.txt", ifstream::in);
	if (!MyStream.is_open())
	{
		cout << "Can't open: MyPacket.txt\n";
		return 0;
	}
	while (MyStream)
	{
		MyStream.get(CurrentCharacter);
		cout << CurrentCharacter;
	}
	
	
}