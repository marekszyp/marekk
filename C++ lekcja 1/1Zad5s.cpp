#include "test.h"

Point::Point(float x, float y) {
    this->m_x=x;
    this->m_y=y;
}

float Point::y() {
    return m_y;
}

float Point::x() {
    return m_x;
}
