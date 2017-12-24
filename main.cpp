#include <iostream>
#include <vector>
#include "candidate.h"
using namespace std;

int main()
{
    Candidate A;
    A.inputCndidat();
    A.vote();
    Candidate::cndidats[0].vote();
    return 0;
}
