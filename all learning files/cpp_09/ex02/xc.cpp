#include <iostream>
#include <deque>

void mergeInsertSort(std::deque<int>& sequence) {
    if (sequence.size() <= 1)
        return;

    std::deque<int> left, right;
    size_t middle = sequence.size() / 2;

    // Split the sequence into two halves
    for (size_t i = 0; i < middle; ++i)
        left.push_back(sequence[i]);
    for (size_t i = middle; i < sequence.size(); ++i)
        right.push_back(sequence[i]);

    // Recursively sort the two halves
    mergeInsertSort(left);
    mergeInsertSort(right);

    // Merge the sorted halves
    sequence.clear();
    std::deque<int>::iterator leftIt = left.begin();
    std::deque<int>::iterator rightIt = right.begin();

    while (leftIt != left.end() && rightIt != right.end()) {
        if (*leftIt < *rightIt) {
            sequence.push_back(*leftIt);
            ++leftIt;
        } else {
            sequence.push_back(*rightIt);
            ++rightIt;
        }
    }

    // Copy the remaining elements
    while (leftIt != left.end()) {
        sequence.push_back(*leftIt);
        ++leftIt;
    }
    while (rightIt != right.end()) {
        sequence.push_back(*rightIt);
        ++rightIt;
    }
}






















void printSequence(const std::deque<int>& sequence) {
    for (std::deque<int>::const_iterator it = sequence.begin(); it != sequence.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

int main() {
    std::deque<int> sequence;
// 3 2 7 1
    sequence.push_back(3);
    sequence.push_back(2);
    sequence.push_back(7);
    sequence.push_back(1);

    std::cout << "Before sorting: ";
    printSequence(sequence);

    mergeInsertSort(sequence);

    std::cout << "After sorting: ";
    printSequence(sequence);

    return 0;
}





#include <iostream>
#include <list>

void mergeInsertSort(std::list<int>& sequence) {
    if (sequence.size() <= 1)
        return;

    std::list<int> left, right;
    size_t middle = sequence.size() / 2;

    // Split the sequence into two halves
    std::list<int>::iterator it = sequence.begin();
    for (size_t i = 0; i < middle; ++i, ++it)
        left.push_back(*it);
    for (; it != sequence.end(); ++it)
        right.push_back(*it);

    // Recursively sort the two halves
    mergeInsertSort(left);
    mergeInsertSort(right);

    // Merge the sorted halves
    sequence.clear();
    std::list<int>::iterator leftIt = left.begin();
    std::list<int>::iterator rightIt = right.begin();

    while (leftIt != left.end() && rightIt != right.end()) {
        if (*leftIt < *rightIt) {
            sequence.push_back(*leftIt);
            ++leftIt;
        } else {
            sequence.push_back(*rightIt);
            ++rightIt;
        }
    }

    // Copy the remaining elements
    while (leftIt != left.end()) {
        sequence.push_back(*leftIt);
        ++leftIt;
    }
    while (rightIt != right.end()) {
        sequence.push_back(*rightIt);
        ++rightIt;
    }
}

void printSequence(const std::list<int>& sequence) {
    for (std::list<int>::const_iterator it = sequence.begin(); it != sequence.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

int main() {
    std::list<int> sequence = {5, 2, 8, 1, 3};

    std::cout << "Before sorting: ";
    printSequence(sequence);

    mergeInsertSort(sequence);

    std::cout << "After sorting: ";
    printSequence(sequence);

    return 0;
}
