#include <iostream>
using namespace std;

class ALongTimeAgo{
public:
    int year, testcase;

    int happenedDC_AC(int year){
        if (year < 2015)
            cout << 2015-year << " D.C." << endl;
        else
            cout << year-2014 << " A.C." << endl;

        return 0;
    }
};

int maim(){
    ALongTimeAgo alta;

    int i=1;

    cin >> alta.testcase;

    while (i<=alta.testcase){
        cin >> alta.year;

        alta.happenedDC_AC(alta.year);
        i++;
    }

    return 0;
}
