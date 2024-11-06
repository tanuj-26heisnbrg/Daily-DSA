#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'minimumDistances' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY a as parameter.
 */




/* created Function of minimum distance */

int minimumDistances(vector<int> a) {
    
     unordered_map<int, pair<int,int>> NumberToIdx;
    int MinDist = INT_MAX;

    for(int i = 0 ; i < a.size(); ++i){
        
        if(NumberToIdx.find(a[i]) == NumberToIdx.end()){
            NumberToIdx[a[i]] = make_pair(i,INT_MAX);
        }
        else{
            if(NumberToIdx[a[i]].second == INT_MAX){
                NumberToIdx[a[i]].second = i;
                MinDist = min(MinDist , (NumberToIdx[a[i]].second - NumberToIdx[a[i]].first));
            }

            else{
                int d = i - NumberToIdx[a[i]].second; 
                MinDist = min(MinDist , d);
            }
        }
    }

    if(MinDist == INT_MAX)
        return -1;
    
    return MinDist;

}




// content of main function
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string a_temp_temp;
    getline(cin, a_temp_temp);

    vector<string> a_temp = split(rtrim(a_temp_temp));

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        int a_item = stoi(a_temp[i]);

        a[i] = a_item;
    }

    int result = minimumDistances(a);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
