#include <iostream>
#include <iomanip>
using namespace std;

class TheMotionPicture{
public:

    double IncreasingRatio(double p, double i){
        return ((i-p)*100)/p;
    }
};

int main(){
    TheMotionPicture tmp;

    double PreviousPrice, IncreasedPrice;

    cin >> PreviousPrice >> IncreasedPrice;

    cout << fixed << setprecision(2) << tmp.IncreasingRatio(PreviousPrice, IncreasedPrice) << "%" <<endl;
    return 0;
}
