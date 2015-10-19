#include<string.h>

class hello 
{
	private:
		string hello = 'hello world!';

	public:
		string getString();
}

hello::hello()
{

}

string hello::getString()
{
	return hello;
}
