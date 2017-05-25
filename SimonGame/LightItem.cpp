#include "LightItem.h"


LightItem::LightItem(int number)
{
	setRect(0,0,100,100);
	setBrush(QBrush(Qt::gray));

	counter = number;
}


LightItem::~LightItem(void)
{
}

void LightItem::mousePressEvent(QGraphicsSceneMouseEvent * event)
{
	if(LightItem::contains(QPointF(event->pos().x(),event->pos().y())))
		emit lightItemClicked();
}