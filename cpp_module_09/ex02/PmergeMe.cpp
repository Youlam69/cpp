#include "PmergeMe.hpp"

PmergeMe::PmergeMe(const PmergeMe &pm)
{
    *this = pm;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &pm)
{
    if (this != &pm)
        return *this;
    return *this;
}

void PmergeMe::isInteger_(std::string argv)
{
    int i = 0;
    if (argv.empty())
        throw std::runtime_error("Error: Empty Arg");
    while (argv[i])
    {
        
        if (!isdigit(argv[i]))
            throw std::runtime_error("Error: Not a Digit");
        i++;
    }
}

void PmergeMe::pmergeMe_vc(std::vector<int>& values_vc, double &time)
{   
    std::vector<std::pair<int, int> > pairs;

    clock_t start_time = clock();
    int struggler = -1;
    int even = (values_vc.size() % 2 == 0) ? 1 : 0; 
    if (values_vc.size() % 2 == 0)
    {
        for (size_t i = 1; i < values_vc.size(); i += 2)
        {
           if (values_vc[i - 1] > values_vc[i])
                pairs.push_back(std::pair<int, int> (values_vc[i - 1], values_vc[i]));
            else
                 pairs.push_back(std::pair<int, int> (values_vc[i], values_vc[i - 1]));
        }
    }
    else
    {
        for (size_t i = 1; i < values_vc.size() - 1; i += 2)
        {
            if (values_vc[i - 1] > values_vc[i])
                pairs.push_back(std::pair<int, int> (values_vc[i - 1], values_vc[i]));
            else
                 pairs.push_back(std::pair<int, int> (values_vc[i], values_vc[i - 1]));
        }
        struggler = values_vc.back();
        values_vc.pop_back();
    }

    std::sort(pairs.begin(), pairs.end());
    std::vector<int> mainchain, pend;
    mainchain.push_back(pairs[0].second);
    for (size_t i = 0; i < pairs.size(); i++)
        mainchain.push_back(pairs[i].first);
    for (size_t i = 1; i < pairs.size(); i++)
        pend.push_back(pairs[i].second);
    
    std::vector<size_t> jacob, index;
    jacob.push_back(3);
    jacob.push_back(5);
    for (size_t i = 2; i < pend.size(); i++) {
        int next = jacob[i - 1] + 2 * jacob[i - 2];
        jacob.push_back(next);
    }

    for (size_t i = 0; i < pend.size(); i++)
        index.push_back(i + 2);

    std::vector<size_t> combin;
    for (size_t i = 0;  i < pend.size(); i++)
    {
        if (std::find(combin.begin(), combin.end(), jacob[i]) == combin.end())
        {
            combin.push_back(jacob[i]);
        }
        for (size_t j = i; j < pend.size(); j++)
        {
            if (jacob[i] > index[j] && std::find(combin.begin(), combin.end(), index[j]) == combin.end())
            {
                combin.push_back(index[j]);
            }
        }
    }

    for (size_t i = 0; i < combin.size(); i++)
    {
        if (combin[i] - 2 < pend.size())
        {
            std::vector<int>::iterator it = std::lower_bound(mainchain.begin(), mainchain.end(), pend[combin[i] - 2]);
            mainchain.insert(it, pend[combin[i] - 2]);
        }
    }
    if (!even)
    {
        std::vector<int>::iterator it = std::lower_bound(mainchain.begin(), mainchain.end(), struggler);
        mainchain.insert(it,struggler);
    }
    clock_t end_time = clock();
    time = static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC * 1e6;
    std::cout << "After:  ";
    for (size_t i = 0; i < mainchain.size(); i++)
    {
        std::cout << mainchain[i] << " ";
    }
    std::cout << std::endl;
}
void PmergeMe::pmergeMe_dq(std::deque<int>& values_dq, double &time_)
{   
    std::deque<std::pair<int, int> > pairs;

    clock_t start_time = clock();
    int struggler = -1;
    int even = (values_dq.size() % 2 == 0) ? 1 : 0; 
    if (values_dq.size() % 2 == 0)
    {
        for (size_t i = 1; i < values_dq.size(); i += 2)
        {
           if (values_dq[i - 1] > values_dq[i])
                pairs.push_back(std::pair<int, int> (values_dq[i - 1], values_dq[i]));
            else
                 pairs.push_back(std::pair<int, int> (values_dq[i], values_dq[i - 1]));
        }
    }
    else
    {
        for (size_t i = 1; i < values_dq.size() - 1; i += 2)
        {
            if (values_dq[i - 1] > values_dq[i])
                pairs.push_back(std::pair<int, int> (values_dq[i - 1], values_dq[i]));
            else
                 pairs.push_back(std::pair<int, int> (values_dq[i], values_dq[i - 1]));
        }
        struggler = values_dq.back();
        values_dq.pop_back();
    }

    std::sort(pairs.begin(), pairs.end());

    

    std::deque<int> mainchain, pend;
    mainchain.push_back(pairs[0].second);
    for (size_t i = 0; i < pairs.size(); i++)
        mainchain.push_back(pairs[i].first);
    for (size_t i = 1; i < pairs.size(); i++)
        pend.push_back(pairs[i].second);
    
    std::deque<size_t> jacob, index;
    jacob.push_back(3);
    jacob.push_back(5);
    for (size_t i = 2; i < pend.size(); i++) {
        int next = jacob[i - 1] + 2 * jacob[i - 2];
        jacob.push_back(next);
    }

    for (size_t i = 0; i < pend.size(); i++)
        index.push_back(i + 2);

 std::deque<size_t> combin;
    for (size_t i = 0;  i < pend.size(); i++)
    {
        if (std::find(combin.begin(), combin.end(), jacob[i]) == combin.end())
        {
            combin.push_back(jacob[i]);
        }
        for (size_t j = i; j < pend.size(); j++)
        {
            if (jacob[i] > index[j] && std::find(combin.begin(), combin.end(), index[j]) == combin.end())
            {
                combin.push_back(index[j]);
            }
        }
    }

    for (size_t i = 0; i < combin.size(); i++)
    {
        if (combin[i] - 2 < pend.size())
        {
            std::deque<int>::iterator it = std::lower_bound(mainchain.begin(), mainchain.end(), pend[combin[i] - 2]);
            mainchain.insert(it, pend[combin[i] - 2]);
        }
    }
    if (!even)
    {
        std::deque<int>::iterator it = std::lower_bound(mainchain.begin(), mainchain.end(), struggler);
        mainchain.insert(it,struggler);
    }
    clock_t end_time = clock();
    time_ = static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC * 1e6;
}