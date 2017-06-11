#ifndef CANVAS_H
#define CANVAS_H

#include "scene.h"
#include <QWidget>

class Canvas : public QWidget
{
    Q_OBJECT

public:
    Canvas(QWidget *parent = 0);
    ~Canvas();

    Scene *scene;
};

#endif // CANVAS_H
