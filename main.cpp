//
// Paulo de Jesús Ibarra Carballo - A00837745
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> suffixArrayNaive(string S) {
    int n = S.length();
    vector<string> sa;
    vector<int> A(n);
    S = S + "$";
    for (int i = 0; i < n; i++)
        sa.push_back(S.substr(n - i - 1, i + 1));
    sort(sa.begin(), sa.end());
    for (int i = 0; i < n; i++)
        A[i] = n - sa[i].size() + 1;
    return A;
}


int main() {
    string entrada;
    cout << "Introduce una cadena: ";
    getline(cin, entrada);

    vector<int> suffixArray = suffixArrayNaive(entrada);

    cout << "Valor Suffix: " << endl;
    for (int i : suffixArray)
        cout << i << endl;

    return 0;
}