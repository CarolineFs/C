#include <iostream>
#include <vector>

using namespace std;

vector<float> barrier_bubble_sort(vector<float>* values, size_t len)
{

    bool barrier = 1;
    float transit;
    while (barrier)
    {
        barrier = 0;
        for (size_t i = 0; i != len - 1; i++)
            if (values->at(i) > values->at(i+1))
            {
                transit = values->at(i);
                values->at(i) = values->at(i + 1);
                values->at(i + 1) = transit;
                barrier = 1;
            }
    }
    return values;

}

int main()
{
    vector<float> values;
    float value;
    size_t len;

    cout << "Input array: " << endl;
    while (cin >> value)
        values.push_back(value);

    len = values.size() - 1;

    barrier_bubble_sort(&values, len);

    cout << "Result: " << endl;
    for (vector<float>::iterator iter = values.begin();
         iter != values.end(); iter++)
        cout << *iter << endl;

    return 0;
}
