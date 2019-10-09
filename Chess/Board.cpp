#include "Board.h"
#include <QPainter>

Board::Board(QWidget *parent) : QWidget(parent)
{

}

void Board::paintEvent(QPaintEvent *)
{
    int d = 40;
    QPainter painter(this);

    for(int i = 1; i <= 10; i++)
    {
        painter.drawLine(d,i*d,9*d,i*d);
    }

    for(int j = 1; j < 10; j++)
    {
        if(j == 1 || j == 9)
        {
           painter.drawLine(j*d,d,j*d,10*d);
        }

        painter.drawLine(j*d,d,j*d,5*d);

        painter.drawLine(j*d,6*d,j*d,10*d);
    }
    painter.drawLine(4*d,d,6*d,3*d);
    painter.drawLine(4*d,3*d,6*d,d);
    painter.drawLine(4*d,10*d,6*d,8*d);
    painter.drawLine(4*d,8*d,6*d,10*d);





}
