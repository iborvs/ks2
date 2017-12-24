#include"candidate.h"

unsigned int Candidate::cndidatsNum=0;
vector<Candidate>Candidate::cndidats;
Candidate::Candidate()
{
    name="";
    voteNmbr=0;
    id=0;
}
Candidate::Candidate(const Candidate& a)
{
    name=a.name;
    voteNmbr=a.voteNmbr;
    id=a.id;
}
bool Candidate::inputCndidat()
{
    cout<<"��������:"<<endl;
    if(cin>>this->name)
    {
        this->id=++cndidatsNum;
        cndidats.push_back(*this);
        return true;
    }
    else
        return false;
}
int Candidate::showVotes()
{
    return voteNmbr;
}
bool Candidate::vote()
{
    cout<<"����ѡƱ:"<<endl;
    if(cin>>this->voteNmbr)
        return true;
    else
        return false;
}
bool Candidate::countVote()
{
    vector<int> votes;
    int maxs=0,id=0;
    while(cndidats.size()!=0)
    {
        Candidate a;
        a=cndidats.back();
        votes.push_back(a.showVotes());
        cndidats.pop_back();
    }
    reverse(votes.begin(),votes.end());
    while(votes.size()!=0)
    {
        if(maxs<votes.back()){
             maxs=votes.back();
             id=votes.size();
        }
        votes.pop_back();
    }
    if(maxs< (int)(cndidatsNum/2+0.5))
        cout<<"�����ڻ�ð���ѡƱ���ϵĲ�ѡ��"<<endl;
    else
        cout<<"��ѡ��Ϊ:"<<id<<endl;
    return true;
}
