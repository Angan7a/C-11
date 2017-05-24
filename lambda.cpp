#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4,435,435,435,34,543,54,54,5,6,77,8,566,434,23,4}; 
    vector<int> vec1(vec.size());
    auto f = [](int x) { return x*x; };
    auto it = copy_if(vec.begin(), vec.end(), vec1.begin(), [](int a) { return a>2; });
    vec1.resize(distance(vec1.begin(), it));
    sort(vec1.begin(), vec1.end()-1);    
    for(auto a : vec1) { cout << a << endl; }
    return 0;
}
