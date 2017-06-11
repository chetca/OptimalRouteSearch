#include "canvas.h"

Canvas::Canvas(QWidget *parent)
    : QWidget(parent)
{
    scene = new Scene();
}

Canvas::~Canvas(){}
