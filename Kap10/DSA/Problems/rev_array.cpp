#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

// Reverse the Array
void reverseArray(std::vector<int>& arr) {
    int start = 0;
    int end = arr.size() - 1;
    while (start < end) {
        std::swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// Find Odd and Even Elements
void separateOddEven(const std::vector<int>& arr, std::vector<int>& odd, std::vector<int>& even) {
    for (int num : arr) {
        if (num % 2 == 0) {
            even.push_back(num);
        } else {
            odd.push_back(num);
        }
    }
}

// Count Frequency of Elements
std::unordered_map<int, int> countFrequency(const std::vector<int>& arr) {
    std::unordered_map<int, int> freq;
    for (int num : arr) {
        freq[num]++;
    }
    return freq;
}

// Remove Duplicates
std::vector<int> removeDuplicates(const std::vector<int>& arr) {
    std::unordered_map<int, bool> seen;
    std::vector<int> uniqueArr;
    for (int num : arr) {
        if (!seen[num]) {
            uniqueArr.push_back(num);
            seen[num] = true;
        }
    }
    return uniqueArr;
}

// Two Sum Problem
std::pair<int, int> twoSum(const std::vector<int>& arr, int target) {
    std::unordered_map<int, int> numMap;
    for (int i = 0; i < arr.size(); ++i) {
        int complement = target - arr[i];
        if (numMap.find(complement) != numMap.end()) {
            return {numMap[complement], i};
        }
        numMap[arr[i]] = i;
    }
    return {-1, -1}; // Return an invalid pair if no solution is found
}

// Rotate Array
void rotateArray(std::vector<int>& arr, int steps) {
    int n = arr.size();
    steps = steps % n;
    std::reverse(arr.begin(), arr.end());
    std::reverse(arr.begin(), arr.begin() + steps);
    std::reverse(arr.begin() + steps, arr.end());
}

// Find the Missing Number
int findMissingNumber(const std::vector<int>& arr, int n) {
    int total = n * (n + 1) / 2;
    int sum = 0;
    for (int num : arr) {
        sum += num;
    }
    return total - sum;
}

// Merge Two Sorted Arrays
std::vector<int> mergeSortedArrays(const std::vector<int>& arr1, const std::vector<int>& arr2) {
    std::vector<int> merged;
    int i = 0, j = 0;
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            merged.push_back(arr1[i++]);
        } else {
            merged.push_back(arr2[j++]);
        }
    }
    while (i < arr1.size()) {
        merged.push_back(arr1[i++]);
    }
    while (j < arr2.size()) {
        merged.push_back(arr2[j++]);
    }
    return merged;
}

// Kth Largest Element
int kthLargestElement(std::vector<int>& arr, int k) {
    std::nth_element(arr.begin(), arr.begin() + k - 1, arr.end(), std::greater<int>());
    return arr[k - 1];
}

// Max Subarray Sum (Kadane's Algorithm)
int maxSubarraySum(const std::vector<int>& arr) {
    int maxSoFar = arr[0], maxEndingHere = arr[0];
    for (int i = 1; i < arr.size(); ++i) {
        maxEndingHere = std::max(arr[i], maxEndingHere + arr[i]);
        maxSoFar = std::max(maxSoFar, maxEndingHere);
    }
    return maxSoFar;
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    
    // Reverse the Array
    reverseArray(arr);
    std::cout << "Reversed Array: ";
    for (int i : arr) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // Find Odd and Even Elements
    std::vector<int> odd, even;
    separateOddEven(arr, odd, even);
    std::cout << "Odd Elements: ";
    for (int i : odd) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    std::cout << "Even Elements: ";
    for (int i : even) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // Count Frequency of Elements
    std::unordered_map<int, int> freq = countFrequency(arr);
    std::cout << "Frequency of Elements: ";
    for (const auto& pair : freq) {
        std::cout << pair.first << ":" << pair.second << " ";
    }
    std::cout << std::endl;

    // Remove Duplicates
    std::vector<int> uniqueArr = removeDuplicates(arr);
    std::cout << "Array without Duplicates: ";
    for (int i : uniqueArr) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // Two Sum Problem
    int target = 5;
    std::pair<int, int> indices = twoSum(arr, target);
    std::cout << "Two Sum Indices for target " << target << ": " << indices.first << ", " << indices.second << std::endl;

    // Rotate Array
    int steps = 2;
    rotateArray(arr, steps);
    std::cout << "Rotated Array by " << steps << " steps: ";
    for (int i : arr) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // Find the Missing Number
    std::vector<int> arrWithMissing = {0, 1, 3};
    int missingNumber = findMissingNumber(arrWithMissing, 3);
    std::cout << "Missing Number: " << missingNumber << std::endl;

    // Merge Two Sorted Arrays
    std::vector<int> arr1 = {1, 3, 5};
    std::vector<int> arr2 = {2, 4, 6};
    std::vector<int> mergedArr = mergeSortedArrays(arr1, arr2);
    std::cout << "Merged Sorted Arrays: ";
    for (int i : mergedArr) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // Kth Largest Element
    std::vector<int> unsortedArr = {3, 2, 1, 5, 6, 4};
    int k = 2;
    int kthLargest = kthLargestElement(unsortedArr, k);
    std::cout << k << "th Largest Element: " << kthLargest << std::endl;

    // Max Subarray Sum (Kadane's Algorithm)
    std::vector<int> subarray = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int maxSum = maxSubarraySum(subarray);
    std::cout << "Max Subarray Sum: " << maxSum << std::endl;

    return 0;
}