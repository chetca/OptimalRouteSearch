#ifndef SEGMENT_H
#define SEGMENT_H

#include <QPointF>
#include <cmath>
#include <algorithm>

class Segment{

public:
    Segment();
    QPointF getX() const;
    void setX(const QPointF &value);

    QPointF getY() const;
    void setY(const QPointF &value);

    double getDist(QPointF a, QPointF b);

private:
    QPointF x, y;
};

#endif // SEGMENT_H
