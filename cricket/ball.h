#ifndef BALL_H
#define BALL_H


class Ball
{
    int ballNo,overNo,run,wicket,legal,extra,batsman,Nbatsman,bowler;
public:
    Ball(int BallG, int BallC);
    void setBall(int BallG,int BallC);
    void setValues(int Run,int Wicket,int Legal,int Extra,int Batsman,int NBatsman,int Bowler);
    void setValue(int Run,int Wicket,int Legal,int Extra);
    int getRun();
    int getWicket();
    int getLegal();
    int getExtra();
    int getBatsman();
    int getBowler();
    int getNBatsman();
    int getBall();
    int getOver();
};

#endif // BALL_H
