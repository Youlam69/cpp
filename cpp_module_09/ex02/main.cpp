#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    try
    {
        if (argc < 3)
            throw std::runtime_error("Error: one args");
        (void)argc;
        std::vector<int> values_vc;
        std::deque<int> values_dq;
        double time, time_;
        int i = 1;
        while (argv[i])
        {
            PmergeMe::isInteger_(argv[i]);
            i++;
        }
        i = 1;
        std::cout << "Before :  ";
        while (argv[i])
        {
            values_vc.push_back(atoi(argv[i]));
            values_dq.push_back(atoi(argv[i]));
            std::cout << atoi(argv[i]) << " ";
            i++;
            
        }
        std::cout << std::endl;
        PmergeMe::pmergeMe_vc(values_vc, time);
        PmergeMe::pmergeMe_dq(values_dq, time_);
        std::cout << "Time to process a range of "<< argc - 1 <<" elements with std::vector<int> : " << time << " us" << std::endl;
        std::cout << "Time to process a range of "<< argc - 1 <<" elements with std::deque<int> : " << time_ << " us" << std::endl;
        
    }
    catch (std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }
    
}