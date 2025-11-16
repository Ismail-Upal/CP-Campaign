#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
// Forward declarations
string addStrings(const string& a, const string& b);
string subtractStrings(const string& a, const string& b);
string multiplyStrings(const string& a, const string& b);
string divideStrings(const string& a, const string& b);
string lastXDigits(const string& num, ll x);
//-------------------------------------------
// Compare absolute values: return 1 if |a| > |b|, -1 if |a| < |b|, 0 if equal
int compareAbs(const string& a, const string& b) {
    string absA = (a[0] == '-') ? a.substr(1) : a;
    string absB = (b[0] == '-') ? b.substr(1) : b;
    if (absA.size() != absB.size()) return absA.size() > absB.size() ? 1 : -1;
    return absA > absB ? 1 : (absA < absB ? -1 : 0);
}

// Remove leading zeros and handle zero case
string normalize(const string& s) {
    size_t start = s.find_first_not_of('0');
    if (start == string::npos) return "0";
    return s.substr(start);
}

// Get absolute value as string
string absStr(const string& s) {
    return (s[0] == '-') ? s.substr(1) : s;
}

// Core addition for positive numbers
string addAbs(const string& a, const string& b) {
    string result;
    int carry = 0, i = a.size() - 1, j = b.size() - 1;
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';
        result.push_back(sum % 10 + '0');
        carry = sum / 10;
    }
    reverse(result.begin(), result.end());
    return result;
}

string addStrings(const string& a, const string& b) {
    bool negA = a[0] == '-', negB = b[0] == '-';
    string absA = absStr(a), absB = absStr(b);
    
    if (negA && negB) return "-" + addAbs(absA, absB);
    if (!negA && !negB) return addAbs(absA, absB);
    if (negA) return subtractStrings(b, absA);
    return subtractStrings(a, absB);
}

// Core subtraction for |a| >= |b|
string subtractAbs(const string& a, const string& b) {
    string result;
    int borrow = 0, i = a.size() - 1, j = b.size() - 1;
    while (i >= 0 || j >= 0 || borrow) {
        int diff = borrow;
        if (i >= 0) diff += a[i--] - '0';
        if (j >= 0) diff -= b[j--] - '0';
        if (diff < 0) {
            diff += 10;
            borrow = -1;
        } else {
            borrow = 0;
        }
        result.push_back(diff + '0');
    }
    reverse(result.begin(), result.end());
    return normalize(result);
}

string subtractStrings(const string& a, const string& b) {
    bool negA = a[0] == '-', negB = b[0] == '-';
    string absA = absStr(a), absB = absStr(b);
    
    if (negA && negB) return subtractStrings(absB, absA);
    if (negA) return "-" + addAbs(absA, absB);
    if (negB) return addAbs(absA, absB);
    
    int cmp = compareAbs(a, b);
    if (cmp == 0) return "0";
    if (cmp > 0) return subtractAbs(absA, absB);
    return "-" + subtractAbs(absB, absA);
}

string multiplyStrings(const string& a, const string& b) {
    bool negative = ((a[0] == '-') ? 1 : 0) ^ ((b[0] == '-') ? 1 : 0);
    string absA = absStr(a), absB = absStr(b);
    if (absA == "0" || absB == "0") return "0";
    
    vector<int> result(absA.size() + absB.size(), 0);
    for (int i = absA.size() - 1; i >= 0; --i) {
        for (int j = absB.size() - 1; j >= 0; --j) {
            int mul = (absA[i] - '0') * (absB[j] - '0');
            int pos1 = i + j, pos2 = i + j + 1;
            int sum = mul + result[pos2];
            result[pos2] = sum % 10;
            result[pos1] += sum / 10;
        }
    }
    
    // Propagate carry
    for (int i = result.size() - 1; i > 0; --i) {
        if (result[i] >= 10) {
            result[i - 1] += result[i] / 10;
            result[i] %= 10;
        }
    }
    
    // Convert to string, remove leading zeros
    string res;
    bool leadingZero = true;
    for (int num : result) {
        if (leadingZero && num == 0) continue;
        leadingZero = false;
        res += num + '0';
    }
    if (negative && !res.empty() && res != "0") res = "-" + res;
    return res.empty() ? "0" : res;
}

string divideStrings(const string& a, const string& b) {
    if (b == "0") throw invalid_argument("Division by zero");
    bool negative = ((a[0] == '-') ? 1 : 0) ^ ((b[0] == '-') ? 1 : 0);
    string absA = absStr(a), absB = absStr(b);
    if (absA == "0") return "0";
    
    if (compareAbs(absA, absB) < 0) return "0";
    
    string quotient;
    string remainder = "";
    for (char digit : absA) {
        remainder += digit;
        remainder = normalize(remainder);
        if (compareAbs(remainder, absB) < 0) {
            if (!quotient.empty()) quotient += '0';
            continue;
        }
        int quotDigit = 0;
        string tempRem = remainder;
        while (compareAbs(tempRem, absB) >= 0) {
            tempRem = subtractAbs(tempRem, absB);
            quotDigit++;
        }
        quotient += quotDigit + '0';
        remainder = tempRem;
    }
    quotient = normalize(quotient);
    if (negative && quotient != "0") quotient = "-" + quotient;
    return quotient;
}

string lastXDigits(const string& num, ll x) {
    if (num == "0") return "0";
    bool negative = num[0] == '-';
    string absNum = absStr(num);
    if (absNum.size() <= static_cast<size_t>(x)) return num;
    string last = absNum.substr(absNum.size() - x);
    return negative ? "-" + last : last;
}

int main()
{   
    opt();

        ll n, q; cin >> n >> q;
        ll x; cin >> x;
        string res = to_string(n);

        while(q--){
            char c; string y; cin >> c >> y;
            if(c == '+') res = addStrings(res, y);
            if(c == '-') res = subtractStrings(res, y);
            if(c == '*') res = multiplyStrings(res, y);
            if(c == '/') res = divideStrings(res, y);
        }

        cout << lastXDigits(res, x) << endl;    
    
    return 0;
}