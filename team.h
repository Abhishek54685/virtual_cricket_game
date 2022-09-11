#include"players.h" //string
#include<vector>



class Team
{
    public:
        std::string teamName;
        int totalRunScored;
        int totalRunGiven;
        int totalBollsBowled;
        int totalWickets;
        std::vector<Player>playerS;

        Team();


};

