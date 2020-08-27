//Accepted
#include <iostream>
#include <vector>
#include <algorithm>
#define min(a,b) ((a)<(b)?(a):(b))
using std::vector;

double get_optimal_value(int capacity, vector<double> weights, vector<double> values) {
  double value = 0.0;
  // write your code here
  int n = values.size();
  vector<double> viwi(n);

  for(int i=0; i<n; i++){
    viwi[i]= values[i]/weights[i];
  }
  for(int i=0; i<n; i++)
  {
      double max1 = *max_element(viwi.begin(), viwi.end());
      vector<double>::iterator it = find(viwi.begin(), viwi.end(), max1);
      int index = distance(viwi.begin(), it);
      //std::cout<<"ma1:"<<max1<<"\n";
      double a = min(weights[index], capacity);
      //std::cout<<"a:"<<a<<"\n";
      value = value + a*max1;
      //std::cout<<"val:"<<value<<"\n";
      viwi.erase(it);
      values.erase(values.begin() + index);
      weights.erase(weights.begin() + index);
      capacity = capacity - a;
      //std::cout<<"cap:"<<capacity<<"\n";
      if(capacity <= 0){
        break;
      }
  }

  return value;
}

int main() {
  int n;
  int capacity;
  std::cin >> n >> capacity;
  vector<double> values(n);
  vector<double> weights(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  std::cout.precision(10);
  std::cout << optimal_value << std::endl;
  return 0;
}

