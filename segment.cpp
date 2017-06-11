#include "segment.h"

Segment::Segment()
{

}

QPointF Segment::getX() const
{
    return x;
}

void Segment::setX(const QPointF &value)
{
    x = value;
}

QPointF Segment::getY() const
{
    return y;
}

void Segment::setY(const QPointF &value)
{
    y = value;
}

double Segment::getDist(QPointF a, QPointF b)
{
    return sqrt((b.x()-a.x())*(b.x()-a.x()) + (b.y()-a.y())*(b.y()-a.y()));
}
