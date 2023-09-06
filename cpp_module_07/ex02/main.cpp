#include "Array.hpp"
void   lool()
{
    system("leaks Array");
}
int main()
{

    try
    {
        Array<int> a(5);
        Array<int> b = a;
        for(int i = 0; i < 5; i++)
            a[i] = i * -1;
        std::cout << "a[1] = " << a[1] << std::endl;
        std::cout << "b[1] = " << b[1] << std::endl;
        std::cout << "b.size() = " << b.size() << std::endl;
        std::cout << "b[-1] = " << b[-1] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    // atexit(lool);


}