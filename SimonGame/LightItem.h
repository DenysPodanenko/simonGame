#pragma once

#include <QGraphicsEllipseItem>
#include <qbrush.h>
#include <qobject.h>
#include <QGraphicsSceneMouseEvent>

class LightItem :public QObject, public QGraphicsEllipseItem

{
	Q_OBJECT

public:
	LightItem(int number);
	~LightItem(void);

	int counter;

	void mousePressEvent(QGraphicsSceneMouseEvent * event);

signals:
	void lightItemClicked();
};

