#include "general.h"

#ifndef _INSIDE_VISUAL_CPP_STRATEGYSYSTEM
#define _INSIDE_VISUAL_CPP_STRATEGYSYSTEM
class CStrategySystem : public CObject
{
    DECLARE_DYNAMIC(CStrategySystem)
public:
	void Action();
    ~CStrategySystem();
	CStrategySystem(int id);
    void ReceiveData(Robot1 bal,Robot2 ho1,Robot2 ho2,Robot2 ho3,Robot2 ho4,
		             Robot2 ho5,Robot2 ho6,Robot2 ho7,Robot2 ho8,Robot2 ho9,
					 Robot2 ho10,Robot2 hgo,Robot3 opp);

#ifdef _DEBUG
#endif // _DEBUG
private:
	void Stop(int which);
	void Position(int which, CPoint point);
	void NormalGame();
	void Velocity(int which, int vL, int vR);
	void Angle(int which, int desired_angle);
	void Goalie(int which);
	void DefenderY7(int which);
	void DefenderY8(int which);
	void DefenderY9(int which);
	void DefenderY10(int which);
	void AttackerY1(int which);
	void AttackerY2(int which);
	void AttackerY3(int which);
	void AttackerY4(int which);
	void AttackerY5(int which);
	void AttackerY6(int which);
	void DefenderB7(int which);
	void DefenderB8(int which);
	void DefenderB9(int which);
	void DefenderB10(int which);
	void AttackerB1(int which);
	void AttackerB2(int which);
	void AttackerB3(int which);
	void AttackerB4(int which);
	void AttackerB5(int which);
	void AttackerB6(int which);

	CRect       boundRect;     
	int m_nStrategy;
	int         m_OurTeam;  
	int         m_nGameArea;    
	double      ShootLen;                  
	int         nShoot;                    
	int			nSweep;
	int			nKick2;
	CPoint      ShootVar;                  
	CPoint      KickVar; 
	double      KickLen;  
	CCommand C_Home3;
	CCommand C_Home2;
	CCommand C_Home1;
	CCommand C_Home4;
	CCommand C_Home5;
	CCommand C_Home6;
	CCommand C_Home7;
	CCommand C_Home8;
	CCommand C_Home9;
	CCommand C_Home10;
	CCommand C_Home11;
	Robot1 ball;
	Robot2 home1,home2,home3,home4,home5,home6,home7,home8,home9,home10,hgoalie;
	Robot3 opponent;
	void Think();
	void NormalGame5();
	void NormalGame4();
	void NormalGame3();
	void NormalGame2();
	void NormalGame1();
public:
	int command[35]; 
	
};

#endif // _INSIDE_VISUAL_CPP_STRATEGYSYSTEM
