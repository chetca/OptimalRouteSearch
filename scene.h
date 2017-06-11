#ifndef SCENE_H
#define SCENE_H

#include "segment.h"
#include <QGraphicsScene>
#include <QPaintEvent>
#include <QPainter>
#include <QVector>

class Scene : public QGraphicsScene
{
public:
    Scene();
    void paintEvent(QPaintEvent*);
    void drawSegment(Segment S);

    QVector<Segment> mapSegment;
};

#endif // SCENE_H
