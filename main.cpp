#include <bits/stdc++.h>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int main() {
    ifstream file("trainingdata.txt");
    string line;
    vector<double> battery_times;

    while (getline(file, line)) {
        size_t comma_pos = line.find(',');
        double charge_time = stod(line.substr(0, comma_pos));
        double battery_time = stod(line.substr(comma_pos + 1));
        battery_times.push_back(battery_time);
    }

    double max_bat = *max_element(battery_times.begin(), battery_times.end());
    double threshold = max_bat / 2.0;

    string timeCharged_temp;
    getline(cin, timeCharged_temp);
    double timeCharged = stod(ltrim(rtrim(timeCharged_temp)));

    double prediction = (timeCharged <= threshold) ? 2.0 * timeCharged : max_bat;

    cout << fixed << setprecision(2) << prediction << endl;

    return 0;
}

string ltrim(const string &str) {
    string s(str);
    s.erase(s.begin(), find_if(s.begin(), s.end(), [](int c) { return !isspace(c); }));
    return s;
}

string rtrim(const string &str) {
    string s(str);
    s.erase(find_if(s.rbegin(), s.rend(), [](int c) { return !isspace(c); }).base(), s.end());
    return s;
}
