#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<float> values;
    float value;
    const float begin_range = 1.40;
    const float end_range = 1.6;
    int k = 0;

    cout << "Input values:" << endl;
    while (cin >> value)
        values.push_back(value);

    for (vector<float>::iterator iter = values.begin();
         iter != values.end(); iter ++)
        if((*iter <= end_range) and (*iter >= begin_range))
            k++;

    cout << "Values fit in range: " << k << endl;

    return 0;
}
