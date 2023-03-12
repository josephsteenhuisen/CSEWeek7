#include "perfect_integer_lambda.h"

using namespace std;

vector<int> find_perfect_numbers(const vector<int> input_list) {
    // empty vector
    vector<int> perfectnums;
    int count = 0;
    for_each(input_list.begin(), input_list.end(), [&](const int &num) {
      int sum_of_divisors = 0; //sum of all divisors of the current integer
      for (int i = 1; i < num; i++) { 
        if ((num % i) == 0) {
          sum += i;
          //cout << "sum was " << sum - i << " and is now " << sum << " and there have been " << count + 1 << " divisors so far" << endl;
          count += 1;
            }
      }
      if (sum == num) {
            perfectnums.push_back(num);
          }
      }
  );
    return perfectnums;
}
