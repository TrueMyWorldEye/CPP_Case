#pragma once 
#include <iostream>
using namespace std;
#include <vector>
#include <map>
#include <algorithm>
#include <deque>
#include <functional>
#include <numeric>
#include <string>
#include <fstream>

// 
class Speaker
{
public:
	string m_Name;
	double m_Score[2];
};

//演讲管理类
class SpeechManager
{
public:
	//构造函数
	SpeechManager();

	void show_Menu(); // 显示菜单

	void exitSystem();

	void initSpeech(); // 初始化比赛


	void createSpeaker();


	void startSpeech();


	void speechDraw();


	void speechContest();


	void showScore();


	void saveRecord();


	void loadRecord();


	void showRecord();


	void clearRecord();


	bool fileIsEmpty;

	map<int, vector<string>>m_Record;
	
	vector<int>v1; //比赛选手 容器  12人

	vector<int>v2; //第一轮晋级容器  6人
	
	vector<int>vVictory; //胜利前三名容器 3人
	
	map<int, Speaker> m_Speaker; //存放编号 以及对应的具体选手容器

	int m_Index; // 比赛轮数

	//析构函数
	~SpeechManager();
};