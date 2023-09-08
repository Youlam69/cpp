#pragma once
#include <ctime>
#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

class PmergeMe{
    private:
        PmergeMe();
    public :
        PmergeMe(const PmergeMe &pm);
        PmergeMe& operator=(const PmergeMe &pm);
        static void isInteger_(std::string argv);
        static void pmergeMe_vc(std::vector<int> &values_vc, double& time);
        static void pmergeMe_dq(std::deque<int> &values_dq, double& time_);
};
