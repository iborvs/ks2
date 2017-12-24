#include<vector>
#include<string>
#include<iostream>
#include <algorithm>
using namespace std;
class Candidate
{
public:
    Candidate();
    Candidate(const Candidate& a);
    bool inputCndidat();
    bool vote();
    static vector<Candidate> cndidats;
    static unsigned int cndidatsNum;
    int showVotes();
    bool countVote();
private:
    string name;
    int id;
    int voteNmbr;
};
