#include <iostream>
#include <string>
using namespace std;


class PlayerScore
{
private:
    int ballsFaced;
    int score;
    double sr = 0.0;


public:
    // Default Constructor
    PlayerScore()
    {
        ballsFaced = 0;
        score = 0;
    }
    // Parameterized Constructor
    PlayerScore(int balls, int runs)
    {
        ballsFaced = balls;
        score = runs;
    }


    // Friend Function
    friend void showScore(PlayerScore);
    // Example 2
    friend void calculateStrikeRate(PlayerScore);
};


// Friend Function is a special function used to access the Class Functions out of the class and can also access private data members


void showScore(PlayerScore player)
{
    cout << "The player has scored " << player.score << " runs in " << player.ballsFaced << " balls.\n";
}


void calculateStrikeRate(PlayerScore p)
{
    p.sr = (static_cast<double>(p.score) / p.ballsFaced) * 100;
    cout << "The player has scored " << p.score << " runs at the strike rate of " << p.sr << endl;
}


int main()
{
    PlayerScore player1(25, 44);
    PlayerScore player2(33, 83);


    showScore(player1);
    calculateStrikeRate(player1);
    showScore(player2);
    calculateStrikeRate(player2);
}

