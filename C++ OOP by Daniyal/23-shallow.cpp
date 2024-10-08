#include <iostream>
using namespace std;

class Team
{
    char *teamName;
    char *captainName;
    int *squardMember;
    int *points;

public:
    Team(const char *, const char *, int, int);
    Team(const Team &obj);
    ~Team();
    void setVla(const char *, const char *, int, int);
    char *getTeamName();
    char *getCaptainName();
    int *getSquardMem();
    int *getPoints();
    void displayVal();
};

Team::Team(const char *team, const char *captain, int member, int point)
{
    squardMember = new int;
    *squardMember = member;

    points = new int;
    *points = point;

    int len1 = 0;
    while (team[len1] != '\0')
    {
        len1++;
    }
    teamName = new char[len1];

    int i = 0;
    while (team[i] != '\0')
    {
        teamName[i] = team[i];
        i++;
    }
    teamName[i] = '\0';

    int len2 = 0;
    while (captain[len2] != '\0')
    {
        len2++;
    }
    captainName = new char[len2];

    int y = 0;
    while (captain[y] != '\0')
    {
        captainName[y] = captain[y];
        y++;
    }
    captainName[y] = '\0';
}

Team::Team(const Team &obj)
{
    teamName = obj.teamName;
    captainName = obj.captainName;
    squardMember = obj.squardMember;
    points = obj.points;
}

void Team::setVla(const char *team, const char *captain, int member, int point)
{
    *squardMember = member;
    *points = point;

    delete[] teamName;

    int len1 = 0;
    while (team[len1] != '\0')
    {
        len1++;
    }
    teamName = new char[len1 + 1];

    int i = 0;
    while (team[i] != '\0')
    {
        teamName[i] = team[i];
        i++;
    }
    teamName[i] = '\0';

    delete[] captainName;

    int len2 = 0;
    while (captain[len2] != '\0')
    {
        len2++;
    }
    captainName = new char[len2 + 1];

    int y = 0;
    while (captain[y] != '\0')
    {
        captainName[y] = captain[y];
        y++;
    }
    captainName[y] = '\0';
}

char *Team::getTeamName()
{
    return teamName;
}
char *Team::getCaptainName()
{
    return captainName;
}
int *Team::getSquardMem()
{
    return squardMember;
}
int *Team::getPoints()
{
    return points;
}

void Team::displayVal()
{
    cout << "The name of team is :";
    for (int i = 0; teamName[i] != '\0'; i++)
    {
        cout << *(teamName + i);
    }
    cout << endl;
    cout << "The captain of team is :";
    for (int i = 0; captainName[i] != '\0'; i++)
    {
        cout << *(captainName + i);
    }
    cout << endl;
    cout << "Total members of team  is :" << *squardMember << endl;
    cout << "The team ha total  :" << *points << " points " << endl;
    cout << endl;
    cout << "-----------------------" << endl;
    cout << endl;
}

Team::~Team()
{
    delete[] teamName;
    delete[] captainName;
    delete squardMember;
    delete points;
}

int main()
{

    Team teamOne("Pakistan", "Babar Azam", 16, 10);
    teamOne.displayVal();

    Team teamTwo(teamOne);
    teamTwo.displayVal();

    teamOne.setVla("India", "Virat Kohli", 14, 6);
    teamOne.displayVal();

    teamTwo.displayVal();
}

// This is comp exp of shallow copy