#include "Tittle.h"


Tittle::Tittle(void)
{
	setFont(QFont("italic",42));
	setBrush(QBrush(Qt::gray));
	Tittle::setText("SIMON ");
}


Tittle::~Tittle(void)
{
}
