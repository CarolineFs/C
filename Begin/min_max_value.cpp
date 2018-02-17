#include <iostream>
#include <vector>

using namespace std;

int main()
{
    float value, max, min;
    vector<float> values;

    cout << "Input array: " << endl;

    while (cin >> value)
        values.push_back(value);
    if (values[0] > values[1])
    {
        max = values[0];
        min = values[1];
    }
    else
    {
        max = values[1];
        min = values[0];
    }

    for (vector<float>::iterator iter = values.begin();
         iter != values.end(); iter++)
    {
        if (*iter > max)
            max = *iter;
        else if (*iter < min)
            min = *iter;
    }
    cout << "Maximum: " << max << "\n"
                        << "Minimum: "
                        << min << endl;

    return 0;
}
