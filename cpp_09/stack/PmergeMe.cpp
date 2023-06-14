# include "PmergeMe.hpp"


void	merge_dq(std::deque<int> &dq, size_t start, size_t half, size_t end)
{
	std::deque<int>	left_array(dq.begin() + start, dq.begin() + half + 1);
	std::deque<int>	right_array(dq.begin() + half + 1, dq.begin() + end + 1);

	size_t	left_index = 0;
	size_t	right_index = 0;

	for(size_t i = start; i < end + 1; ++i)
	{
		if (left_index == left_array.size())
		{
			dq[i] = right_array[right_index];
			++right_index;
		}
		else if (right_index == right_array.size())
		{
			dq[i] = left_array[left_index];
			++left_index;
		}
		else if (left_array[left_index] < right_array[right_index])
		{
			dq[i] = left_array[left_index];
			++left_index;
		}
		else
		{
			dq[i] = right_array[right_index];
			++right_index;
		}
	}
}

void	insertion_dq(std::deque<int> &dq, size_t start, size_t end)
{
	if (dq[start] > dq[end])
	{
		int	tmp = dq[start];
		dq[start] = dq[end];
		dq[end] = tmp;
	}
}

void	dq_sort(std::deque<int> &dq, size_t start, size_t end)
{
	if (end - start >= 2)
	{
		size_t	half = (start + end) / 2;
		dq_sort(dq, start, half);
		dq_sort(dq, half + 1, end);
		merge_dq(dq, start, half, end);
	}
	else
		insertion_dq(dq, start, end);
}


void pmergeme (std::list<std::string> &splitNumbers) {

    t_pmergeme ret;
    useconds_t time_algotithm1;
    useconds_t time_algotithm2;

    // checkNumber(splitNumbers);
    std::list<std::string>::iterator it = splitNumbers.begin();
    
    for (; it != splitNumbers.end(); it++)
        ret.push_back(atoi(it->c_str()));
    time_algotithm1 = _sort_(ret);
    time_algotithm2 = _stable_sort_(ret);

    std::cout << "Time to process a range of " << splitNumbers.size() << " elements with std::sort : " << time_algotithm1 << " us" << std::endl;
    std::cout << "Time to process a range of " << splitNumbers.size() << " elements with std::stable_sort : " << time_algotithm2 << " us" << std::endl;
}