#include <iostream>
#include <string>
#include <iomanip>


class lol
{
    private:
        std::string _str;
        int _int;
    public:
    static void _printstr(std::string str, int s)
    {
        _str = str;
        _int = s;
        std::cout << _str << std::endl;
        std::cout << _int << std::endl;
    }

        
};
int main()
{

 lol::_printstr("lol");   
}