#include "simongame.h"

SimonGame::SimonGame(QWidget *parent)
	: QMainWindow(parent)
{
	
	view = new QGraphicsView(this);
	view->setFixedSize(850,850);

	scene = new QGraphicsScene();
	scene->setSceneRect(0,0,850,850);

	view->setScene(scene);

	scene->setBackgroundBrush(QBrush(QImage("background.png")));

	simon = new Device();
	scene->addItem(simon);

	panel = new DevicePanel();
	scene->addItem(panel);

	tittle = new Tittle();
	scene->addItem(tittle);
	tittle->setPos(300,250);

	redItem = new LightItem(0);
	scene->addItem(redItem);
	redItem->setPos(200,100);

	greenItem = new LightItem(1);
	scene->addItem(greenItem);
	greenItem->setPos(500,100);

	blueItem = new LightItem(2);
	scene->addItem(blueItem);
	blueItem->setPos(200,600);

	yellowItem = new LightItem(3);
	scene->addItem(yellowItem);
	yellowItem->setPos(500,600);

	disEnabElems();

	start = new QPushButton(this);
	start->setIcon(QIcon("btnStartPress.png"));
	start->setStyleSheet(QLatin1String("QPushButton{border:none;}"));
	start->setGeometry(390,450,70,70);

	hardCore = new QRadioButton(this);
	hardCore->setStyleSheet(QLatin1String("QPushButton{border:none;}"));
	hardCore->setGeometry(490,450,70,70);

	tumbler = new QPushButton(this);
	tumbler->setIcon(QIcon("btnOnOff.png"));
	tumbler->setStyleSheet(QLatin1String("QPushButton{border:none;}"));
	tumbler->setGeometry(400,500,200,70);
	
	btnStartDesk = new QGraphicsSimpleTextItem("START");
	btnStartDesk->setFont(QFont("italic",10));
	btnStartDesk->setBrush(QBrush(Qt::gray));
	scene->addItem(btnStartDesk);
	btnStartDesk->setPos(410,450);

	btnHardCoreDesk = new QGraphicsSimpleTextItem("STRUCT");
	btnHardCoreDesk->setFont(QFont("italic",10));
	btnHardCoreDesk->setBrush(QBrush(Qt::gray));
	scene->addItem(btnHardCoreDesk);
	btnHardCoreDesk->setPos(480,450);

	lblScore = new QGraphicsSimpleTextItem();
	lblScore->setPos(400,400);
	scene->addItem(lblScore);
	lblScore->setText("Score: "+QString::number(0));

	srand(time(0));
	standartColor = true;
	score=0;
	
	turn = new QTimer();
	turn->setInterval(1000);
	connect(turn,SIGNAL(timeout()),this,SLOT(changeColor()));
	connect(this,SIGNAL(addElement()),this,SLOT(numberAdd()));
	connect(start,SIGNAL(clicked()),this,SLOT(startApp()));

	connect(redItem,SIGNAL(lightItemClicked()),this,SLOT(btnRedAcion()));
	connect(greenItem,SIGNAL(lightItemClicked()),this,SLOT(btnGreenAction()));
	connect(blueItem,SIGNAL(lightItemClicked()),this,SLOT(btnBlueAction()));
	connect(yellowItem,SIGNAL(lightItemClicked()),this,SLOT(btnYellowAction()));
}

SimonGame::~SimonGame()
{

}

void SimonGame::startApp()
{
	disEnabElems();

	turn->start();
	elements.clear();

	for(int i=0;i<3;i++)
	{
		emit numberAdd();
	}

	currentElem = 0;
	countElem = 3;
}

void SimonGame::numberAdd()
{
	int number = rand() % 4;
	elements.push_back(number);
}

void SimonGame::changeColor()
{
	disEnabElems();

	if(standartColor)
	{
		standartColor = false;

		switch(elements[currentElem])
		{
		case 0:
			{	
				redItem->setBrush(QBrush(Qt::red));
				break;
			}
		case 1:
			{
				greenItem->setBrush(QBrush(Qt::green));
				break;
			}
		case 2:
			{
				blueItem->setBrush(QBrush(Qt::blue));
				break;
			}
		case 3:
			{
				yellowItem->setBrush(QBrush(Qt::yellow));
				break;
			}
		}
	}
	else
	{
		standartColor=true;
		
		redItem->setBrush(QBrush(Qt::gray));
		greenItem->setBrush(QBrush(Qt::gray));
		blueItem->setBrush(QBrush(Qt::gray));
		yellowItem->setBrush(QBrush(Qt::gray));

		currentElem++;
	}

	if(currentElem == countElem)
	{
		currentElem =0;
		turn->stop();
		enabElems();
	}
}

void SimonGame::btnRedAcion()
{

	userSequance.push_back(0);
	equalsMass(userSequance,elements);
}

void SimonGame::btnGreenAction()
{
	userSequance.push_back(1);
	equalsMass(userSequance,elements);
}

void SimonGame::btnBlueAction()
{
	userSequance.push_back(2);
	equalsMass(userSequance,elements);
}

void SimonGame::btnYellowAction()
{
	userSequance.push_back(3);
	equalsMass(userSequance,elements);
}

void SimonGame::equalsMass(QVector<int> player, QVector<int> comp)
{
	for(int i=0;i<player.size();i++)
	{

		if(player[i] != comp[i])
		{
			QMessageBox msgBox;
			msgBox.setText("You make a mistake. Try again");
			msgBox.exec();

			userSequance.clear();
			if(hardCore->isChecked())
			{
				QMessageBox msgBox;
				msgBox.setText("You lose.");
				msgBox.exec();

				disEnabElems();

				lblScore->setText("Score: "+QString::number(0));
			}
			else
				turn->start();
		}
	}

	if(player.size() == comp.size())
	{
		turn->start();
		countElem++;
		userSequance.clear();
		emit addElement();
		score++;
		lblScore->setText("Score: "+QString::number(score));
		disEnabElems();
	}
}

void SimonGame::disEnabElems()
{
	redItem->setEnabled(false);
	greenItem->setEnabled(false);
	blueItem->setEnabled(false);
	yellowItem->setEnabled(false);
}

void SimonGame::enabElems()
{
	redItem->setEnabled(true);
	greenItem->setEnabled(true);
	blueItem->setEnabled(true);
	yellowItem->setEnabled(true);
}