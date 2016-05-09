#include<bits/stdc++.h>
using namespace std;


//int main()
//{
//    int i = 3; //start from the 3rd member
//    long double f1 = 1, f2 = 1, f3;
//
//    do
//    {
//        f3 = f1 + f2;
//        f2 = f1;
//        f1 = f3;
//        cout<<log10(f1)<<endl;
//
//        if (log10(f3) >=1) break;
//    }
//    while(i++);
//
//    printf("%d", i);
//    return 0;
//}

vector<int> v_add(vector<int> &a, vector<int> &b) {
    int sum = 0;
    int carry = 0;
    if (a.size() > b.size()) {
        for (int i=b.size(); i < a.size(); i++)
            b.insert(b.begin(), 0);
    } else if (b.size() > a.size()) {
        for (int i=a.size(); i < b.size(); i++)
            a.insert(a.begin(), 0);
    }

    vector<int> temp (a.size(), 0);

    for (int i=a.size()-1; i >= 0; i--) {
        temp[i] = (carry + a[i] + b[i])%10;
        carry   = (carry + a[i] + b[i])/10;
    }
    if (carry > 0) temp.insert(temp.begin(), carry);

    return temp;
}

int main(int argc, char *argv[])
{
    vector<int> a;
    vector<int> b;

    a.push_back(1);
    b.push_back(1);
    int i=1;
    while (a.size() < 1000) {
        vector<int> temp = v_add(a, b);
        a = b;
        b = temp;
        i++;
    }
    cout << i << endl;
    return 0;
}
