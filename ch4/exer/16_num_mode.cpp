// exercise 16
// page 149
#include "../../std_lib_facilities.h"

int main()
{
    int number;
    vector<int> numbers = { 0, 0, 1, 1, 4, 0 };
    vector<int> filter_numbers;
    vector<int> scores;

    sort(numbers);

    for (int i = 0; i < numbers.size(); ++i) {
        if (i == 0) {
            filter_numbers.push_back(numbers[i]);
            scores.push_back(0);
        }
        else if (numbers[i] != numbers[i - 1]) {
            filter_numbers.push_back(numbers[i]);
            scores.push_back(0);
        }
    }

    for (int x : filter_numbers)
        cout << x << '\n';

    for (int i = 0; i < filter_numbers.size(); ++i) {
        for (int j = 0; j < numbers.size(); ++j) {
            if (numbers[j] == filter_numbers[i])
                scores[i]++;
        }
    }

    cout << '\n';
    for (int x : scores)
        cout << x << '\n';

    int mode = 0;
    int mode_score = 0;
    int max = filter_numbers.size() - 1;
    int min = filter_numbers[0];

    for (int i = 0; i < scores.size(); ++i) {
        if (i == 0) {
            mode = filter_numbers[i];
            mode_score = scores[i];
        }
        else if (scores[i] > mode_score) {
            mode = filter_numbers[i];
            mode_score = scores[i];
        }
    }

    cout << "Min: " << min << '\n';
    cout << "Max: " << max << '\n';

    int mode_count = 0;
    for (int i = 0; i < scores.size(); ++i) {
        if (scores[i] == mode_score) {
            ++mode_count;
        }
    }
    if (mode_score == 1 || mode_count > 1) {
        cout << "This list has no mode number." << '\n';
    }
    else
        cout << "Mode number: " << mode << '\n';
}