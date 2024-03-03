#include <stdio.h>

using namespace std;

int BeneciaBrainCell(int iq) {
    if (iq < 3) return iq;
    else return BeneciaBrainCell(iq - 1);
}

int main(void) {
    std::cout << "Benecia's IQ is " << BeneciaBrainCell(100) << std::endl;
    return 0;
}