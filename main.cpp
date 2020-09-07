#include <iostream>

const int MAXCAPACITY = 10; //it is not the size of the array but rather max limit, just to stop memory leak.

int main() {
  int nums[10];
  int *evenNums;
  int *oddNums;
  int evenIndex = 0,oddIndex = 0;
  evenNums = new int[MAXCAPACITY];
  oddNums = new int[MAXCAPACITY];
  for(int index = 0 ; index < MAXCAPACITY ; index++){
    std::cout << "Enter Number for index " << index << ": ";
    std::cin>>nums[index];
  }
  for(int index = 0 ; index < MAXCAPACITY ; index++){
    if(nums[index] % 2 == 0) evenNums[evenIndex++] = nums[index];
    else oddNums[oddIndex++] = nums[index];
  }
  std::cout << "EVEN NUMBERS \n";
  for(int index = 0 ; index < evenIndex ; index++){
    std::cout << evenNums[index] << std::endl;
  }
  std::cout << "ODD NUMBERS \n";
  for(int index = 0 ; index < oddIndex ; index++){
    std::cout << oddNums[index] << std::endl;
  }
}