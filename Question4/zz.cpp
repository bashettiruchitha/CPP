#include<iostream>
#include<cstring>
enum playertype{ARCHIEVERS,EXPLORERS};
class Player{
    int *scores;
    unsigned int noofmatchesplayed=5;
    char *playername;
    public:
    Player(){
        noofmatchesplayed=2;
    }
    Player(int noofmatchesplayed){
        noofmatchesplayed=noofmatchesplayed;
    }
    Player(const Player &p ){
        playername =new char[strlen(p.playername)+1];
        strcpy(playername,p.playername);
    }
     bool operator==(const Player &p2 )
    {
        return this->getScores()==p2.getScores();
        
    }
    char operator[](int index)
    {
        if(!(index>=0 && index<strlen(playername)))
        {
            //it throw the exception when the range 
            throw "index out of range ";
             return playername[index];
        }
    }
       
friend std::ostream& operator<<(std::ostream &os,const Player &pp );
friend std::istream& operator>>(std::istream &is, Player &pp1);

~Player(){
    std::cout<<"~player()";
}
void display(){
    std::cout<<"\n the score is "<<scores;
    std::cout<<"\n the no of matches "<<noofmatchesplayed;
    std::cout<<"\n the playername "<<playername;

}

int *getScores() const { return scores; }
void setScores(int *scores_) { scores = scores_; }

int *getScores() const { return scores; }
void setScores(int *scores_) { scores = scores_; }

unsigned int getNoofmatchesplayed() const { return noofmatchesplayed; }
void setNoofmatchesplayed(unsigned int noofmatchesplayed_) { noofmatchesplayed = noofmatchesplayed_; }

char *getPlayername() const { return playername; }
void setPlayername(char *playername_) { playername = playername_; }

};
std::ostream&  operator<<(std::ostream &os,const Player &pp)
{
    os<<pp.getScores();
    // os<<pp.a<<" "<<pp.b;
}
std::istream& operator>>(std::istream &is, Player &pp1){
   std:: cout<<"enter the char name ";
    is>>pp1.playername;
    std::cout<<"enter the scores "<<pp1.scores;
    std::cout<<"enter the no of matches  ";
    is>>pp1.noofmatchesplayed;
    return is;
}


int mainavg(Player parr[],int size)
{
    int sum=0;

    for(int i=0;i<size;i++)
    {

       
    }
}
void showplayers(Player parr[],int s,playertype player){
    for(int i=0;i<s;i++){
        std::string tr;
     switch (player)
     {
     case playertype::ARCHIEVERS:tr="ARCHIEVRS";
        break;
     case playertype::EXPLORERS:tr="EXPLORER";
        break;
     }
}
}
int main()
{

    Player p1[3];
    for(int i=0;i<3;i++){
        p1->setPlayername("ruchitha");
        p1->setNoofmatchesplayed(2);
        

    }

}