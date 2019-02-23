#include <iostream>
#define BUFFER_SIZE 10

using namespace std;

typedef struct
{

}itemyogi;
itemyogi buffer[BUFFER_SIZE];
int masukgo = 0;
int kluargo = 0;

int main()
{
	itemyogi nextPoduced;
	while (1)
	{
		while ((masukgo + 1) % BUFFER_SIZE) == kluargo)
		;
		buffer[masukgo] = nextPoduced;
		masukgo = ( masukgo + 1) % BUFFER_SIZE;
	}
}
