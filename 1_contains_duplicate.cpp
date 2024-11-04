#include <iostream>
#include <vector>


int main() {
    std::vector<int> nums = {1, 2, 3, 3};
    bool is_duplicate = false;
    

    for(int i = 0; i < nums.size(); i++) {
        for(int j = i+1; j < nums.size(); j++) { //for first i check all the js to the right of it. for second i check all js next to it. 
            if (nums[i] == nums[j]) { 
            is_duplicate = true;
            }
        }
        
    }
    std::cout << is_duplicate << "\n";

    return 0;
}

/* Alright Clean this up then figure out how to submit it to Neetcode.io
*/