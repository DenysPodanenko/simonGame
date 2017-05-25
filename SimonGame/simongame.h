#ifndef SIMONGAME_H
#define SIMONGAME_H

#include <iostream>
#include <ctime>

#include <QtWidgets/QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QImage>
#include <qtimer.h>
#include <DevicePanel.h>
#include "Device.h"
#include "Tittle.h"
#include <QtWidgets/QPushButton>
#include <QGraphicsSimpleTextItem>
#include "LightItem.h"
#include <qmessagebox.h>
#include <QRadioButton>

class SimonGame : public QMainWindow
{
	Q_OBJECT

public:
	QGraphicsView *view;
	QGraphicsScene *scene;

	Device *simon;
	DevicePanel *panel;
	Tittle *tittle;
	LightItem *redItem;
	LightItem *greenItem;
	LightItem *blueItem;
	LightItem *yellowItem;

	QGraphicsSimpleTextItem *btnStartDesk;
	QGraphicsSimpleTextItem *btnHardCoreDesk;
	QGraphicsSimpleTextItem *counterDesk;
	QGraphicsSimpleTextItem *tumblerOn;
	QGraphicsSimpleTextItem *tumblerOff;

	QPushButton *start;
	QRadioButton *hardCore;
	QPushButton *tumbler;

	QGraphicsSimpleTextItem *lblScore;

	SimonGame(QWidget *parent = 0);
	~SimonGame();

	bool standartColor;
	int countElem;
	int currentElem;

	int score;
	int someNum;

	QVector<int> elements;
	QVector<int> userSequance;
	QTimer *turn;

	void equalsMass(QVector<int>, QVector<int>);
	void disEnabElems();
	void enabElems();
public slots:
	void startApp();
	void changeColor();
	void numberAdd();

	void btnRedAcion();
	void btnGreenAction();
	void btnBlueAction();
	void btnYellowAction();
signals:
	void addElement();
};

#endif // SIMONGAME_H
